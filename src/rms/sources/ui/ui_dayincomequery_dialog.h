/********************************************************************************
** Form generated from reading UI file 'dayincomequery_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAYINCOMEQUERY_DIALOG_H
#define UI_DAYINCOMEQUERY_DIALOG_H

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

class Ui_DayIncomeQuery_Dialog {
public:
  QPushButton *queryButton;
  QPushButton *quitButton;
  QWidget *widget;
  QHBoxLayout *horizontalLayout;
  QLabel *label;
  QComboBox *year_comboBox;
  QLabel *label_2;
  QComboBox *month_comboBox;
  QLabel *label_3;
  QComboBox *day_comboBox;
  QLabel *label_4;

  void setupUi(QDialog *DayIncomeQuery_Dialog);

  void retranslateUi(QDialog *DayIncomeQuery_Dialog);
};

namespace Ui {
class DayIncomeQuery_Dialog : public Ui_DayIncomeQuery_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAYINCOMEQUERY_DIALOG_H
