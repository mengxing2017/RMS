#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add_reduce_dialog.h"
#include "selectseatdialog.h"
#include "check_outdialog.h"
#include "staffregister_dialog.h"
#include "stockqquery_dialog.h"
#include "dayincomequery_dialog.h"
#include "monthincomequery_dialog.h"
#include "foodinfo_dialog.h"

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
    delete ui;
}

void MainWindow::on_action_Login_triggered()
{
    LoginDialog *login=new LoginDialog;
    login->setModal(true);
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
    selectseat->deskInit();
    selectseat->setModal(true);
    selectseat->show();
    selectseat->exec();
    delete selectseat;
}


void MainWindow::on_action_AddorReduce_triggered()
{
    Add_Reduce_Dialog *add_Reduce=new Add_Reduce_Dialog;
    add_Reduce->setModal(true);
    add_Reduce->show();
    add_Reduce->exec();
    delete add_Reduce;
}

void MainWindow::on_actionGukejiezhang_triggered()
{
    Check_OutDialog *check_Out=new Check_OutDialog;
    check_Out->setModal(true);
    check_Out->show();
    check_Out->exec();
    delete check_Out;
}

void MainWindow::on_actionBenrijiesuan_triggered()
{
    //本日结算
    QMessageBox::information(this,"本日结算","本日营业额为: XX 元");
}

void MainWindow::on_actionZhuceyuangong_triggered()
{
    //这个是员工注册
    staffRegister_Dialog *staff=new staffRegister_Dialog;
    staff->setModal(true);
    staff->show();
    staff->exec();
    delete staff;
}

void MainWindow::on_action_5_triggered()
{
    //这个是进货查询
    StockqQuery_Dialog *stackeQuery=new StockqQuery_Dialog;
    stackeQuery->setModal(true);
    stackeQuery->show();
    stackeQuery->exec();
    delete stackeQuery;
}

void MainWindow::on_action_6_triggered()
{
    //这个是日收入统计
    DayIncomeQuery_Dialog *dayincomeQuery=new DayIncomeQuery_Dialog;
    dayincomeQuery->setModal(true);
    dayincomeQuery->show();
    dayincomeQuery->exec();
    delete dayincomeQuery;
}

void MainWindow::on_action_7_triggered()
{
    //这个是月收入统计
    MonthIncomeQuery_Dialog *monthIncomeQuery=new MonthIncomeQuery_Dialog;
    monthIncomeQuery->setModal(true);
    monthIncomeQuery->show();
    monthIncomeQuery->exec();
    delete monthIncomeQuery;
}

void MainWindow::on_actionCaipinxinxi_triggered()
{
    //这个是菜品信息按钮
    FoodInfo_Dialog *foodInfo=new FoodInfo_Dialog;
    foodInfo->setModal(true);
    foodInfo->show();
    foodInfo->exec();
    delete foodInfo;
}
