/********************************************************************************
** Form generated from reading UI file 'foodinfo_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODINFO_DIALOG_H
#define UI_FOODINFO_DIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FoodInfo_Dialog {
public:
  QPushButton *deleteFood_Button;
  QTableWidget *tableWidget;
  QWidget *layoutWidget;
  QVBoxLayout *verticalLayout;
  QHBoxLayout *horizontalLayout;
  QLabel *label;
  QLineEdit *foodName_lineEdit;
  QHBoxLayout *horizontalLayout_2;
  QLabel *label_2;
  QSpacerItem *horizontalSpacer_3;
  QLineEdit *foodPrice_lineEdit;
  QHBoxLayout *horizontalLayout_3;
  QSpacerItem *horizontalSpacer;
  QPushButton *addFood_Button;
  QSpacerItem *horizontalSpacer_2;

  void setupUi(QDialog *FoodInfo_Dialog);

  void retranslateUi(QDialog *FoodInfo_Dialog);
};

namespace Ui {
class FoodInfo_Dialog : public Ui_FoodInfo_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODINFO_DIALOG_H
