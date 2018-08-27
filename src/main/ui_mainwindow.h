/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
public:
  QAction *action_AuthorityManagement; //权限管理
  QAction *action_Start;               //开始点菜
  QAction *action_AddorReduce;         //加菜减菜
  QAction *action_CustomerSettlement;  //顾客结账
  QAction *action_DaySettlement;       //当日结算
  QAction *action_Login;               //系统登录
  QAction *action_MenuInfo;            //菜单信息
  QAction *action_UserRegistered;      //员工注册
  QAction *action_PurchaseQuery;       //进货查询
  QAction *action_DayIncomeQuery;      //日收入查询
  QAction *action_MonthIncomeQuery;    //月收入查询
  QAction *action_DatabaseBackup;      //数据库备份
  QAction *action_Quit;                //系统退出

  QWidget *centralWidget;
  QMenuBar *menuBar;
  QToolBar *mainToolBar;
  QStatusBar *statusBar;

  QMenu *menu_UserLogin;         //用户登录
  QMenu *menu_ManagerOperation;  //管理操作
  QMenu *menu_ManagerReception;  //前台管理
  QMenu *menu_ManagerBackstage;  //后台管理
  QMenu *menu_FinanceStatistics; //财务统计
  QMenu *menu_SystemManager;     //系统管理
  QMenu *menu_SystemMaintain;    //系统维护
  QMenu *menu_Help;              //帮助

  void setupUi(QMainWindow *MainWindow); // setupUi

  void retranslateUi(QMainWindow *MainWindow); // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
