#include "slot/login_slot.h"

LoginSlot::LoginSlot() {
  ui = new LoginDlgUi();

  connect(ui->loginBt, SIGNAL(clicked()), this, SLOT(loginClicked()));
  connect(ui->quitBt, SIGNAL(clicked()), this, SLOT(closeClicked()));
  connect(ui->closeBt, SIGNAL(clicked()), this, SLOT(closeClicked()));
}

void LoginSlot::show() { ui->exec(); }

void LoginSlot::deleteUi() { ui->~LoginDlgUi(); }

// 登录
void LoginSlot::loginClicked() {
  QString username = ui->usernameLe->text();
  QString password = ui->passwordLe->text();

  // 空字符串判断安全写法
  if (nullptr == username || username.length() == 0 || nullptr == password ||
      password.length() == 0) {
    QMessageBox::information(ui, "登录提示", "请输入登录名或密码！");
  }
  //登录判断
}

// 退出或关闭
void LoginSlot::closeClicked() {
  ui->close();
  deleteUi();
}
