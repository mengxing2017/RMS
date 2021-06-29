#include "rms/src/include/dialog/orderdishes_dialog.h"
#include <QStandardItemModel>
#include "rms/src/include/db/food_info.h"
#include "rms/src/include/db/order_dishes.h"
#include "rms/src/include/dialog/dishescount_dialog.h"
#include "rms/src/include/ui/ui_orderdishes_dialog.h"

OrderDishesDialog::OrderDishesDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::OrderDishesDialog) {
  ui->setupUi(this);
  this->setWindowTitle("点菜");
  count = 0;
  isOrder = false;

  /*
      //数据库初始化并连接
      m_db= QSqlDatabase::addDatabase("QSQLITE");
      m_db.setDatabaseName("data.db");
      if (!m_db.open())
      {
          qDebug() << "Error: connection with database fail";
      }
      else
      {
          qDebug() << "Database: connection ok";
      }

      */

  // foodtable
  initWindow();
}

OrderDishesDialog::~OrderDishesDialog() { delete ui; }

void OrderDishesDialog::receiverIdData(QString data) {
  idData = data;
  ui->lineEdit->setText(idData);
}

bool OrderDishesDialog::returnIsOrder() { return isOrder; }

void OrderDishesDialog::on_OkButton_clicked() {
  QAbstractItemModel *rightModel = ui->isSelcteFood_tableWidget->model();
  QAbstractItemModel *leftModel = ui->food_tableWidget->model();

  OrderDishes *dishes = new OrderDishes();
  dishes->UpdateDishes(idData, rightModel, leftModel);

  QMessageBox::information(this, "温馨提示", "点菜成功");
  this->close();
}

void OrderDishesDialog::on_cancelButton_clicked() {
  this->close();  //关闭窗口
}
void OrderDishesDialog::on_deleteButton_clicked() {
  QAbstractItemModel *model = ui->isSelcteFood_tableWidget->model();
  int curRow = ui->isSelcteFood_tableWidget->currentIndex().row();
  model->removeRow(curRow);
  count--;
}

void OrderDishesDialog::on_addButton_clicked() {
  //此功能为添加菜品
  int row = ui->food_tableWidget->currentIndex().row();
  QAbstractItemModel *model = ui->food_tableWidget->model();
  QModelIndex indexfood = model->index(row, 0);
  QString tempfood = model->data(indexfood).toString();
  if ("" != tempfood) {
    DishesCountDialog *disheCount = new DishesCountDialog;
    disheCount->setModal(true);
    disheCount->show();
    disheCount->exec();
    if (disheCount->returnflag()) {
      QString numberfood = disheCount->returnCount();

      ui->isSelcteFood_tableWidget->setItem(count, 0,
                                            new QTableWidgetItem(tempfood));
      ui->isSelcteFood_tableWidget->setItem(count, 1,
                                            new QTableWidgetItem(numberfood));
      count++;
    }
    delete disheCount;
  } else {
    QMessageBox::information(this, "温馨提示", "请选择菜品");
  }
  return;
}

void OrderDishesDialog::initWindow() {
  //设置日期显示
  QDateTime time = QDateTime::currentDateTime();
  dateStr = time.toString("yyyy-MM-dd hh:mm");
  QBrush myBrush;
  QPalette palette;
  myBrush = QBrush(Qt::red, Qt::DiagCrossPattern);
  palette.setBrush(QPalette::Text, myBrush);
  ui->date_lineEdit->setText(dateStr);
  ui->date_lineEdit->setEnabled(false);
  ui->date_lineEdit->setPalette(palette);

  //设置桌号显示
  ui->lineEdit->setEnabled(false);
  ui->lineEdit->setPalette(palette);

  ui->food_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
  ui->food_tableWidget->setAlternatingRowColors(true);
  ui->food_tableWidget->setColumnCount(2);
  ui->food_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
  // setEditTriggers(QAbstractItemView::NoEditTriggers);
  QStringList list;
  list << "菜名"
       << "菜价";
  ui->food_tableWidget->setHorizontalHeaderLabels(list);
  ui->food_tableWidget->setColumnWidth(0, 160);
  ui->food_tableWidget->setColumnWidth(1, 130);
  //设置列名为加粗
  QFont font = ui->food_tableWidget->horizontalHeader()->font();
  font.setBold(true);
  ui->food_tableWidget->horizontalHeader()->setFont(font);
  //去掉第一列标号
  QHeaderView *header = ui->food_tableWidget->verticalHeader();
  header->setHidden(true);
  //设置选中背景色
  ui->food_tableWidget->setStyleSheet("selection-background-color:lightblue;");
  ui->food_tableWidget->setSelectionMode(
      QAbstractItemView::SingleSelection);  //设置为可以选中单个

  //初始化菜单
  //    initFoodTable();

  // isfood_table

  ui->isSelcteFood_tableWidget->setSelectionBehavior(
      QAbstractItemView::SelectRows);
  ui->isSelcteFood_tableWidget->setAlternatingRowColors(true);
  ui->isSelcteFood_tableWidget->setColumnCount(2);
  ui->isSelcteFood_tableWidget->setEditTriggers(
      QAbstractItemView::NoEditTriggers);
  QStringList listfood;
  listfood << "菜名"
           << "数量";
  ui->isSelcteFood_tableWidget->setHorizontalHeaderLabels(listfood);
  ui->isSelcteFood_tableWidget->setColumnWidth(0, 160);
  ui->isSelcteFood_tableWidget->setColumnWidth(1, 130);
  //设置列名为加粗
  QFont fontfood = ui->isSelcteFood_tableWidget->horizontalHeader()->font();
  fontfood.setBold(true);
  ui->isSelcteFood_tableWidget->horizontalHeader()->setFont(fontfood);
  //去掉第一列标号
  QHeaderView *headerfood = ui->isSelcteFood_tableWidget->verticalHeader();
  headerfood->setHidden(true);
  //设置选中背景色
  ui->isSelcteFood_tableWidget->setStyleSheet(
      "selection-background-color:lightblue;");
  ui->isSelcteFood_tableWidget->setSelectionMode(
      QAbstractItemView::SingleSelection);  //设置为可以选中单个
  ui->isSelcteFood_tableWidget->setRowCount(50);
}

void OrderDishesDialog::initFoodTable() {
  QStringList *foodNameItem = new QStringList();
  QStringList *foodPriceItem = new QStringList();

  int row = 0;
  FoodInfo *foodInfo = new FoodInfo();
  foodInfo->searchFoodInfo(foodNameItem, foodPriceItem, &row);
  ui->food_tableWidget->setRowCount(row);

  for (int i = 0; i < foodNameItem->size(); i++) {
    ui->food_tableWidget->setItem(i, 0,
                                  new QTableWidgetItem(foodNameItem->at(i)));
    ui->food_tableWidget->setItem(i, 1,
                                  new QTableWidgetItem(foodPriceItem->at(i)));
  }
}

QString OrderDishesDialog::returnTime() { return dateStr; }
