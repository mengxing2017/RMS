#include "rms/src/include/dialog/dishescount_dialog.h"
#include <QDebug>
#include <QMessageBox>
#include "rms/src/include/ui/ui_dishescount_dialog.h"

DishesCountDialog::DishesCountDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::DishesCountDialog) {
  ui->setupUi(this);
  flag = false;
  this->setWindowTitle("点菜份数");
  ui->lineEdit->setText("1");
}

DishesCountDialog::~DishesCountDialog() { delete ui; }

QString DishesCountDialog::returnCount() { return countS; }

bool DishesCountDialog::returnflag() { return flag; }

void DishesCountDialog::on_pushButton_clicked() {
  countS = ui->lineEdit->text();
  if ("" == countS) {
    QMessageBox::information(this, "温馨提示", "请输入点菜份数");
    return;
  }
  flag = true;
  this->close();
}

void DishesCountDialog::on_pushButton_2_clicked() { this->close(); }
