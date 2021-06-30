#include "ui/ui_check_out_dialog.h"

void Ui_Check_Out_Dialog::setupUi(QDialog *Check_OutDialog) {
  if (Check_OutDialog->objectName().isEmpty())
    Check_OutDialog->setObjectName(QStringLiteral("Check_OutDialog"));
  Check_OutDialog->resize(600, 500);
  QPalette check_out_Pal(Check_OutDialog->palette());
  check_out_Pal.setBrush(
      QPalette::Background,
      QBrush(QPixmap(":/icon/res/images/selectSeat_background.jpeg")));
  Check_OutDialog->setAutoFillBackground(true);
  Check_OutDialog->setPalette(check_out_Pal);

  label_5 = new QLabel(Check_OutDialog);
  label_5->setObjectName(QStringLiteral("label_5"));
  label_5->setGeometry(QRect(360, 10, 81, 21));
  layoutWidget = new QWidget(Check_OutDialog);
  layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
  layoutWidget->setGeometry(QRect(20, 70, 198, 147));
  verticalLayout = new QVBoxLayout(layoutWidget);
  verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
  verticalLayout->setContentsMargins(0, 0, 0, 0);
  horizontalLayout = new QHBoxLayout();
  horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
  label = new QLabel(layoutWidget);
  label->setObjectName(QStringLiteral("label"));

  horizontalLayout->addWidget(label);

  comboBox = new QComboBox(layoutWidget);
  comboBox->setObjectName(QStringLiteral("comboBox"));

  horizontalLayout->addWidget(comboBox);

  verticalLayout->addLayout(horizontalLayout);

  horizontalLayout_2 = new QHBoxLayout();
  horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
  label_2 = new QLabel(layoutWidget);
  label_2->setObjectName(QStringLiteral("label_2"));

  horizontalLayout_2->addWidget(label_2);

  receivable_lineEdit = new QLineEdit(layoutWidget);
  receivable_lineEdit->setObjectName(QStringLiteral("receivable_lineEdit"));

  horizontalLayout_2->addWidget(receivable_lineEdit);

  verticalLayout->addLayout(horizontalLayout_2);

  horizontalLayout_3 = new QHBoxLayout();
  horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
  label_3 = new QLabel(layoutWidget);
  label_3->setObjectName(QStringLiteral("label_3"));

  horizontalLayout_3->addWidget(label_3);

  receipts_lineEdit = new QLineEdit(layoutWidget);
  receipts_lineEdit->setObjectName(QStringLiteral("receipts_lineEdit"));

  horizontalLayout_3->addWidget(receipts_lineEdit);

  verticalLayout->addLayout(horizontalLayout_3);

  horizontalLayout_4 = new QHBoxLayout();
  horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
  label_4 = new QLabel(layoutWidget);
  label_4->setObjectName(QStringLiteral("label_4"));

  horizontalLayout_4->addWidget(label_4);

  change_lineEdit = new QLineEdit(layoutWidget);
  change_lineEdit->setObjectName(QStringLiteral("change_lineEdit"));

  horizontalLayout_4->addWidget(change_lineEdit);

  verticalLayout->addLayout(horizontalLayout_4);

  horizontalLayout_5 = new QHBoxLayout();
  horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
  pushButton = new QPushButton(layoutWidget);
  pushButton->setObjectName(QStringLiteral("pushButton"));

  horizontalLayout_5->addWidget(pushButton);

  pushButton_2 = new QPushButton(layoutWidget);
  pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

  horizontalLayout_5->addWidget(pushButton_2);

  verticalLayout->addLayout(horizontalLayout_5);

  tableWidget = new QTableWidget(Check_OutDialog);
  tableWidget->setObjectName(QStringLiteral("tableWidget"));
  tableWidget->setGeometry(QRect(240, 30, 331, 251));

  retranslateUi(Check_OutDialog);

  QMetaObject::connectSlotsByName(Check_OutDialog);
}  // setupUi

void Ui_Check_Out_Dialog::retranslateUi(QDialog *Check_OutDialog) {
  Check_OutDialog->setWindowTitle(
      QApplication::translate("Check_OutDialog", "Dialog", nullptr));
  label_5->setText(QApplication::translate(
      "Check_OutDialog", "\346\266\210\350\264\271\346\230\216\347\273\206",
      nullptr));
  label->setText(QApplication::translate("Check_OutDialog",
                                         "\346\241\214\345\217\267:", nullptr));
  label_2->setText(QApplication::translate(
      "Check_OutDialog", "\345\272\224\346\224\266:", nullptr));
  label_3->setText(QApplication::translate(
      "Check_OutDialog", "\345\256\236\346\224\266", nullptr));
  label_4->setText(QApplication::translate(
      "Check_OutDialog", "\346\211\276\351\233\266:", nullptr));
  pushButton->setText(QApplication::translate(
      "Check_OutDialog", "\347\273\223\345\270\220", nullptr));
  pushButton_2->setText(QApplication::translate(
      "Check_OutDialog", "\351\200\200\345\207\272", nullptr));
}  // retranslateUi
