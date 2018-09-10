#include "ui_staffregister_dialog.h"

void Ui_staffRegister_Dialog::setupUi(QDialog *staffRegister_Dialog) {
  if (staffRegister_Dialog->objectName().isEmpty())
    staffRegister_Dialog->setObjectName(QStringLiteral("staffRegister_Dialog"));
  staffRegister_Dialog->resize(600, 500);
  QPalette staffRegister_Pal(staffRegister_Dialog->palette());
  staffRegister_Pal.setBrush(
      QPalette::Background,
      QBrush(QPixmap(":/icon/res/images/selectSeat_background.jpeg")));
  staffRegister_Dialog->setAutoFillBackground(true);
  staffRegister_Dialog->setPalette(staffRegister_Pal);

  widget = new QWidget(staffRegister_Dialog);
  widget->setObjectName(QStringLiteral("widget"));
  widget->setGeometry(QRect(31, 34, 291, 221));
  verticalLayout_3 = new QVBoxLayout(widget);
  verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
  verticalLayout_3->setContentsMargins(0, 0, 0, 0);
  horizontalLayout_3 = new QHBoxLayout();
  horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
  verticalLayout = new QVBoxLayout();
  verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
  label = new QLabel(widget);
  label->setObjectName(QStringLiteral("label"));

  verticalLayout->addWidget(label);

  label_2 = new QLabel(widget);
  label_2->setObjectName(QStringLiteral("label_2"));

  verticalLayout->addWidget(label_2);

  label_3 = new QLabel(widget);
  label_3->setObjectName(QStringLiteral("label_3"));

  verticalLayout->addWidget(label_3);

  label_4 = new QLabel(widget);
  label_4->setObjectName(QStringLiteral("label_4"));

  verticalLayout->addWidget(label_4);

  horizontalLayout_3->addLayout(verticalLayout);

  verticalLayout_2 = new QVBoxLayout();
  verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
  userName_lineEdit = new QLineEdit(widget);
  userName_lineEdit->setObjectName(QStringLiteral("userName_lineEdit"));

  verticalLayout_2->addWidget(userName_lineEdit);

  password_lineEdit = new QLineEdit(widget);
  password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));

  verticalLayout_2->addWidget(password_lineEdit);

  rePassword_lineEdit = new QLineEdit(widget);
  rePassword_lineEdit->setObjectName(QStringLiteral("rePassword_lineEdit"));

  verticalLayout_2->addWidget(rePassword_lineEdit);

  horizontalLayout = new QHBoxLayout();
  horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
  horizontalSpacer_3 =
      new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

  horizontalLayout->addItem(horizontalSpacer_3);

  comboBox = new QComboBox(widget);
  comboBox->setObjectName(QStringLiteral("comboBox"));

  horizontalLayout->addWidget(comboBox);

  horizontalSpacer_2 =
      new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

  horizontalLayout->addItem(horizontalSpacer_2);

  verticalLayout_2->addLayout(horizontalLayout);

  horizontalLayout_3->addLayout(verticalLayout_2);

  verticalLayout_3->addLayout(horizontalLayout_3);

  horizontalLayout_2 = new QHBoxLayout();
  horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
  pushButton = new QPushButton(widget);
  pushButton->setObjectName(QStringLiteral("pushButton"));

  horizontalLayout_2->addWidget(pushButton);

  horizontalSpacer =
      new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

  horizontalLayout_2->addItem(horizontalSpacer);

  pushButton_2 = new QPushButton(widget);
  pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

  horizontalLayout_2->addWidget(pushButton_2);

  cancel_pushButton = new QPushButton(widget);
  cancel_pushButton->setObjectName(QStringLiteral("cancel_pushButton"));

  horizontalLayout_2->addWidget(cancel_pushButton);

  verticalLayout_3->addLayout(horizontalLayout_2);

  retranslateUi(staffRegister_Dialog);

  QMetaObject::connectSlotsByName(staffRegister_Dialog);
} // setupUi

void Ui_staffRegister_Dialog::retranslateUi(QDialog *staffRegister_Dialog) {
  staffRegister_Dialog->setWindowTitle(
      QApplication::translate("staffRegister_Dialog", "Dialog", nullptr));
  label->setText(QApplication::translate(
      "staffRegister_Dialog",
      "\347\224\250\346\210\267\345\220\215:", nullptr));
  label_2->setText(QApplication::translate(
      "staffRegister_Dialog", "\345\257\206\347\240\201:", nullptr));
  label_3->setText(QApplication::translate(
      "staffRegister_Dialog",
      "\351\207\215\345\244\215\345\257\206\347\240\201", nullptr));
  label_4->setText(QApplication::translate(
      "staffRegister_Dialog", "\346\235\203\351\231\220:", nullptr));
  pushButton->setText(QApplication::translate(
      "staffRegister_Dialog", "\346\217\220\344\272\244", nullptr));
  pushButton_2->setText(QApplication::translate(
      "staffRegister_Dialog", "\351\207\215\347\275\256", nullptr));
  cancel_pushButton->setText(QApplication::translate(
      "staffRegister_Dialog", "\345\217\226\346\266\210", nullptr));
} // retranslateUi
