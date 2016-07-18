#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("登录窗口");
    pass=false;
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

bool LoginDialog::VerifyPass()
{
    return pass;
}

void LoginDialog::on_LoginButton_clicked()
{
    QString username=ui->UserLineEdit->text();
    QString userpassword=ui->passLineEdit->text();
    if(NULL==username)
    {
        QMessageBox::information(this,"登录提示","请输入登录名");
    }
    else if(NULL==userpassword)
    {
        QMessageBox::information(this,"登录提示","请输入登录密码");
    }
    else if(username=="123"&&userpassword=="123")
    {
        pass=true;
        qDebug()<<"登录测试1"<<pass;
        QMessageBox::information(this,"登录提示","登录成功");
        qDebug()<<"登录测试"<<pass;
        this->close();
    }
    else
    {
        QMessageBox::information(this,"登录提示","密码或者用户名错误");
    }
}

void LoginDialog::on_QuitButton_clicked()
{
    this->close();
}
