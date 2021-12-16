#include "ui_dishescount_dialog.h"

void Ui_DishesCount_Dialog::setupUi(QDialog *DishesCountDialog) {
  if (DishesCountDialog->objectName().isEmpty())
    DishesCountDialog->setObjectName(QStringLiteral("DishesCountDialog"));
  DishesCountDialog->resize(600, 500);
  QPalette dishesCount_Pal(DishesCountDialog->palette());
  dishesCount_Pal.setBrush(
      QPalette::Background,
      QBrush(QPixmap(":/icon/res/images/selectSeat_background.jpeg")));
  DishesCountDialog->setAutoFillBackground(true);
  DishesCountDialog->setPalette(dishesCount_Pal);

  widget = new QWidget(DishesCountDialog);
  widget->setObjectName(QStringLiteral("widget"));
  widget->setGeometry(QRect(10, 17, 198, 56));
  verticalLayout = new QVBoxLayout(widget);
  verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
  verticalLayout->setContentsMargins(0, 0, 0, 0);
  horizontalLayout = new QHBoxLayout();
  horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
  label = new QLabel(widget);
  label->setObjectName(QStringLiteral("label"));

  horizontalLayout->addWidget(label);

  lineEdit = new QLineEdit(widget);
  lineEdit->setObjectName(QStringLiteral("lineEdit"));

  horizontalLayout->addWidget(lineEdit);

  verticalLayout->addLayout(horizontalLayout);

  horizontalLayout_2 = new QHBoxLayout();
  horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
  pushButton = new QPushButton(widget);
  pushButton->setObjectName(QStringLiteral("pushButton"));

  horizontalLayout_2->addWidget(pushButton);

  pushButton_2 = new QPushButton(widget);
  pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

  horizontalLayout_2->addWidget(pushButton_2);

  verticalLayout->addLayout(horizontalLayout_2);

  retranslateUi(DishesCountDialog);

  QMetaObject::connectSlotsByName(DishesCountDialog);
}  // setupUi

void Ui_DishesCount_Dialog::retranslateUi(QDialog *DishesCountDialog) {
  DishesCountDialog->setWindowTitle(
      QApplication::translate("DishesCountDialog", "Dialog", nullptr));
  label->setText(QApplication::translate("DishesCountDialog",
                                         "\344\273\275\346\225\260:", nullptr));
  pushButton->setText(QApplication::translate(
      "DishesCountDialog", "\347\241\256\345\256\232", nullptr));
  pushButton_2->setText(QApplication::translate(
      "DishesCountDialog", "\350\277\224\345\233\236", nullptr));
}  // retranslateUi
