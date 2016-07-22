#include "staffregister_dialog.h"
#include "ui_staffregister_dialog.h"

staffRegister_Dialog::staffRegister_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::staffRegister_Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("员工注册");
}

staffRegister_Dialog::~staffRegister_Dialog()
{
    delete ui;
}

void staffRegister_Dialog::on_pushButton_clicked()
{
    //这个为确定按钮
    QString Name=ui->userName_lineEdit->text();
    QString Password=ui->password_lineEdit->text();
    QString rePassword=ui->rePassword_lineEdit->text();
    if(Password==rePassword)
    {

        this->close();
        return;
    }
    QMessageBox::information(this,"温馨提示","两次密码不一致");
    return;
}

void staffRegister_Dialog::on_pushButton_2_clicked()
{
    //这个为重置按钮
    this->close();
    return;
}
