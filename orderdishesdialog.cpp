#include "orderdishesdialog.h"
#include "ui_orderdishesdialog.h"
#include "dishescountdialog.h"
#include "dishescountdialog.h"
#include <QStandardItemModel>

OrderDishesDialog::OrderDishesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OrderDishesDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("点菜");
    count=0;

    //数据库初始化并连接
    m_db= QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("data.db");
    if (!m_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }

    //foodtable
    ui->food_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->food_tableWidget->setAlternatingRowColors(true);
    ui->food_tableWidget->setColumnCount(2);
    ui->food_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //setEditTriggers(QAbstractItemView::NoEditTriggers);
    QStringList list;
    list<<"菜名"<<"菜价";
    ui->food_tableWidget->setHorizontalHeaderLabels(list);
    ui->food_tableWidget->setColumnWidth(0,160);
    ui->food_tableWidget->setColumnWidth(1,130);
    //设置列名为加粗
    QFont font=ui->food_tableWidget->horizontalHeader()->font();
    font.setBold(true);
    ui->food_tableWidget->horizontalHeader()->setFont(font);
    //去掉第一列标号
    QHeaderView *header=ui->food_tableWidget->verticalHeader();
    header->setHidden(true);
    //设置选中背景色
    ui->food_tableWidget->setStyleSheet("selection-background-color:lightblue;");
    ui->food_tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);//设置为可以选中单个

    //初始化菜单
    initFoodTable();

    //isfood_table

    ui->isSelcteFood_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->isSelcteFood_tableWidget->setAlternatingRowColors(true);
    ui->isSelcteFood_tableWidget->setColumnCount(2);
    ui->isSelcteFood_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QStringList listfood;
    listfood<<"菜名"<<"数量";
    ui->isSelcteFood_tableWidget->setHorizontalHeaderLabels(listfood);
    ui->isSelcteFood_tableWidget->setColumnWidth(0,160);
    ui->isSelcteFood_tableWidget->setColumnWidth(1,130);
    //设置列名为加粗
    QFont fontfood=ui->isSelcteFood_tableWidget->horizontalHeader()->font();
    fontfood.setBold(true);
    ui->isSelcteFood_tableWidget->horizontalHeader()->setFont(fontfood);
    //去掉第一列标号
    QHeaderView *headerfood=ui->isSelcteFood_tableWidget->verticalHeader();
    headerfood->setHidden(true);
    //设置选中背景色
    ui->isSelcteFood_tableWidget->setStyleSheet("selection-background-color:lightblue;");
    ui->isSelcteFood_tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);//设置为可以选中单个
    ui->isSelcteFood_tableWidget->setRowCount(50);



}

OrderDishesDialog::~OrderDishesDialog()
{
    delete ui;
}

void OrderDishesDialog::receiverIdData(QString data)
{
    idData=data;
    ui->lineEdit->setText(idData);
}



void OrderDishesDialog::on_OkButton_clicked()
{
    //此处实现将数据存入数据库
    int row=0;
    while(50>row)
    {
        QSqlQuery query(m_db);
        query.prepare("INSERT INTO BillInfo (TableID,FoodName,amount,expense)"
                      "VALUES (:deskid, :foodname, :foodcount,:price)");
        QAbstractItemModel *model=ui->isSelcteFood_tableWidget->model();
        QModelIndex indexfoodName=model->index(row,0);
        QModelIndex indexfoodPrice=model->index(row,1);
        QString tempfoodname=model->data(indexfoodName).toString();
        if(tempfoodname=="") break;
        QString tempfoodNumber=model->data(indexfoodPrice).toString();
        QString tempfoodPrice="";
        int i=0;
        while(1)
        {
            qDebug()<<"test";

            QAbstractItemModel *leftmodel=ui->food_tableWidget->model();
            QModelIndex leftfoodName=leftmodel->index(i,0);
           if(leftmodel->data(leftfoodName).toString()==tempfoodname)
           {
              QModelIndex leftfoodprice=leftmodel->index(i,1);
              tempfoodPrice=leftmodel->data(leftfoodprice).toString();
              break;
           }
           i++;
        }
        query.bindValue(":deskid", idData);
        query.bindValue(":foodname", tempfoodname);
        query.bindValue(":foodcount",tempfoodNumber);
        query.bindValue(":price",tempfoodPrice);
        row++;
        qDebug()<<"test2"<<row;
        if(query.exec())
        {
            qDebug()<<"存储成功";
        }
        else
        {
            qDebug()<<"存储失败";
        }
    }

    this->close();
}

void OrderDishesDialog::on_cancelButton_clicked()
{
    this->close();//关闭窗口
}
void OrderDishesDialog::on_deleteButton_clicked()
{
     QAbstractItemModel *model=ui->isSelcteFood_tableWidget->model();
    int curRow =ui->isSelcteFood_tableWidget->currentIndex().row();
    model->removeRow(curRow);
    count--;

}

void OrderDishesDialog::on_addButton_clicked()
{
    //此功能为添加菜品
    int row=ui->food_tableWidget->currentIndex().row();
    QAbstractItemModel *model=ui->food_tableWidget->model();
    QModelIndex indexfood=model->index(row,0);
    QString tempfood=model->data(indexfood).toString();
    if(""!=tempfood)
    {
        DishesCountDialog *disheCount=new DishesCountDialog;
        disheCount->show();
        disheCount->exec();
        QString numberfood=disheCount->returnCount();
        delete disheCount;
        ui->isSelcteFood_tableWidget->setItem(count,0,new QTableWidgetItem(tempfood));
        ui->isSelcteFood_tableWidget->setItem(count,1,new QTableWidgetItem(numberfood));
        count++;
    }
    else
    {
        QMessageBox::information(this,"温馨提示","请选择菜品");
    }
    return;
}

void OrderDishesDialog::initFoodTable()
{
    QSqlQuery query(m_db);
    query.exec("select *from FoodInfo");
    query.last();
    int row=query.value(0).toInt();
    qDebug()<<row;
    ui->food_tableWidget->setRowCount(row);
    query.first();
    query.previous();
    int i=0;
    while(query.next())
    {
        QString foodName=query.value(1).toString();
        qDebug()<<query.value(2).toDouble();
        QString foodPrice=query.value(2).toString();
        ui->food_tableWidget->setItem(i,0,new QTableWidgetItem(foodName));
        ui->food_tableWidget->setItem(i,1,new QTableWidgetItem(foodPrice));
        i++;
    }
}
