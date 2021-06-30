#include "dialog/add_reduce_dialog.h"
#include "db/food_info.h"
#include "dialog/dishescount_dialog.h"
#include "ui/ui_add_reduce_dialog.h"

Add_Reduce_Dialog::Add_Reduce_Dialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::Add_Reduce_Dialog) {
  ui->setupUi(this);
  count = 0;
  this->setWindowTitle("加减菜");
  // foodtable
  initWindowFoodTable();

  //初始化数据
  initCombox();
  initFoodTable();

  // isfood_table
  initWindowIsAddTable();
  //    ui->isAddFood_tableWidget

  dishes = new OrderDishes();
}

Add_Reduce_Dialog::~Add_Reduce_Dialog() { delete ui; }

void Add_Reduce_Dialog::on_okButton_clicked() {
  QString tableId = ui->comboBox->currentText();
  QAbstractItemModel *rightModel = ui->isAddFood_tableWidget->model();
  QAbstractItemModel *leftModel = ui->food_tableWidget->model();
  dishes->UpdateDishes(tableId, rightModel, leftModel);
  qDebug() << tableId;

  this->close();
}

void Add_Reduce_Dialog::on_cancelButton_clicked() { this->close(); }

void Add_Reduce_Dialog::on_addButton_clicked() {
  if ("" != ui->comboBox->currentText()) {
    int row = ui->food_tableWidget->currentIndex().row();
    QAbstractItemModel *model = ui->food_tableWidget->model();
    QModelIndex indexfood = model->index(row, 0);
    QString tempfood = model->data(indexfood).toString();
    if ("" != tempfood) {
      //            DishesCountDialog disheCount;
      DishesCountDialog *disheCount = new DishesCountDialog;
      //            if(disheCount)
      disheCount->setModal(true);
      disheCount->show();
      disheCount->exec();
      if (disheCount->returnflag()) {
        QString numberfood = disheCount->returnCount();
        ui->isAddFood_tableWidget->setItem(count, 0,
                                           new QTableWidgetItem(tempfood));
        ui->isAddFood_tableWidget->setItem(count, 1,
                                           new QTableWidgetItem(numberfood));
        count++;
      }
      delete disheCount;
    } else {
      QMessageBox::information(this, "温馨提示", "请选择菜品");
    }
  } else {
    QMessageBox::information(this, "温馨提示", "请选择桌号");
  }
  return;
}

void Add_Reduce_Dialog::on_deleteButton_clicked() {
  QAbstractItemModel *model = ui->isAddFood_tableWidget->model();
  int curRow = ui->isAddFood_tableWidget->currentIndex().row();
  model->removeRow(curRow);
  count--;
}

void Add_Reduce_Dialog::initFoodTable() {
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

void Add_Reduce_Dialog::initCombox() {
  ui->comboBox->addItems(dishes->searchSomeoneTable());
}

void Add_Reduce_Dialog::initWindowFoodTable() {
  //初始化菜品表
  ui->food_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
  ui->food_tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
  ui->food_tableWidget->setAlternatingRowColors(true);
  ui->food_tableWidget->setColumnCount(2);
  QStringList list;
  list << "菜名"
       << "菜价";
  ui->food_tableWidget->setHorizontalHeaderLabels(list);
  ui->food_tableWidget->setColumnWidth(0, 160);
  ui->food_tableWidget->setColumnWidth(1, 110);
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
}

void Add_Reduce_Dialog::initWindowIsAddTable() {
  //初始化已点的菜
  ui->isAddFood_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
  ui->isAddFood_tableWidget->setSelectionBehavior(
      QAbstractItemView::SelectRows);
  ui->isAddFood_tableWidget->setAlternatingRowColors(true);
  ui->isAddFood_tableWidget->setColumnCount(2);
  QStringList listfood;
  listfood << "菜名"
           << "数量";
  ui->isAddFood_tableWidget->setHorizontalHeaderLabels(listfood);
  ui->isAddFood_tableWidget->setColumnWidth(0, 160);
  ui->isAddFood_tableWidget->setColumnWidth(1, 110);
  //设置列名为加粗
  QFont fontfood = ui->isAddFood_tableWidget->horizontalHeader()->font();
  fontfood.setBold(true);
  ui->isAddFood_tableWidget->horizontalHeader()->setFont(fontfood);
  //去掉第一列标号
  QHeaderView *headerfood = ui->isAddFood_tableWidget->verticalHeader();
  headerfood->setHidden(true);
  //设置选中背景色
  ui->isAddFood_tableWidget->setStyleSheet(
      "selection-background-color:lightblue;");
  ui->isAddFood_tableWidget->setSelectionMode(
      QAbstractItemView::SingleSelection);  //设置为可以选中单个
  ui->isAddFood_tableWidget->setRowCount(50);
}

// void Add_Reduce_Dialog::on_comboBox_currentIndexChanged(const QString &arg1)
//{
//    qDebug()<<"test combobox";
//    ui->isAddFood_tableWidget->clear();
//    QSqlQuery query(m_db);
//    query.exec("select *from BillInfo where TableID ='"+arg1+"'");
//    int i=0;
//    while(query.next())
//    {
//        QString foodName=query.value(2).toString();
//        qDebug()<<query.value(2).toDouble();
//        QString foodPrice=query.value(3).toString();
//        ui->isAddFood_tableWidget->setItem(i,0,new
//        QTableWidgetItem(foodName));
//        ui->isAddFood_tableWidget->setItem(i,1,new
//        QTableWidgetItem(foodPrice));
//        count=++i;
//    }
//    if(query.exec())
//        qDebug()<<"test combobox";

//}

void Add_Reduce_Dialog::on_comboBox_activated(const QString &arg1) {
  ui->isAddFood_tableWidget->clear();

  QStringList *foodNameItem = new QStringList();
  QStringList *foodPriceItem = new QStringList();

  dishes->chooseDishes(arg1, foodNameItem, foodPriceItem);
  for (int i = 0; i < foodNameItem->size(); i++) {
    ui->isAddFood_tableWidget->setItem(
        i, 0, new QTableWidgetItem(foodNameItem->at(i)));
    ui->isAddFood_tableWidget->setItem(
        i, 1, new QTableWidgetItem(foodPriceItem->at(i)));
    count = ++i;
  }
}
