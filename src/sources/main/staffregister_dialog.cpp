#include "src/include/main/staffregister_dialog.h"
#include "src/include/ui/ui_staffregister_dialog.h"

staffRegister_Dialog::staffRegister_Dialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::staffRegister_Dialog) {
  ui->setupUi(this);
  this->setWindowTitle("员工注册");
  m_db = QSqlDatabase::addDatabase("QSQLITE");
  m_db.setDatabaseName("data.db");
  if (!m_db.open()) {
    qDebug() << "Error: connection with database fail";
  } else {
    qDebug() << "Database: connection ok";
  }

  //初始化窗口combox
  QStringList item;
  item << "普通员工"
       << "管理员";
  ui->comboBox->addItems(item);
}

staffRegister_Dialog::~staffRegister_Dialog() { delete ui; }

void staffRegister_Dialog::on_pushButton_clicked() {
  //这个为确定按钮
  QString Name = ui->userName_lineEdit->text();
  QString Password = ui->password_lineEdit->text();
  QString rePassword = ui->rePassword_lineEdit->text();
  if (Password == rePassword) {
    QString jurisdiction = ui->comboBox->currentText(); //权限
    QSqlQuery query(m_db);
    //        query.exec("select *from billinfo")
    query.prepare("INSERT INTO logininfo (uname,upasswd,power)"
                  "VALUES (:name, :password, :juris)");
    query.bindValue(":name", Name);
    query.bindValue(":password", Password);
    query.bindValue(":juris", jurisdiction);
    if (query.exec()) {
      QMessageBox::information(this, "温馨提示", "注册成功");
    } else {
      QMessageBox::information(this, "温馨提示", "注册失败,请重新注册");
    }
  } else {
    QMessageBox::information(this, "温馨提示", "两次密码不一致");
  }
  ui->password_lineEdit->clear();
  ui->userName_lineEdit->clear();
  ui->rePassword_lineEdit->clear();
  return;
}

void staffRegister_Dialog::on_pushButton_2_clicked() {
  //这个为重置按钮
  ui->password_lineEdit->clear();
  ui->userName_lineEdit->clear();
  ui->rePassword_lineEdit->clear();
  return;
}

void staffRegister_Dialog::on_cancel_pushButton_clicked() {
  //取消
  this->close();
}
