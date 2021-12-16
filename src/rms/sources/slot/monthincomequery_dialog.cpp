#include "slot/monthincomequery_dialog.h"
#include "ui/ui_monthincomequery_dialog.h"

MonthIncomeQuery_Dialog::MonthIncomeQuery_Dialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::MonthIncomeQuery_Dialog) {
  ui->setupUi(this);
  this->setWindowTitle("月收入查询");
  initCombox();
}

MonthIncomeQuery_Dialog::~MonthIncomeQuery_Dialog() { delete ui; }

void MonthIncomeQuery_Dialog::initCombox() {
  QDate date = QDate::currentDate();
  QStringList item;
  for (int i = -5; i < 5; i++) {
    item.append(QString::number(date.year() + i));
    //        qDebug()<<QString::number(date.year()+i);
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
}

void MonthIncomeQuery_Dialog::on_queryButton_clicked() {
  //此处读取数据库数据
  QString year = ui->year_comboBox->currentText();
  QString month = ui->month_comboBox->currentText();

  Sales *sales = new Sales();
  QString sumMoney = sales->searchMonthSales(year, month);
  QMessageBox::information(
      this, "月收入查询",
      "" + year + "年" + month + "月的收入为: " + sumMoney + " 元");
}

void MonthIncomeQuery_Dialog::on_quitButton_clicked() { this->close(); }
