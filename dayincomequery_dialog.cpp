#include "dayincomequery_dialog.h"
#include "ui_dayincomequery_dialog.h"

DayIncomeQuery_Dialog::DayIncomeQuery_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DayIncomeQuery_Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("日收入查询");
}

DayIncomeQuery_Dialog::~DayIncomeQuery_Dialog()
{
    delete ui;
}

void DayIncomeQuery_Dialog::on_queryButton_clicked()
{
    //提取数据库数据

    QMessageBox::information(this,"日收入查询","2010年1月16日的收入为: xx 元");

}

void DayIncomeQuery_Dialog::on_quitButton_clicked()
{
    this->close();
}
