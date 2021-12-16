#include "login_dlg_ui.h"

LoginDlgUi::LoginDlgUi(QWidget *parent) : QDialog(parent) {
  //设置登录框对象名
  if (this->objectName().isEmpty())
    this->setObjectName(QStringLiteral("LoginDialog"));

  this->setWindowTitle("登录窗口");

  //登录框大小
  this->resize(420, 320);
  //调色板
  QPalette LoginPal(this->palette());
  //设置背景图片
  LoginPal.setBrush(QPalette::Window,
                    QBrush(QPixmap(":/icon/res/images/login_background.jpeg")));
  this->setAutoFillBackground(true);
  this->setPalette(LoginPal);
  this->setWindowFlags(Qt::FramelessWindowHint);

  // 顶部
  top = new QWidget(this);
  top->setObjectName(QStringLiteral("layoutWidget_top"));
  top->setGeometry(QRect(0, 0, 420, 180));

  // 底部
  bottom = new QWidget(this);
  bottom->setObjectName(QStringLiteral("layoutWidget_bottom"));
  bottom->setGeometry(QRect(120, 210, 180, 90));

  // 垂直布局盒子
  vLayout = new QVBoxLayout(bottom);
  vLayout->setObjectName(QStringLiteral("verticalLayout"));
  vLayout->setContentsMargins(0, 0, 0, 0);

  // 网格布局
  gridLayout = new QGridLayout();
  gridLayout->setObjectName(QStringLiteral("gridLayout"));

  // 用户名标签
  usernameLb = new QLabel(bottom);
  usernameLb->setObjectName(QStringLiteral("label_UserName"));
  usernameLb->setGeometry(1, 1, 40, 26);

  gridLayout->addWidget(usernameLb, 0, 0, 1, 1);

  // 用户名输入框
  usernameLe = new QLineEdit(bottom);
  usernameLe->setObjectName(QStringLiteral("lineEdit_UserName"));
  usernameLe->setGeometry(47, 1, 128, 26);

  gridLayout->addWidget(usernameLe, 0, 1, 1, 1);

  //密码标签
  passwordLb = new QLabel(bottom);
  passwordLb->setObjectName(QStringLiteral("label_Password"));
  passwordLb->setGeometry(1, 33, 40, 26);

  gridLayout->addWidget(passwordLb, 1, 0, 1, 1);

  // 密码输入框
  passwordLe = new QLineEdit(bottom);
  passwordLe->setObjectName(QStringLiteral("lineEdit_Password"));
  passwordLe->setEchoMode(QLineEdit::Password);
  passwordLe->setGeometry(47, 33, 128, 26);

  gridLayout->addWidget(passwordLe, 1, 1, 1, 1);

  vLayout->addLayout(gridLayout);

  //水平布局
  hLayout = new QHBoxLayout();
  hLayout->setObjectName(QStringLiteral("horizontalLayout"));

  // 登录按钮
  loginBt = new QPushButton(bottom);
  loginBt->setObjectName(QStringLiteral("button_Login"));
  loginBt->setGeometry(1, 1, 84, 26);

  hLayout->addWidget(loginBt);

  //退出按钮
  quitBt = new QPushButton(bottom);
  quitBt->setObjectName(QStringLiteral("button_Quit"));
  quitBt->setGeometry(91, 1, 86, 26);

  hLayout->addWidget(quitBt);

  vLayout->addLayout(hLayout);

  // 关闭按钮
  closeBt = new QPushButton(this);
  closeBt->setObjectName(QStringLiteral("button_Close"));
  closeBt->setGeometry(395, 0, 25, 25);
  QIcon closeIcon;
  closeIcon.addFile(":/icon/res/images/close.jpeg");
  closeBt->setIcon(closeIcon);

  QMetaObject::connectSlotsByName(this);

  retranslateUi(this);
}  // setupUi

// 设置文字国际化
void LoginDlgUi::retranslateUi(QDialog *LoginDialog) {
  LoginDialog->setWindowTitle(
      QApplication::translate("LoginDialog", "Dialog", nullptr));
  usernameLb->setText(QApplication::translate(
      "LoginDialog", "\347\224\250\346\210\267\345\220\215:", nullptr));
  passwordLb->setText(QApplication::translate(
      "LoginDialog", "\345\257\206\347\240\201:", nullptr));
  loginBt->setText(QApplication::translate(
      "LoginDialog", "\347\231\273\345\275\225", nullptr));
  quitBt->setText(QApplication::translate("LoginDialog",
                                          "\351\200\200\345\207\272", nullptr));
}  // retranslateUi
