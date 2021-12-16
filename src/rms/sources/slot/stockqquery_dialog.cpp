#include "stockqquery_dialog.h"
#include "../ui/ui_stockquery_dialog.h"

StockqQuery_Dialog::StockqQuery_Dialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::StockqQuery_Dialog) {
  ui->setupUi(this);
  this->setWindowTitle("进货查询");

  //初始化表格
  ui->tableWidget->setSelectionBehavior(
      QAbstractItemView::SelectRows);              //选中整行
  ui->tableWidget->setAlternatingRowColors(true);  //设置没行变一色
  ui->tableWidget->setColumnCount(3);
  QStringList list;
  list << "商品名"
       << "数量(斤)"
       << "价格(元)";
  ui->tableWidget->setHorizontalHeaderLabels(list);
  ui->tableWidget->setColumnWidth(0, 200);
  ui->tableWidget->setColumnWidth(1, 180);
  ui->tableWidget->setColumnWidth(2, 180);
  //设置列名为加粗
  QFont font = ui->tableWidget->horizontalHeader()->font();
  font.setBold(true);
  ui->tableWidget->horizontalHeader()->setFont(font);
  //去掉第一列标号
  QHeaderView *header = ui->tableWidget->verticalHeader();
  header->setHidden(true);
  //设置选中背景色
  ui->tableWidget->setStyleSheet("selection-background-color:lightblue;");
  ui->tableWidget->setSelectionMode(
      QAbstractItemView::SingleSelection);  //设置为可以选中单个
  ui->tableWidget->setRowCount(2);
  ui->tableWidget->setItem(0, 0, new QTableWidgetItem("studentid"));
  ui->tableWidget->setItem(0, 1, new QTableWidgetItem("有人"));
  ui->tableWidget->setItem(0, 2, new QTableWidgetItem("15"));
  ui->tableWidget->setItem(1, 0, new QTableWidgetItem("studentid1"));
  ui->tableWidget->setItem(1, 1, new QTableWidgetItem("空闲"));
  ui->tableWidget->setItem(1, 2, new QTableWidgetItem("15"));
}

StockqQuery_Dialog::~StockqQuery_Dialog() { delete ui; }

void StockqQuery_Dialog::on_queryButton_clicked() {}

void StockqQuery_Dialog::on_quit_Button_clicked() { this->close(); }
