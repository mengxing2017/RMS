#include "ui_dayincomequery_dialog.h"

void Ui_DayIncomeQuery_Dialog::setupUi(QDialog *DayIncomeQuery_Dialog) {
  if (DayIncomeQuery_Dialog->objectName().isEmpty())
    DayIncomeQuery_Dialog->setObjectName(
        QStringLiteral("DayIncomeQuery_Dialog"));
  DayIncomeQuery_Dialog->resize(600, 500);
  QPalette dayIncomeQuery_Pal(DayIncomeQuery_Dialog->palette());
  dayIncomeQuery_Pal.setBrush(
      QPalette::Background,
      QBrush(QPixmap(":/icon/res/images/selectSeat_background.jpeg")));
  DayIncomeQuery_Dialog->setAutoFillBackground(true);
  DayIncomeQuery_Dialog->setPalette(dayIncomeQuery_Pal);

  queryButton = new QPushButton(DayIncomeQuery_Dialog);
  queryButton->setObjectName(QStringLiteral("queryButton"));
  queryButton->setGeometry(QRect(40, 60, 80, 22));
  quitButton = new QPushButton(DayIncomeQuery_Dialog);
  quitButton->setObjectName(QStringLiteral("quitButton"));
  quitButton->setGeometry(QRect(150, 60, 80, 22));
  widget = new QWidget(DayIncomeQuery_Dialog);
  widget->setObjectName(QStringLiteral("widget"));
  widget->setGeometry(QRect(30, 20, 359, 24));
  horizontalLayout = new QHBoxLayout(widget);
  horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
  horizontalLayout->setContentsMargins(0, 0, 0, 0);
  label = new QLabel(widget);
  label->setObjectName(QStringLiteral("label"));

  horizontalLayout->addWidget(label);

  year_comboBox = new QComboBox(widget);
  year_comboBox->setObjectName(QStringLiteral("year_comboBox"));

  horizontalLayout->addWidget(year_comboBox);

  label_2 = new QLabel(widget);
  label_2->setObjectName(QStringLiteral("label_2"));

  horizontalLayout->addWidget(label_2);

  month_comboBox = new QComboBox(widget);
  month_comboBox->setObjectName(QStringLiteral("month_comboBox"));

  horizontalLayout->addWidget(month_comboBox);

  label_3 = new QLabel(widget);
  label_3->setObjectName(QStringLiteral("label_3"));

  horizontalLayout->addWidget(label_3);

  day_comboBox = new QComboBox(widget);
  day_comboBox->setObjectName(QStringLiteral("day_comboBox"));

  horizontalLayout->addWidget(day_comboBox);

  label_4 = new QLabel(widget);
  label_4->setObjectName(QStringLiteral("label_4"));

  horizontalLayout->addWidget(label_4);

  retranslateUi(DayIncomeQuery_Dialog);

  QMetaObject::connectSlotsByName(DayIncomeQuery_Dialog);
}  // setupUi

void Ui_DayIncomeQuery_Dialog::retranslateUi(QDialog *DayIncomeQuery_Dialog) {
  DayIncomeQuery_Dialog->setWindowTitle(
      QApplication::translate("DayIncomeQuery_Dialog", "Dialog", nullptr));
  queryButton->setText(QApplication::translate(
      "DayIncomeQuery_Dialog", "\346\237\245\350\257\242", nullptr));
  quitButton->setText(QApplication::translate(
      "DayIncomeQuery_Dialog", "\351\200\200\345\207\272", nullptr));
  label->setText(QApplication::translate(
      "DayIncomeQuery_Dialog",
      "\351\200\211\346\213\251\346\227\245\346\234\237", nullptr));
  label_2->setText(QApplication::translate("DayIncomeQuery_Dialog",
                                           "\345\271\264", nullptr));
  label_3->setText(QApplication::translate("DayIncomeQuery_Dialog",
                                           "\346\234\210", nullptr));
  label_4->setText(QApplication::translate("DayIncomeQuery_Dialog",
                                           "\346\227\245", nullptr));
}  // retranslateUi
