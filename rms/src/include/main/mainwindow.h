#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include "rms/src/include/dialog/login_dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

  void setEnabledMenu(bool e);  //启用菜单

 private slots:
  void on_action_Login_triggered();  //系统登录触发器

  void on_action_Quit_triggered();  //系统退出触发器

  void on_action_Start_triggered();  //开始点菜触发器

  void on_action_AddorReduce_triggered();  //加菜减菜触发器

  void on_action_CustomerSettlement_triggered();  //顾客结账触发器

  void on_action_DaySettlement_triggered();  //当日结算触发器

  void on_action_UserRegistered_triggered();  //员工注册触发器

  void on_action_DayIncomeQuery_triggered();  //日收入查询触发器

  void on_action_MonthIncomeQuery_triggered();  //月收入查询触发器

  void on_action_PurchaseQuery_triggered();  //进货查询触发器

  void on_action_MenuInfo_triggered();  //菜单信息触发器

 private:
  Ui::MainWindow *ui;

  bool admin;  //用户名
  bool pass;   //密码
};

#endif  // MAINWINDOW_H
