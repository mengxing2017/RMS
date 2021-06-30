#include "dialog/dayincomequery_dialog.h"
#include "db/search_sales.h"
#include "ui/ui_dayincomequery_dialog.h"

DayIncomeQuery_Dialog::DayIncomeQuery_Dialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::DayIncomeQuery_Dialog) {
  ui->setupUi(this);
  this->setWindowTitle("日收入查询");
  initCombox();
}

DayIncomeQuery_Dialog::~DayIncomeQuery_Dialog() { delete ui; }

void DayIncomeQuery_Dialog::initCombox() {
  QDate date = QDate::currentDate();
  QStringList item;
  for (int i = -5; i < 5; i++) {
    item.append(QString::number(date.year() + i));
    qDebug() << QString::number(date.year() + i);
  }
  ui->year_comboBox->addItems(item);
  item.clear();
  for (int i = 1; i <= 12; i++) {
    if (i < 10) {
      item.append("0" + QString::number(i));
    } else {
      item.append(QString::number(i));
    }
  }
  ui->month_comboBox->addItems(item);
  item.clear();
  for (int i = 1; i <= 31; i++) {
    if (i < 10) {
      item.append("0" + QString::number(i));
    } else {
      item.append(QString::number(i));
    }
  }
  ui->day_comboBox->addItems(item);
}

void DayIncomeQuery_Dialog::on_queryButton_clicked() {
  //提取数据库数据
  QString year = ui->year_comboBox->currentText();
  QString month = ui->month_comboBox->currentText();
  QString day = ui->day_comboBox->currentText();

  SearchSales *sales = new SearchSales();
  QString sumMoney = sales->searchDailySales(year, month, day);
  QMessageBox::information(this, "日收入查询",
                           "" + year + "年" + month + "月" + day +
                               "日的收入为: " + sumMoney + " 元");
}

void DayIncomeQuery_Dialog::on_quitButton_clicked() { this->close(); }
