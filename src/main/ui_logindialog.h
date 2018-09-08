/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog {
public:
  QWidget *layoutWidget_top;
  QWidget *layoutWidget_bottom;
  QVBoxLayout *verticalLayout;
  QGridLayout *gridLayout;
  QHBoxLayout *horizontalLayout;

  QLabel *label_UserName;       //用户名标签
  QLineEdit *lineEdit_UserName; //用户名输入框
  QLabel *label_Password;       //密码标签
  QLineEdit *lineEdit_Password; //密码输入框
  QPushButton *button_Login;    //登录按钮
  QPushButton *button_Quit;     //退出按钮
  QPushButton *button_Close;    //关闭按钮

  void setupUi(QDialog *LoginDialog); // setupUi

  void retranslateUi(QDialog *LoginDialog); // retranslateUi
};

namespace Ui {
class LoginDialog : public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
