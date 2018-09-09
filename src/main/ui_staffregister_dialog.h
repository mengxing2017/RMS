/********************************************************************************
** Form generated from reading UI file 'staffregister_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFREGISTER_DIALOG_H
#define UI_STAFFREGISTER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_staffRegister_Dialog {
public:
  QWidget *widget;
  QVBoxLayout *verticalLayout_3;
  QHBoxLayout *horizontalLayout_3;
  QVBoxLayout *verticalLayout;
  QLabel *label;
  QLabel *label_2;
  QLabel *label_3;
  QLabel *label_4;
  QVBoxLayout *verticalLayout_2;
  QLineEdit *userName_lineEdit;
  QLineEdit *password_lineEdit;
  QLineEdit *rePassword_lineEdit;
  QHBoxLayout *horizontalLayout;
  QSpacerItem *horizontalSpacer_3;
  QComboBox *comboBox;
  QSpacerItem *horizontalSpacer_2;
  QHBoxLayout *horizontalLayout_2;
  QPushButton *pushButton;
  QSpacerItem *horizontalSpacer;
  QPushButton *pushButton_2;
  QPushButton *cancel_pushButton;

  void setupUi(QDialog *staffRegister_Dialog);
  void retranslateUi(QDialog *staffRegister_Dialog);
};

namespace Ui {
class staffRegister_Dialog : public Ui_staffRegister_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFREGISTER_DIALOG_H
