/********************************************************************************
** Form generated from reading UI file 'monthincomequery_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONTHINCOMEQUERY_DIALOG_H
#define UI_MONTHINCOMEQUERY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MonthIncomeQuery_Dialog {
public:
  QWidget *widget;
  QHBoxLayout *horizontalLayout;
  QLabel *label;
  QComboBox *year_comboBox;
  QLabel *label_2;
  QComboBox *month_comboBox;
  QLabel *label_3;
  QWidget *widget1;
  QHBoxLayout *horizontalLayout_2;
  QPushButton *queryButton;
  QPushButton *quitButton;

  void setupUi(QDialog *MonthIncomeQuery_Dialog);

  void retranslateUi(QDialog *MonthIncomeQuery_Dialog);
};

namespace Ui {
class MonthIncomeQuery_Dialog : public Ui_MonthIncomeQuery_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONTHINCOMEQUERY_DIALOG_H
