/********************************************************************************
** Form generated from reading UI file 'orderdishesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef Ui_OrderDishes_Dialog_H
#define Ui_OrderDishes_Dialog_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderDishes_Dialog {
public:
  QWidget *layoutWidget;
  QHBoxLayout *horizontalLayout_3;
  QPushButton *OkButton;
  QSpacerItem *horizontalSpacer;
  QPushButton *cancelButton;
  QTableWidget *food_tableWidget;
  QTableWidget *isSelcteFood_tableWidget;
  QPushButton *addButton;
  QPushButton *deleteButton;
  QWidget *widget;
  QHBoxLayout *horizontalLayout_2;
  QHBoxLayout *horizontalLayout;
  QLabel *label;
  QLineEdit *lineEdit;
  QSpacerItem *horizontalSpacer_2;
  QLabel *label_2;
  QLineEdit *date_lineEdit;

  void setupUi(QDialog *OrderDishesDialog);
  void retranslateUi(QDialog *OrderDishesDialog);
};

namespace Ui {
class OrderDishesDialog : public Ui_OrderDishes_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // Ui_OrderDishes_Dialog_H
