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
  QWidget *layoutWidget;
  QVBoxLayout *verticalLayout;
  QGridLayout *gridLayout;
  QLabel *label;
  QLineEdit *UserLineEdit;
  QLabel *label_2;
  QLineEdit *passLineEdit;
  QHBoxLayout *horizontalLayout;
  QPushButton *LoginButton;
  QPushButton *QuitButton;

  void setupUi(QDialog *LoginDialog); // setupUi

  void retranslateUi(QDialog *LoginDialog); // retranslateUi
};

namespace Ui {
class LoginDialog : public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
