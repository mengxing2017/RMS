#include "add_reduce_dialog.h"
#include "ui_add_reduce_dialog.h"
#include "dishescountdialog.h"

Add_Reduce_Dialog::Add_Reduce_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Reduce_Dialog)
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
    ui->food_tableWidget->setColumnWidth(1,110);
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

//    ui->isAddFood_tableWidget

    ui->isAddFood_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->isAddFood_tableWidget->setAlternatingRowColors(true);
    ui->isAddFood_tableWidget->setColumnCount(2);
    QStringList listfood;
    listfood<<"菜名"<<"数量";
    ui->isAddFood_tableWidget->setHorizontalHeaderLabels(listfood);
    ui->isAddFood_tableWidget->setColumnWidth(0,160);
    ui->isAddFood_tableWidget->setColumnWidth(1,110);
    //设置列名为加粗
    QFont fontfood=ui->isAddFood_tableWidget->horizontalHeader()->font();
    fontfood.setBold(true);
    ui->isAddFood_tableWidget->horizontalHeader()->setFont(fontfood);
    //去掉第一列标号
    QHeaderView *headerfood=ui->isAddFood_tableWidget->verticalHeader();
    headerfood->setHidden(true);
    //设置选中背景色
    ui->isAddFood_tableWidget->setStyleSheet("selection-background-color:lightblue;");
    ui->isAddFood_tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);//设置为可以选中单个
    ui->isAddFood_tableWidget->setRowCount(50);


}

Add_Reduce_Dialog::~Add_Reduce_Dialog()
{
    delete ui;
}

void Add_Reduce_Dialog::on_okButton_clicked()
{
    //此处将数据存入数据库

    this->close();
}

void Add_Reduce_Dialog::on_cancelButton_clicked()
{
    this->close();
}

void Add_Reduce_Dialog::on_addButton_clicked()
{
    DishesCountDialog *disheCount=new DishesCountDialog;
    disheCount->show();
    disheCount->exec();
    QString numberfood=disheCount->returnCount();
    delete disheCount;
    int row=ui->food_tableWidget->currentIndex().row();
    QAbstractItemModel *model=ui->food_tableWidget->model();
    QModelIndex indexfood=model->index(row,0);
    QString tempfood=model->data(indexfood).toString();
    ui->isAddFood_tableWidget->setItem(count,0,new QTableWidgetItem(tempfood));
    ui->isAddFood_tableWidget->setItem(count,1,new QTableWidgetItem(numberfood));
    count++;
}

void Add_Reduce_Dialog::on_deleteButton_clicked()
{
    QAbstractItemModel *model=ui->isAddFood_tableWidget->model();
   int curRow =ui->isAddFood_tableWidget->currentIndex().row();
   model->removeRow(curRow);
   count--;
}
