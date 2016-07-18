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
    count=0;

    //foodtable
    ui->food_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->food_tableWidget->setAlternatingRowColors(true);
    ui->food_tableWidget->setColumnCount(2);
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
    ui->food_tableWidget->setRowCount(2);
    ui->food_tableWidget->setItem(0,0,new QTableWidgetItem("studentid"));
    ui->food_tableWidget->setItem(0,1,new QTableWidgetItem("有人"));
    ui->food_tableWidget->setItem(1,0,new QTableWidgetItem("studentid1"));
    ui->food_tableWidget->setItem(1,1,new QTableWidgetItem("空闲"));


    //isfood_table

    ui->isSelcteFood_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->isSelcteFood_tableWidget->setAlternatingRowColors(true);
    ui->isSelcteFood_tableWidget->setColumnCount(2);
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
//    ui->isSelcteFood_tableWidget->setItem(0,0,new QTableWidgetItem("studentid"));
//    ui->isSelcteFood_tableWidget->setItem(0,1,new QTableWidgetItem("有人"));
//    ui->isSelcteFood_tableWidget->setItem(1,0,new QTableWidgetItem("studentid1"));
//    ui->isSelcteFood_tableWidget->setItem(1,1,new QTableWidgetItem("空闲"));
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

void OrderDishesDialog::on_pushButton_clicked()
{

}

void OrderDishesDialog::on_OkButton_clicked()
{
    //此处实现将数据存入数据库


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
    DishesCountDialog *disheCount=new DishesCountDialog;
    disheCount->show();
    disheCount->exec();
    QString numberfood=disheCount->returnCount();
    delete disheCount;
    int row=ui->food_tableWidget->currentIndex().row();
    QAbstractItemModel *model=ui->food_tableWidget->model();
    QModelIndex indexfood=model->index(row,0);
    QString tempfood=model->data(indexfood).toString();
    ui->isSelcteFood_tableWidget->setItem(count,0,new QTableWidgetItem(tempfood));
    ui->isSelcteFood_tableWidget->setItem(count,1,new QTableWidgetItem(numberfood));
    count++;
}
