#include "rms/src/include/ui/ui_varietymenu_dialog.h"

void Ui_VarietyMenu_Dialog::setupUi(QDialog *VarietyMenuDialog) {
  if (VarietyMenuDialog->objectName().isEmpty())
    VarietyMenuDialog->setObjectName(QStringLiteral("VarietyMenuDialog"));
  VarietyMenuDialog->resize(600, 500);
  QPalette varietyMenu_pal(VarietyMenuDialog->palette());
  varietyMenu_pal.setBrush(
      QPalette::Background,
      QBrush(QPixmap(":/icon/res/images/selectSeat_background.jpeg")));
  VarietyMenuDialog->setAutoFillBackground(true);
  VarietyMenuDialog->setPalette(varietyMenu_pal);

  layoutWidget = new QWidget(VarietyMenuDialog);
  layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
  layoutWidget->setGeometry(QRect(10, 270, 342, 56));
  verticalLayout = new QVBoxLayout(layoutWidget);
  verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
  verticalLayout->setContentsMargins(0, 0, 0, 0);
  horizontalLayout = new QHBoxLayout();
  horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
  label = new QLabel(layoutWidget);
  label->setObjectName(QStringLiteral("label"));

  horizontalLayout->addWidget(label);

  foodName_lineEdit = new QLineEdit(layoutWidget);
  foodName_lineEdit->setObjectName(QStringLiteral("foodName_lineEdit"));

  horizontalLayout->addWidget(foodName_lineEdit);

  label_2 = new QLabel(layoutWidget);
  label_2->setObjectName(QStringLiteral("label_2"));

  horizontalLayout->addWidget(label_2);

  price_lineEdit = new QLineEdit(layoutWidget);
  price_lineEdit->setObjectName(QStringLiteral("price_lineEdit"));

  horizontalLayout->addWidget(price_lineEdit);

  label_3 = new QLabel(layoutWidget);
  label_3->setObjectName(QStringLiteral("label_3"));

  horizontalLayout->addWidget(label_3);

  verticalLayout->addLayout(horizontalLayout);

  horizontalLayout_2 = new QHBoxLayout();
  horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
  addFoodNameButton = new QPushButton(layoutWidget);
  addFoodNameButton->setObjectName(QStringLiteral("addFoodNameButton"));

  horizontalLayout_2->addWidget(addFoodNameButton);

  modification_Button = new QPushButton(layoutWidget);
  modification_Button->setObjectName(QStringLiteral("modification_Button"));

  horizontalLayout_2->addWidget(modification_Button);

  delete_Button = new QPushButton(layoutWidget);
  delete_Button->setObjectName(QStringLiteral("delete_Button"));

  horizontalLayout_2->addWidget(delete_Button);

  quit_Button = new QPushButton(layoutWidget);
  quit_Button->setObjectName(QStringLiteral("quit_Button"));

  horizontalLayout_2->addWidget(quit_Button);

  verticalLayout->addLayout(horizontalLayout_2);

  tableWidget = new QTableWidget(VarietyMenuDialog);
  tableWidget->setObjectName(QStringLiteral("tableWidget"));
  tableWidget->setGeometry(QRect(10, 10, 341, 251));

  retranslateUi(VarietyMenuDialog);

  QMetaObject::connectSlotsByName(VarietyMenuDialog);
}  // setupUi

void Ui_VarietyMenu_Dialog::retranslateUi(QDialog *VarietyMenuDialog) {
  VarietyMenuDialog->setWindowTitle(
      QApplication::translate("VarietyMenuDialog", "Dialog", nullptr));
  label->setText(QApplication::translate("VarietyMenuDialog",
                                         "\350\217\234\345\220\215:", nullptr));
  label_2->setText(QApplication::translate(
      "VarietyMenuDialog", "\345\215\225\344\273\267:", nullptr));
  label_3->setText(
      QApplication::translate("VarietyMenuDialog", "\345\205\203", nullptr));
  addFoodNameButton->setText(QApplication::translate(
      "VarietyMenuDialog", "\346\267\273\345\212\240", nullptr));
  modification_Button->setText(QApplication::translate(
      "VarietyMenuDialog", "\344\277\256\346\224\271", nullptr));
  delete_Button->setText(QApplication::translate(
      "VarietyMenuDialog", "\345\210\240\351\231\244", nullptr));
  quit_Button->setText(QApplication::translate(
      "VarietyMenuDialog", "\351\200\200\345\207\272", nullptr));
}  // retranslateUi
