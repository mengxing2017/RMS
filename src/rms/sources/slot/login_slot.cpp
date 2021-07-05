#include "slot/login_slot.h"

LoginSlot::LoginSlot() {
  ui = new Ui_Login_Dialog();

  connect(ui->loginBt, SIGNAL(clicked()), this, SLOT(loginClicked()));
  connect(ui->quitBt, SIGNAL(clicked()), this, SLOT(closeClicked()));
  connect(ui->closeBt, SIGNAL(clicked()), this, SLOT(closeClicked()));
}

void LoginSlot::show() { ui->exec(); }

void LoginSlot::deleteUi() { ui->~Ui_Login_Dialog(); }

// 登录
void LoginSlot::loginClicked() {
  QString username = ui->usernameLe->text();
  QString password = ui->passwordLe->text();

  if (nullptr == username || "" == username || nullptr == password ||
      "" == password) {
    QMessageBox::information(ui, "登录提示", "请输入登录名或密码！");
  }
  //登录判断
}

// 退出或关闭
void LoginSlot::closeClicked() {
  ui->close();
  deleteUi();
}
