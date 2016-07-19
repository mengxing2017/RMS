#include "dishescountdialog.h"
#include "ui_dishescountdialog.h"
#include <QMessageBox>
#include <QDebug>

DishesCountDialog::DishesCountDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DishesCountDialog)
{
    ui->setupUi(this);
    ui->lineEdit->setText("1");
}

DishesCountDialog::~DishesCountDialog()
{
    delete ui;
}

QString DishesCountDialog::returnCount()
{
    return  countS;
}

void DishesCountDialog::on_pushButton_clicked()
{
    countS=ui->lineEdit->text();
    if(""==countS)
    {
        QMessageBox::information(this,"温馨提示","请输入点菜份数");
        return;
    }
    this->close();
}

void DishesCountDialog::on_pushButton_2_clicked()
{
    this->close();
}
