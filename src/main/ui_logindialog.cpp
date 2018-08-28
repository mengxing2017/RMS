#include "ui_logindialog.h"

void Ui_LoginDialog::setupUi(QDialog *LoginDialog) {
  if (LoginDialog->objectName().isEmpty())
    LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
  LoginDialog->resize(420, 320);

  layoutWidget = new QWidget(LoginDialog);
  layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
  layoutWidget->setGeometry(QRect(120, 210, 180, 90));
  verticalLayout = new QVBoxLayout(layoutWidget);
  verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
  verticalLayout->setContentsMargins(0, 0, 0, 0);
  gridLayout = new QGridLayout();
  gridLayout->setObjectName(QStringLiteral("gridLayout"));
  label_UserName = new QLabel(layoutWidget);
  label_UserName->setObjectName(QStringLiteral("label_UserName"));

  gridLayout->addWidget(label_UserName, 0, 0, 1, 1);

  lineEdit_UserName = new QLineEdit(layoutWidget);
  lineEdit_UserName->setObjectName(QStringLiteral("lineEdit_UserName"));

  gridLayout->addWidget(lineEdit_UserName, 0, 1, 1, 1);

  label_Password = new QLabel(layoutWidget);
  label_Password->setObjectName(QStringLiteral("label_Password"));

  gridLayout->addWidget(label_Password, 1, 0, 1, 1);

  lineEdit_Password = new QLineEdit(layoutWidget);
  lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));

  gridLayout->addWidget(lineEdit_Password, 1, 1, 1, 1);

  verticalLayout->addLayout(gridLayout);

  horizontalLayout = new QHBoxLayout();
  horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
  button_Login = new QPushButton(layoutWidget);
  button_Login->setObjectName(QStringLiteral("button_Login"));

  horizontalLayout->addWidget(button_Login);

  button_Quit = new QPushButton(layoutWidget);
  button_Quit->setObjectName(QStringLiteral("button_Quit"));

  horizontalLayout->addWidget(button_Quit);

  verticalLayout->addLayout(horizontalLayout);

  retranslateUi(LoginDialog);

  QMetaObject::connectSlotsByName(LoginDialog);
} // setupUi

void Ui_LoginDialog::retranslateUi(QDialog *LoginDialog) {
  LoginDialog->setWindowTitle(
      QApplication::translate("LoginDialog", "Dialog", nullptr));
  label_UserName->setText(QApplication::translate(
      "LoginDialog", "\347\224\250\346\210\267\345\220\215:", nullptr));
  label_Password->setText(QApplication::translate(
      "LoginDialog", "\345\257\206\347\240\201:", nullptr));
  button_Login->setText(QApplication::translate(
      "LoginDialog", "\347\231\273\345\275\225", nullptr));
  button_Quit->setText(QApplication::translate(
      "LoginDialog", "\351\200\200\345\207\272", nullptr));
} // retranslateUi
