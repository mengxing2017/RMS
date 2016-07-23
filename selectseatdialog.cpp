#include "selectseatdialog.h"
#include "ui_selectseatdialog.h"

#include <QStandardItemModel>
#include <QTreeWidgetItem>
#include <QTreeWidget>
#include <QDebug>
#include <QMessageBox>
SelectSeatDialog::SelectSeatDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectSeatDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("请选择座位");
    orderDishes =new OrderDishesDialog;
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    idData="";//初始化数据
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
    initWindow();
    deskInit();
}

SelectSeatDialog::~SelectSeatDialog()
{
    delete orderDishes;
    delete ui;
}

void SelectSeatDialog::initWindow()
{
    //设置桌号显示
    QBrush myBrush;
    QPalette palette;
    myBrush = QBrush(Qt::red,Qt::DiagCrossPattern);
    palette.setBrush(QPalette::Text,  myBrush);
    ui->lineEdit->setEnabled(false);
    ui->lineEdit->setPalette(palette);

    //设置表格显示
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);//选中整行
    //ui->tableWidget->item(0,0)->setTextAlignment(Qt::AlignHCenter);//选择对齐方式
    ui->tableWidget->setAlternatingRowColors(true);//设置没行变一色
    ui->tableWidget->setColumnCount(2);
    QStringList list;
    list<<"桌号"<<"空闲状态";
    ui->tableWidget->setHorizontalHeaderLabels(list);
    ui->tableWidget->setColumnWidth(0,160);
    ui->tableWidget->setColumnWidth(1,180);
    //设置列名为加粗
    QFont font=ui->tableWidget->horizontalHeader()->font();
    font.setBold(true);
    ui->tableWidget->horizontalHeader()->setFont(font);
    //去掉第一列标号
    QHeaderView *header=ui->tableWidget->verticalHeader();
    header->setHidden(true);
    //设置选中背景色
    ui->tableWidget->setStyleSheet("selection-background-color:lightblue;");
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);//设置为可以选中单个
}

void SelectSeatDialog::on_okButton_clicked()
{
    if("有人"==flagId)
    {
        QMessageBox::information(this,"温馨提示","此座位有人,请重新选择座位");
        return;
    }
    if(NULL!=idData)
    {
        orderDishes->getDatabase(m_db);
        orderDishes->setModal(true);
        orderDishes->initFoodTable();
        orderDishes->receiverIdData(idData);
        orderDishes->show();
        orderDishes->exec();
        bool isLeisure=orderDishes->returnIsOrder();
        qDebug()<<isLeisure;
        //将数据插入数据库
        if(isLeisure)
        {
            qDebug()<<idData;

           QString time=orderDishes->returnTime();

            QString idTable=ui->lineEdit->text();
            QSqlQuery query(m_db);
            qDebug()<<idData;
            //数据更新操作
            if(query.exec("update TableInfo set isUse = '有人',time='"+time+"'   where TableID ='"+idTable+"'"))
                  qDebug()<<"打开成功";
            deskInit();

        }
        return ;
    }
    QMessageBox::information(this,"温馨提示","请选择座位");

}

void SelectSeatDialog::on_cancelButton_clicked()
{
    this->close();
}


void SelectSeatDialog::on_tableWidget_clicked(const QModelIndex &index)
{
    //index的警告无需关注
    ui->lineEdit->clear();
    int row= ui->tableWidget->currentIndex().row();
    QAbstractItemModel *model = ui->tableWidget->model();
    QModelIndex indextemp=model->index(row,0);
    QModelIndex indexflag=model->index(row,1);
    idData= model->data(indextemp).toString();
    flagId=model->data(indexflag).toString();
    ui->lineEdit->setText(idData);
}

void SelectSeatDialog::deskInit()
{


    QSqlQuery query(m_db);
    query.exec("select *from TableInfo");
    query.last();
    int row=query.value(0).toInt();
    qDebug()<<row;
    ui->tableWidget->setRowCount(row);
    query.first();
    query.previous();
    int i=0;
    while(query.next())
    {
        QString deskId=query.value(1).toString();
        qDebug()<<query.value(2).toString();
        QString flag=query.value(2).toString();
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(deskId));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(flag));
        i++;
    }
}
