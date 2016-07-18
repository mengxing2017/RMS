#include "mainwindow.h"
#include "ui_mainwindow.h"
//
#include "selectseatdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("餐饮管理系统");
    ui->statusBar->showMessage("未登录");
}

MainWindow::~MainWindow()
{
    delete login;
    delete ui;
}

void MainWindow::on_action_Login_triggered()
{
    login=new LoginDialog;
    login->show();

    login->exec();
    pass=login->VerifyPass();
    qDebug()<<"主窗口登录测试"<<pass;
    delete login;
    ui->statusBar->showMessage("已登录");
    return ;
}

void MainWindow::on_action_Quit_triggered()
{

    if(true==pass)
    QMessageBox::information(this,"提示","已退出登录");
    pass=false;
    ui->statusBar->showMessage("未登录");
}

void MainWindow::on_action_Start_triggered()
{
    SelectSeatDialog *selectseat =new SelectSeatDialog;
    selectseat->show();
    selectseat->exec();
    delete selectseat;

}
