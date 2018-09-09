#include "ui_add_reduce_dialog.h"

void Ui_Add_Reduce_Dialog::setupUi(QDialog *Add_Reduce_Dialog) {
  if (Add_Reduce_Dialog->objectName().isEmpty())
    Add_Reduce_Dialog->setObjectName(QStringLiteral("Add_Reduce_Dialog"));
  Add_Reduce_Dialog->resize(672, 507);
  label = new QLabel(Add_Reduce_Dialog);
  label->setObjectName(QStringLiteral("label"));
  label->setGeometry(QRect(60, 30, 101, 21));
  comboBox = new QComboBox(Add_Reduce_Dialog);
  comboBox->setObjectName(QStringLiteral("comboBox"));
  comboBox->setGeometry(QRect(170, 30, 131, 21));
  addButton = new QPushButton(Add_Reduce_Dialog);
  addButton->setObjectName(QStringLiteral("addButton"));
  addButton->setGeometry(QRect(310, 200, 31, 22));
  deleteButton = new QPushButton(Add_Reduce_Dialog);
  deleteButton->setObjectName(QStringLiteral("deleteButton"));
  deleteButton->setGeometry(QRect(310, 270, 31, 22));
  food_tableWidget = new QTableWidget(Add_Reduce_Dialog);
  food_tableWidget->setObjectName(QStringLiteral("food_tableWidget"));
  food_tableWidget->setGeometry(QRect(20, 80, 271, 301));
  isAddFood_tableWidget = new QTableWidget(Add_Reduce_Dialog);
  isAddFood_tableWidget->setObjectName(QStringLiteral("isAddFood_tableWidget"));
  isAddFood_tableWidget->setGeometry(QRect(360, 80, 281, 301));
  widget = new QWidget(Add_Reduce_Dialog);
  widget->setObjectName(QStringLiteral("widget"));
  widget->setGeometry(QRect(110, 400, 431, 31));
  horizontalLayout = new QHBoxLayout(widget);
  horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
  horizontalLayout->setContentsMargins(0, 0, 0, 0);
  okButton = new QPushButton(widget);
  okButton->setObjectName(QStringLiteral("okButton"));

  horizontalLayout->addWidget(okButton);

  horizontalSpacer =
      new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

  horizontalLayout->addItem(horizontalSpacer);

  cancelButton = new QPushButton(widget);
  cancelButton->setObjectName(QStringLiteral("cancelButton"));

  horizontalLayout->addWidget(cancelButton);

  retranslateUi(Add_Reduce_Dialog);

  QMetaObject::connectSlotsByName(Add_Reduce_Dialog);
} // setupUi

void Ui_Add_Reduce_Dialog::retranslateUi(QDialog *Add_Reduce_Dialog) {
  Add_Reduce_Dialog->setWindowTitle(
      QApplication::translate("Add_Reduce_Dialog", "Dialog", nullptr));
  label->setText(QApplication::translate(
      "Add_Reduce_Dialog", "\351\234\200\350\246\201\346\234\215\345\212\241"
                           "\347\232\204\346\241\214\345\217\267:",
      nullptr));
  addButton->setText(
      QApplication::translate("Add_Reduce_Dialog", ">>", nullptr));
  deleteButton->setText(
      QApplication::translate("Add_Reduce_Dialog", "<<", nullptr));
  okButton->setText(QApplication::translate(
      "Add_Reduce_Dialog", "\347\241\256\345\256\232", nullptr));
  cancelButton->setText(QApplication::translate(
      "Add_Reduce_Dialog", "\345\217\226\346\266\210", nullptr));
} // retranslateUi
