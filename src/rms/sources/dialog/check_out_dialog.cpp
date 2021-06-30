#include "dialog/check_out_dialog.h"
#include "db/check.h"
#include "ui/ui_check_out_dialog.h"

Check_OutDialog::Check_OutDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::Check_OutDialog) {
  ui->setupUi(this);
  this->setWindowTitle("结帐");
  seat = new SeatInfo();

  initWindow();
  initCombox();
}

Check_OutDialog::~Check_OutDialog() {
  delete ui;
  seat->~SeatInfo();
}

void Check_OutDialog::initWindow() {
  QBrush myBrush;
  QPalette palette;
  myBrush = QBrush(Qt::blue, Qt::DiagCrossPattern);
  palette.setBrush(QPalette::Text, myBrush);
  ui->receivable_lineEdit->setEnabled(false);
  ui->receivable_lineEdit->setPalette(palette);

  myBrush = QBrush(Qt::red, Qt::DiagCrossPattern);
  palette.setBrush(QPalette::Text, myBrush);
  ui->change_lineEdit->setEnabled(false);
  ui->change_lineEdit->setPalette(palette);

  //    ui->receipts_lineEdit->setInputMask("9");
  ui->receipts_lineEdit->setValidator(new QDoubleValidator(this));
  ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
  ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
  ui->tableWidget->setAlternatingRowColors(true);
  ui->tableWidget->setColumnCount(3);
  QStringList list;
  list << "菜名"
       << "数量"
       << "消费金额(元)";
  ui->tableWidget->setHorizontalHeaderLabels(list);
  ui->tableWidget->setColumnWidth(0, 110);
  ui->tableWidget->setColumnWidth(1, 110);
  ui->tableWidget->setColumnWidth(0, 110);
  //设置列名为加粗
  QFont font = ui->tableWidget->horizontalHeader()->font();
  font.setBold(true);
  ui->tableWidget->horizontalHeader()->setFont(font);
  //去掉第一列标号
  QHeaderView *header = ui->tableWidget->verticalHeader();
  header->setHidden(true);
  //设置选中背景色
  //    ui->tableWidget->setEnabled(false);
  ui->tableWidget->setStyleSheet("selection-background-color:lightblue;");
  ui->tableWidget->setSelectionMode(
      QAbstractItemView::SingleSelection);  //设置为可以选中单个
  ui->tableWidget->setRowCount(50);
}

void Check_OutDialog::on_pushButton_clicked() {
  QString tableid = ui->comboBox->currentText();
  QString time = "";
  QString isSomeone = "没人";
  seat->updateSeatInfo(time, tableid, isSomeone);
  QMessageBox::information(this, "温馨提示", "已成功收款!再见!");
  this->close();
}

void Check_OutDialog::on_pushButton_2_clicked() { this->close(); }

void Check_OutDialog::on_comboBox_activated(const QString &arg1) {
  //更改数据
  ui->receipts_lineEdit->clear();
  ui->receivable_lineEdit->clear();
  ui->change_lineEdit->clear();

  QStringList *foodNameList = new QStringList();
  QStringList *foodPriceList = new QStringList();
  QStringList *numberList = new QStringList();
  Check *check = new Check();
  QString sumMoney =
      check->checkOut(arg1, foodNameList, foodPriceList, numberList);

  for (int i = 0; i < foodNameList->size(); i++) {
    ui->tableWidget->setItem(i, 0, new QTableWidgetItem(foodNameList->at(i)));
    ui->tableWidget->setItem(i, 1, new QTableWidgetItem(numberList->at(i)));
    ui->tableWidget->setItem(i, 2, new QTableWidgetItem(foodPriceList->at(i)));
  }
  ui->receivable_lineEdit->setText(sumMoney);

  //销毁对象
  foodNameList->~QStringList();
  foodPriceList->~QStringList();
  numberList->~QStringList();
}

void Check_OutDialog::initCombox() {
  ui->comboBox->addItems(seat->searchSomeSeat());
}

void Check_OutDialog::on_receipts_lineEdit_textEdited(const QString &arg1) {
  double receipts = arg1.toDouble();
  QString sumMoney = ui->receivable_lineEdit->text();
  double chang = receipts - sumMoney.toDouble();
  ui->change_lineEdit->setText(QString::number(chang));
}
