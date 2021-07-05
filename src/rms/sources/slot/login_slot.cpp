#include "slot/login_slot.h"
#include "ui/ui_login_dialog.h"

LoginSlot::LoginSlot(QWidget *parent)
    : QDialog(parent), ui(new Ui::LoginDialog) {
  ui->setupUi(this);
  this->setWindowTitle("登录窗口");

  ui->passwordLe->setEchoMode(QLineEdit::Password);
  qDebug() << "test";
}

LoginSlot::~LoginSlot() { delete ui; }

void LoginSlot::on_button_Login_clicked() {
  //  bool flag = false;
  QString username = ui->usernameLe->text();
  QString userpassword = ui->passwordLe->text();

  //  if (NULL == username) {
  //    QMessageBox::information(this, "登录提示", "请输入登录名");
  //  } else if (NULL == userpassword) {
  //    QMessageBox::information(this, "登录提示", "请输入登录密码");
  //  } else {
  //    UserManagement *user = new UserManagement();
  //    flag = user->login(username, userpassword);
  //  }

  //  if (flag) {
  //    QMessageBox::information(this, "登录提示", "密码或者用户名错误");
  //  }
}

void LoginSlot::on_button_Quit_clicked() { this->close(); }
void LoginSlot::on_button_Close_clicked() { this->close(); }
