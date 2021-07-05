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

class Ui_Login_Dialog {
 public:
  QWidget *top;
  QWidget *bottom;
  QVBoxLayout *vLayout;
  QGridLayout *gridLayout;
  QHBoxLayout *hLayout;

  QLabel *usernameLb;     //用户名标签
  QLineEdit *usernameLe;  //用户名输入框
  QLabel *passwordLb;     //密码标签
  QLineEdit *passwordLe;  //密码输入框
  QPushButton *loginBt;   //登录按钮
  QPushButton *quitBt;    //退出按钮
  QPushButton *closeBt;   //关闭按钮

  void setupUi(QDialog *LoginDialog);  // setupUi

  void retranslateUi(QDialog *LoginDialog);  // retranslateUi
};

namespace Ui {
class LoginDialog : public Ui_Login_Dialog {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_LOGINDIALOG_H
