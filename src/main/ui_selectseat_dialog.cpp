/********************************************************************************
** Form generated from reading UI file 'selectseatdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include "ui_selectseat_dialog.h"

void Ui_SelectSeat_Dialog::setupUi(QDialog *SelectSeat_Dialog) {
  if (SelectSeat_Dialog->objectName().isEmpty())
    SelectSeat_Dialog->setObjectName(QStringLiteral("SelectSeat_Dialog"));
  SelectSeat_Dialog->resize(600, 500);
  SelectSeat_Dialog->setWindowFlag(Qt::FramelessWindowHint);
  QPalette selectSeatPal(SelectSeat_Dialog->palette());
  selectSeatPal.setBrush(
      QPalette::Background,
      QBrush(QPixmap(":/icon/res/images/selectSeat_background.jpeg")));
  SelectSeat_Dialog->setAutoFillBackground(true);
  SelectSeat_Dialog->setPalette(selectSeatPal);

  //关闭按钮
  button_Close = new QPushButton(SelectSeat_Dialog);
  button_Close->setObjectName(QStringLiteral("button_Close"));
  button_Close->setGeometry(575, 0, 25, 25);
  QIcon closeIcon;
  closeIcon.addFile(":/icon/res/images/close.jpeg");
  button_Close->setIcon(closeIcon);
  //选菜表格
  tableWidget = new QTableWidget(SelectSeat_Dialog);
  tableWidget->setObjectName(QStringLiteral("tableWidget"));
  tableWidget->setGeometry(QRect(0, 30, 600, 370));

  //按钮布局
  label = new QLabel(SelectSeat_Dialog);
  label->setObjectName(QStringLiteral("label"));
  label->setGeometry(230, 420, 100, 26);

  lineEdit_Id = new QLineEdit(SelectSeat_Dialog);
  lineEdit_Id->setObjectName(QStringLiteral("lineEdit"));
  lineEdit_Id->setGeometry(330, 420, 40, 26);

  button_Ok = new QPushButton(SelectSeat_Dialog);
  button_Ok->setObjectName(QStringLiteral("button_Ok"));
  button_Ok->setGeometry(230, 450, 60, 26);

  button_Cancel = new QPushButton(SelectSeat_Dialog);
  button_Cancel->setObjectName(QStringLiteral("button_Cancel"));
  button_Cancel->setGeometry(310, 450, 60, 26);

  retranslateUi(SelectSeat_Dialog);

  QMetaObject::connectSlotsByName(SelectSeat_Dialog);
} // setupUi

void Ui_SelectSeat_Dialog::retranslateUi(QDialog *SelectSeat_Dialog) {
  SelectSeat_Dialog->setWindowTitle(
      QApplication::translate("SelectSeat_Dialog", "Dialog", nullptr));
  label->setText(QApplication::translate(
      "SelectSeat_Dialog", "\351\241\276\345\256\242\351\200\211\346\213\251"
                           "\347\232\204\346\241\214\345\217\267:",
      nullptr));
  button_Ok->setText(QApplication::translate(
      "SelectSeat_Dialog", "\347\241\256\345\256\232", nullptr));
  button_Cancel->setText(QApplication::translate(
      "SelectSeat_Dialog", "\345\217\226\346\266\210", nullptr));
} // retranslateUi
