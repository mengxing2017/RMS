/********************************************************************************
** Form generated from reading UI file 'selectseatdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTSEAT_DIALOG_H
#define UI_SELECTSEAT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectSeat_Dialog {
public:
  QTableWidget *tableWidget; //桌号状态表格

  QLabel *label;
  QLineEdit *lineEdit_Id;     //桌号
  QPushButton *button_Ok;     //确定按钮
  QPushButton *button_Cancel; //取消按钮

  void setupUi(QDialog *SelectSeat_Dialog);

  void retranslateUi(QDialog *SelectSeat_Dialog);
};

namespace Ui {
class SelectSeat_Dialog : public Ui_SelectSeat_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTSEATDIALOG_H
