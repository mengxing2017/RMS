#include "src/include/ui/ui_stockquery_dialog.h"

void Ui_StockqQuery_Dialog::setupUi(QDialog *StockqQuery_Dialog) {
  if (StockqQuery_Dialog->objectName().isEmpty())
    StockqQuery_Dialog->setObjectName(QStringLiteral("StockqQuery_Dialog"));
  StockqQuery_Dialog->resize(600, 500);
  QPalette StockqQuery_Pal(StockqQuery_Dialog->palette());
  StockqQuery_Pal.setBrush(
      QPalette::Background,
      QBrush(QPixmap(":/icon/res/images/selectSeat_background.jpeg")));
  StockqQuery_Dialog->setAutoFillBackground(true);
  StockqQuery_Dialog->setPalette(StockqQuery_Pal);

  tableWidget = new QTableWidget(StockqQuery_Dialog);
  tableWidget->setObjectName(QStringLiteral("tableWidget"));
  tableWidget->setGeometry(QRect(10, 100, 361, 391));
  widget = new QWidget(StockqQuery_Dialog);
  widget->setObjectName(QStringLiteral("widget"));
  widget->setGeometry(QRect(30, 20, 178, 25));
  horizontalLayout = new QHBoxLayout(widget);
  horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
  horizontalLayout->setContentsMargins(0, 0, 0, 0);
  label = new QLabel(widget);
  label->setObjectName(QStringLiteral("label"));

  horizontalLayout->addWidget(label);

  dateEdit = new QDateEdit(widget);
  dateEdit->setObjectName(QStringLiteral("dateEdit"));

  horizontalLayout->addWidget(dateEdit);

  widget1 = new QWidget(StockqQuery_Dialog);
  widget1->setObjectName(QStringLiteral("widget1"));
  widget1->setGeometry(QRect(30, 60, 168, 24));
  horizontalLayout_2 = new QHBoxLayout(widget1);
  horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
  horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
  queryButton = new QPushButton(widget1);
  queryButton->setObjectName(QStringLiteral("queryButton"));

  horizontalLayout_2->addWidget(queryButton);

  quit_Button = new QPushButton(widget1);
  quit_Button->setObjectName(QStringLiteral("quit_Button"));

  horizontalLayout_2->addWidget(quit_Button);

  retranslateUi(StockqQuery_Dialog);

  QMetaObject::connectSlotsByName(StockqQuery_Dialog);
} // setupUi

void Ui_StockqQuery_Dialog::retranslateUi(QDialog *StockqQuery_Dialog) {
  StockqQuery_Dialog->setWindowTitle(
      QApplication::translate("StockqQuery_Dialog", "Dialog", nullptr));
  label->setText(QApplication::translate(
      "StockqQuery_Dialog", "\350\257\267\351\200\211\346\213\251\345\271\264"
                            "\346\234\210\346\227\245:",
      nullptr));
  queryButton->setText(QApplication::translate(
      "StockqQuery_Dialog", "\346\237\245\350\257\242", nullptr));
  quit_Button->setText(QApplication::translate(
      "StockqQuery_Dialog", "\351\200\200\345\207\272", nullptr));
} // retranslateUi
