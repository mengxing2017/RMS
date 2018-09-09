/********************************************************************************
** Form generated from reading UI file 'add_reduce_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_REDUCE_DIALOG_H
#define UI_ADD_REDUCE_DIALOG_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add_Reduce_Dialog {
public:
  QLabel *label;
  QComboBox *comboBox;
  QPushButton *addButton;
  QPushButton *deleteButton;
  QTableWidget *food_tableWidget;
  QTableWidget *isAddFood_tableWidget;
  QWidget *widget;
  QHBoxLayout *horizontalLayout;
  QPushButton *okButton;
  QSpacerItem *horizontalSpacer;
  QPushButton *cancelButton;

  void setupUi(QDialog *Add_Reduce_Dialog);

  void retranslateUi(QDialog *Add_Reduce_Dialog);
};

namespace Ui {
class Add_Reduce_Dialog : public Ui_Add_Reduce_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_REDUCE_DIALOG_H
