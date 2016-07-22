#include "monthincomequery_dialog.h"
#include "ui_monthincomequery_dialog.h"

MonthIncomeQuery_Dialog::MonthIncomeQuery_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MonthIncomeQuery_Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("月收入查询");
}

MonthIncomeQuery_Dialog::~MonthIncomeQuery_Dialog()
{
    delete ui;
}

void MonthIncomeQuery_Dialog::on_queryButton_clicked()
{
    //此处读取数据库数据


    QMessageBox::information(this,"月收入查询","2010年1月的收入为: XX 元");

}

void MonthIncomeQuery_Dialog::on_quitButton_clicked()
{
   this->close();
}
