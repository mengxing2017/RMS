/********************************************************************************
** Form generated from reading UI file 'stockquery_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCKQUERY_DIALOG_H
#define UI_STOCKQUERY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StockqQuery_Dialog {
public:
  QTableWidget *tableWidget;
  QWidget *widget;
  QHBoxLayout *horizontalLayout;
  QLabel *label;
  QDateEdit *dateEdit;
  QWidget *widget1;
  QHBoxLayout *horizontalLayout_2;
  QPushButton *queryButton;
  QPushButton *quit_Button;

  void setupUi(QDialog *StockqQuery_Dialog);

  void retranslateUi(QDialog *StockqQuery_Dialog);
};

namespace Ui {
class StockqQuery_Dialog : public Ui_StockqQuery_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCKQUERY_DIALOG_H
