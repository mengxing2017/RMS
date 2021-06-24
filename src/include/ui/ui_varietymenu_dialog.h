/********************************************************************************
** Form generated from reading UI file 'varietymenudialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef Ui_VarietyMenu_Dialog_H
#define Ui_VarietyMenu_Dialog_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VarietyMenu_Dialog {
public:
  QWidget *layoutWidget;
  QVBoxLayout *verticalLayout;
  QHBoxLayout *horizontalLayout;
  QLabel *label;
  QLineEdit *foodName_lineEdit;
  QLabel *label_2;
  QLineEdit *price_lineEdit;
  QLabel *label_3;
  QHBoxLayout *horizontalLayout_2;
  QPushButton *addFoodNameButton;
  QPushButton *modification_Button;
  QPushButton *delete_Button;
  QPushButton *quit_Button;
  QTableWidget *tableWidget;

  void setupUi(QDialog *VarietyMenuDialog);

  void retranslateUi(QDialog *VarietyMenuDialog);
};

namespace Ui {
class VarietyMenuDialog : public Ui_VarietyMenu_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // Ui_VarietyMenu_Dialog_H
