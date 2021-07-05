#include "slot/login_dialog.h"
#include "ui/ui_login_dialog.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::LoginDialog) {
  ui->setupUi(this);
  this->setWindowTitle("登录窗口");
  pass = false;
  admin = false;
  ui->lineEdit_Password->setEchoMode(QLineEdit::Password);
  qDebug() << "test";
}

LoginDialog::~LoginDialog() { delete ui; }

bool LoginDialog::VerifyPass() { return pass; }

bool LoginDialog::returnAdmin() { return admin; }

void LoginDialog::on_button_Login_clicked() {
  bool flag = false;
  QString username = ui->lineEdit_UserName->text();
  QString userpassword = ui->lineEdit_Password->text();

  if (NULL == username) {
    QMessageBox::information(this, "登录提示", "请输入登录名");
  } else if (NULL == userpassword) {
    QMessageBox::information(this, "登录提示", "请输入登录密码");
  } else {
    UserManagement *user = new UserManagement();
    flag = user->login(username, userpassword);
  }

  if (flag) {
    QMessageBox::information(this, "登录提示", "密码或者用户名错误");
  }
}

void LoginDialog::on_button_Quit_clicked() { this->close(); }
void LoginDialog::on_button_Close_clicked() { this->close(); }
