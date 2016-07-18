#include "dishescountdialog.h"
#include "ui_dishescountdialog.h"
#include <QMessageBox>
#include <QDebug>

DishesCountDialog::DishesCountDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DishesCountDialog)
{
    ui->setupUi(this);
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
//    count=ui->lineEdit->text().toInt();
    countS=ui->lineEdit->text();
    this->close();
//    QMessageBox::information(this,"温馨提示","已订"+countS+"份");
    qDebug()<<countS;
}

void DishesCountDialog::on_pushButton_2_clicked()
{
    this->close();
}
