#include "src/rms/include/dialog/staffregister_dialog.h"
#include "src/rms/include/db/user_management.h"
#include "src/rms/include/ui/ui_staffregister_dialog.h"

staffRegister_Dialog::staffRegister_Dialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::staffRegister_Dialog) {
  ui->setupUi(this);
  this->setWindowTitle("员工注册");

  //初始化窗口combox
  QStringList item;
  item << "普通员工"
       << "管理员";
  ui->comboBox->addItems(item);
}

staffRegister_Dialog::~staffRegister_Dialog() { delete ui; }

void staffRegister_Dialog::on_pushButton_clicked() {
  //这个为确定按钮
  QString name = ui->userName_lineEdit->text();
  QString password = ui->password_lineEdit->text();
  QString rePassword = ui->rePassword_lineEdit->text();
  if (password == rePassword) {
    QString jurisdiction = ui->comboBox->currentText();  //权限
    UserManagement userManagerment = UserManagement();
    if (userManagerment.registerUser(name, password, jurisdiction)) {
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
