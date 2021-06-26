#include "src/include/dialog/foodinfo_dialog.h"
#include "src/include/ui/ui_foodinfo_dialog.h"

FoodInfo_Dialog::FoodInfo_Dialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::FoodInfo_Dialog) {
  ui->setupUi(this);
  this->setWindowTitle("菜品性能系管理");

  ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
  ui->tableWidget->setAlternatingRowColors(true);
  ui->tableWidget->setColumnCount(2);
  ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
  QStringList list;
  list << "菜名"
       << "菜价";
  ui->tableWidget->setHorizontalHeaderLabels(list);
  ui->tableWidget->setColumnWidth(0, 150);
  ui->tableWidget->setColumnWidth(1, 100);

  QFont font = ui->tableWidget->horizontalHeader()->font();
  font.setBold(true);
  ui->tableWidget->horizontalHeader()->setFont(font);

  QHeaderView *header = ui->tableWidget->verticalHeader();
  header->setHidden(true);

  ui->tableWidget->setStyleSheet("selection-background-color:lightblue;");
  ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

  foodInfo= new FoodInfo();

  initFood();
}

FoodInfo_Dialog::~FoodInfo_Dialog() { delete ui; }

void FoodInfo_Dialog::on_deleteFood_Button_clicked() {
  int row = ui->tableWidget->currentIndex().row();
  QAbstractItemModel *model = ui->tableWidget->model();
  QModelIndex indexfood = model->index(row, 0);
  foodInfo->deleteFoodInfo(model->data(indexfood).toString());

  initFood();
}

void FoodInfo_Dialog::on_addFood_Button_clicked() {
  //插入菜品
  QString foodName = ui->foodName_lineEdit->text();
  QString foodPrice = ui->foodPrice_lineEdit->text();
  if ("" != foodName && "" != foodPrice) {
    foodInfo->insertFoodInfo(foodName,foodPrice);
    initFood();
  }
  ui->foodName_lineEdit->clear();
  ui->foodPrice_lineEdit->clear();
}

void FoodInfo_Dialog::initFood() {
    QStringList *foodNameItem=new QStringList();
    QStringList *foodPriceItem=new QStringList();
    int row=0;
    foodInfo->searchFoodInfo(foodNameItem,foodPriceItem,&row);
    ui->tableWidget->setRowCount(row);

    for(int i=0;i<foodNameItem->size();i++){
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(foodNameItem->at(i)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(foodPriceItem->at(i)));
    }
}
