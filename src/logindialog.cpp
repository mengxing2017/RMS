#include "logindialog.h"
#include "src/main/ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::LoginDialog) {
  ui->setupUi(this);
  this->setWindowTitle("登录窗口");
  pass = false;
  admin = false;
  ui->lineEdit_Password->setEchoMode(QLineEdit::Password);
  qDebug() << "test";
  m_db = QSqlDatabase::addDatabase("QSQLITE");
  m_db.setDatabaseName("data.db");
  if (!m_db.open()) {
    qDebug() << "Error: connection with database fail";
  } else {
    qDebug() << "Database: connection ok";
  }
}

LoginDialog::~LoginDialog() { delete ui; }

bool LoginDialog::VerifyPass() { return pass; }

bool LoginDialog::returnAdmin() { return admin; }

void LoginDialog::on_button_Login_clicked() {
  bool flag = false;
  QString username = ui->lineEdit_UserName->text();
  QString userpassword = ui->lineEdit_Password->text();

  //提取sql中的数据
  QSqlQuery query(m_db);
  query.exec("select *from LoginInfo");
  while (query.next()) {
    QString user = query.value(1).toString();
    QString pass = query.value(2).toString();
    if (username == user && userpassword == pass) {
      flag = true;
      if (query.value(3).toString() == "管理员") {
        admin = true;
      }
      qDebug() << admin;
      qDebug() << "flag=true";
    }
  }

  if (NULL == username) {
    QMessageBox::information(this, "登录提示", "请输入登录名");
  } else if (NULL == userpassword) {
    QMessageBox::information(this, "登录提示", "请输入登录密码");
  } else if (flag) {
    pass = true;
    qDebug() << "登录测试1" << pass;
    QMessageBox::information(this, "登录提示", "登录成功");
    qDebug() << "登录测试" << pass;
    this->close();
  } else {
    QMessageBox::information(this, "登录提示", "密码或者用户名错误");
  }
}

void LoginDialog::on_button_Quit_clicked() { this->close(); }
void LoginDialog::on_button_Close_clicked() { this->close(); }
