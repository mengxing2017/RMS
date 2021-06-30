#include "src/rms/include/ui/ui_login_dialog.h"

void Ui_Login_Dialog::setupUi(QDialog *LoginDialog) {
  if (LoginDialog->objectName().isEmpty())
    LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
  LoginDialog->resize(420, 320);
  QPalette LoginPal(LoginDialog->palette());
  LoginPal.setBrush(QPalette::Background,
                    QBrush(QPixmap(":/icon/res/images/login_background.jpeg")));
  LoginDialog->setAutoFillBackground(true);
  LoginDialog->setPalette(LoginPal);
  LoginDialog->setWindowFlags(Qt::FramelessWindowHint);

  layoutWidget_top = new QWidget(LoginDialog);
  layoutWidget_top->setObjectName(QStringLiteral("layoutWidget_top"));
  layoutWidget_top->setGeometry(QRect(0, 0, 420, 180));

  layoutWidget_bottom = new QWidget(LoginDialog);
  layoutWidget_bottom->setObjectName(QStringLiteral("layoutWidget_bottom"));
  layoutWidget_bottom->setGeometry(QRect(120, 210, 180, 90));

  verticalLayout = new QVBoxLayout(layoutWidget_bottom);
  verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
  verticalLayout->setContentsMargins(0, 0, 0, 0);

  gridLayout = new QGridLayout();
  gridLayout->setObjectName(QStringLiteral("gridLayout"));

  label_UserName = new QLabel(layoutWidget_bottom);
  label_UserName->setObjectName(QStringLiteral("label_UserName"));
  label_UserName->setGeometry(1, 1, 40, 26);

  gridLayout->addWidget(label_UserName, 0, 0, 1, 1);

  lineEdit_UserName = new QLineEdit(layoutWidget_bottom);
  lineEdit_UserName->setObjectName(QStringLiteral("lineEdit_UserName"));
  lineEdit_UserName->setGeometry(47, 1, 128, 26);

  gridLayout->addWidget(lineEdit_UserName, 0, 1, 1, 1);

  label_Password = new QLabel(layoutWidget_bottom);
  label_Password->setObjectName(QStringLiteral("label_Password"));
  label_Password->setGeometry(1, 33, 40, 26);

  gridLayout->addWidget(label_Password, 1, 0, 1, 1);

  lineEdit_Password = new QLineEdit(layoutWidget_bottom);
  lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));
  lineEdit_Password->setGeometry(47, 33, 128, 26);

  gridLayout->addWidget(lineEdit_Password, 1, 1, 1, 1);

  verticalLayout->addLayout(gridLayout);

  horizontalLayout = new QHBoxLayout();
  horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

  button_Login = new QPushButton(layoutWidget_bottom);
  button_Login->setObjectName(QStringLiteral("button_Login"));
  button_Login->setGeometry(1, 1, 84, 26);

  horizontalLayout->addWidget(button_Login);

  button_Quit = new QPushButton(layoutWidget_bottom);
  button_Quit->setObjectName(QStringLiteral("button_Quit"));
  button_Quit->setGeometry(91, 1, 86, 26);

  horizontalLayout->addWidget(button_Quit);

  verticalLayout->addLayout(horizontalLayout);

  retranslateUi(LoginDialog);

  button_Close = new QPushButton(LoginDialog);
  button_Close->setObjectName(QStringLiteral("button_Close"));
  button_Close->setGeometry(395, 0, 25, 25);
  QIcon closeIcon;
  closeIcon.addFile(":/icon/res/images/close.jpeg");
  button_Close->setIcon(closeIcon);

  QMetaObject::connectSlotsByName(LoginDialog);
}  // setupUi

void Ui_Login_Dialog::retranslateUi(QDialog *LoginDialog) {
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
}  // retranslateUi
