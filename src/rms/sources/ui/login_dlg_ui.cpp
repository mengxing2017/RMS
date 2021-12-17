#include "login_dlg_ui.h"

LoginDlgUi::LoginDlgUi(QWidget *parent) : QDialog(parent) {
  //设置登录框对象名
  if (this->objectName().isEmpty())
    this->setObjectName(QStringLiteral("LoginDialog"));

  this->setWindowTitle("登录窗口");

  //登录框大小
  this->resize(1000, 480);
  this->setWindowFlags(Qt::FramelessWindowHint);

  left = new QWidget(this);
  left->setGeometry(QRect(0, 0, 480, 480));
  left->setStyleSheet("background-color: rgb(166,211,255);");

  softName = new QWidget(left);
  softName->setGeometry(85, 180, 310, 120);

  softCnNameLb = new QLabel(softName);
  softCnNameLb->setGeometry(0, 0, 310, 54);
  softCnNameLb->setAlignment(Qt::AlignHCenter);
  softCnNameLb->setStyleSheet("color:white;");
  QFont softCnNameFont;
  softCnNameFont.setPixelSize(40);
  softCnNameFont.setFamily("宋体");
  softCnNameLb->setFont(softCnNameFont);

  welcomeLb = new QLabel(softName);
  welcomeLb->setGeometry(0, 75, 310, 44);
  welcomeLb->setAlignment(Qt::AlignHCenter);
  welcomeLb->setStyleSheet("color:white;");
  QFont welcomeFont;
  welcomeFont.setPixelSize(20);
  welcomeFont.setFamily("宋体");
  welcomeLb->setFont(welcomeFont);

  welcomeLoginLb = new QLabel(this);
  welcomeLoginLb->setGeometry(635, 85, 160, 40);
  QFont welcomeLoginFont;
  welcomeLoginFont.setFamily("宋体");
  welcomeLoginFont.setPixelSize(40);
  welcomeLoginLb->setFont(welcomeLoginFont);

  // 通用字体
  QFont commonFont;
  commonFont.setFamily("宋体");
  commonFont.setPixelSize(20);

  // 用户名标签
  usernameLb = new QLabel(this);
  usernameLb->setObjectName(QStringLiteral("label_UserName"));
  usernameLb->setGeometry(635, 185, 40, 20);
  usernameLb->setFont(commonFont);

  // 用户名输入框
  usernameLe = new QLineEdit(this);
  usernameLe->setObjectName(QStringLiteral("lineEdit_UserName"));
  usernameLe->setGeometry(635, 210, 270, 40);

  //密码标签
  passwordLb = new QLabel(this);
  passwordLb->setObjectName(QStringLiteral("label_Password"));
  passwordLb->setGeometry(635, 255, 40, 20);
  passwordLb->setFont(commonFont);

  // 密码输入框
  passwordLe = new QLineEdit(this);
  passwordLe->setObjectName(QStringLiteral("lineEdit_Password"));
  passwordLe->setEchoMode(QLineEdit::Password);
  passwordLe->setGeometry(635, 280, 270, 40);

  // 登录按钮
  loginBt = new QPushButton(this);
  loginBt->setObjectName(QStringLiteral("button_Login"));
  loginBt->setGeometry(635, 380, 80, 40);
  loginBt->setFont(commonFont);

  //退出按钮
  quitBt = new QPushButton(this);
  quitBt->setObjectName(QStringLiteral("button_Quit"));
  quitBt->setGeometry(825, 380, 80, 40);
  quitBt->setFont(commonFont);

  QMetaObject::connectSlotsByName(this);

  retranslateUi(this);
}  // setupUi

// 设置文字国际化
void LoginDlgUi::retranslateUi(QDialog *LoginDialog) {
  LoginDialog->setWindowTitle(
      QApplication::translate("LoginDialog", "Dialog", nullptr));
  softCnNameLb->setText(QObject::tr("RMS餐饮管理系统"));
  welcomeLb->setText(QObject::tr("Welcome to RMS System"));
  welcomeLoginLb->setText(QObject::tr("欢迎登录"));
  usernameLb->setText(QObject::tr("账号"));
  passwordLb->setText(QObject::tr("密码"));
  loginBt->setText(QApplication::translate(
      "LoginDialog", "\347\231\273\345\275\225", nullptr));
  quitBt->setText(QApplication::translate("LoginDialog",
                                          "\351\200\200\345\207\272", nullptr));
}  // retranslateUi
