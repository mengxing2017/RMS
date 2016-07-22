#include "check_outdialog.h"
#include "ui_check_outdialog.h"
#include <QMessageBox>

Check_OutDialog::Check_OutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Check_OutDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("结帐");
    //消费明细表
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->setColumnCount(3);
    QStringList list;
    list<<"菜名"<<"数量"<<"消费金额(元)";
    ui->tableWidget->setHorizontalHeaderLabels(list);
    ui->tableWidget->setColumnWidth(0,110);
    ui->tableWidget->setColumnWidth(1,110);
    ui->tableWidget->setColumnWidth(0,110);
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
    ui->tableWidget->setRowCount(2);
    ui->tableWidget->setItem(0,0,new QTableWidgetItem("studentid"));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem("有人"));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem("有人"));
    ui->tableWidget->setItem(1,0,new QTableWidgetItem("studentid1"));
    ui->tableWidget->setItem(1,1,new QTableWidgetItem("空闲"));
    ui->tableWidget->setItem(1,2,new QTableWidgetItem("有人"));
}

Check_OutDialog::~Check_OutDialog()
{
    delete ui;
}

void Check_OutDialog::on_pushButton_clicked()
{

    QMessageBox::information(this,"温馨提示","已成功收款!再见!");
    this->close();
}

void Check_OutDialog::on_pushButton_2_clicked()
{
    this->close();
}

void Check_OutDialog::on_comboBox_activated(const QString &arg1)
{
    //更改数据
}
