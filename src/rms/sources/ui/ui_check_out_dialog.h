/********************************************************************************
** Form generated from reading UI file 'check_outdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef Ui_Check_Out_Dialog_H
#define Ui_Check_Out_Dialog_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Check_Out_Dialog {
public:
  QLabel *label_5;
  QWidget *layoutWidget;
  QVBoxLayout *verticalLayout;
  QHBoxLayout *horizontalLayout;
  QLabel *label;
  QComboBox *comboBox;
  QHBoxLayout *horizontalLayout_2;
  QLabel *label_2;
  QLineEdit *receivable_lineEdit;
  QHBoxLayout *horizontalLayout_3;
  QLabel *label_3;
  QLineEdit *receipts_lineEdit;
  QHBoxLayout *horizontalLayout_4;
  QLabel *label_4;
  QLineEdit *change_lineEdit;
  QHBoxLayout *horizontalLayout_5;
  QPushButton *pushButton;
  QPushButton *pushButton_2;
  QTableWidget *tableWidget;

  void setupUi(QDialog *Check_OutDialog);

  void retranslateUi(QDialog *Check_OutDialog);
};

namespace Ui {
class Check_OutDialog : public Ui_Check_Out_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // Ui_Check_Out_Dialog_H
