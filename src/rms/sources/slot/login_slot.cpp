#include "login_slot.h"
#include "../service/account_service.h"

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
  QString loginName = ui->usernameLe->text();
  QString password = ui->passwordLe->text();

  // 空字符串判断安全写法
  if (nullptr == loginName || loginName.length() == 0 || nullptr == password ||
      password.length() == 0) {
    QMessageBox::information(ui, "登录提示", "请输入登录名或密码！");
  }
  //登录判断
  AccountService *account = new AccountService();
  if (!account->LogonAuthentication(loginName, password)) {
    QMessageBox::information(ui, "登录提示", "登录名或密码错误");
  }
  //显示主界面
}

// 退出或关闭
void LoginSlot::closeClicked() {
  ui->close();
  deleteUi();
}
