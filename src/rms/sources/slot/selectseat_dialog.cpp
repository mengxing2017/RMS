#include "slot/selectseat_dialog.h"
#include "ui/ui_selectseat_dialog.h"

SelectSeat_Dialog::SelectSeat_Dialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::SelectSeat_Dialog) {
  ui->setupUi(this);
  this->setWindowTitle("请选择座位");
  orderDishes = new OrderDishesDialog;

  idData = "";  //初始化数据
  seat = new SeatInfo();
  initWindow();
  deskInit();
}

SelectSeat_Dialog::~SelectSeat_Dialog() {
  delete orderDishes;
  delete ui;
}

void SelectSeat_Dialog::initWindow() {
  //设置桌号显示
  QBrush myBrush;
  QPalette palette;
  myBrush = QBrush(Qt::red, Qt::DiagCrossPattern);
  palette.setBrush(QPalette::Text, myBrush);
  ui->lineEdit_Id->setEnabled(false);
  ui->lineEdit_Id->setPalette(palette);

  //设置表格显示
  ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
  ui->tableWidget->setSelectionBehavior(
      QAbstractItemView::SelectRows);  //选中整行
  // ui->tableWidget->item(0,0)->setTextAlignment(Qt::AlignHCenter);//选择对齐方式
  ui->tableWidget->setAlternatingRowColors(true);  //设置每行变一色
  ui->tableWidget->setColumnCount(2);
  QStringList list;
  list << "桌号"
       << "空闲状态";
  ui->tableWidget->setHorizontalHeaderLabels(list);
  ui->tableWidget->setColumnWidth(0, 160);
  ui->tableWidget->setColumnWidth(1, 180);
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
}

void SelectSeat_Dialog::on_button_Ok_clicked() {
  if ("有人" == flagId) {
    QMessageBox::information(this, "温馨提示", "此座位有人,请重新选择座位");
    return;
  }
  if (NULL != idData) {
    orderDishes->setModal(true);
    orderDishes->initFoodTable();
    orderDishes->receiverIdData(idData);
    orderDishes->show();
    orderDishes->exec();
    bool isLeisure = orderDishes->returnIsOrder();
    qDebug() << isLeisure;
    //将数据插入数据库
    if (isLeisure) {
      qDebug() << idData;
      QString time = orderDishes->returnTime();
      QString idTable = ui->lineEdit_Id->text();
      qDebug() << idData;
      //数据更新操作
      QString isSomeone = "有人";
      if (seat->updateSeatInfo(time, idTable, isSomeone)) {
        qDebug() << "打开成功";
      }
      deskInit();
    }
    ui->lineEdit_Id->clear();
    return;
  }
  QMessageBox::information(this, "温馨提示", "请选择座位");
}

void SelectSeat_Dialog::on_button_Cancel_clicked() { this->close(); }

void SelectSeat_Dialog::on_tableWidget_clicked(const QModelIndex &index) {
  // index的警告无需关注
  ui->lineEdit_Id->clear();
  int row = ui->tableWidget->currentIndex().row();
  QAbstractItemModel *model = ui->tableWidget->model();
  QModelIndex indextemp = model->index(row, 0);
  QModelIndex indexflag = model->index(row, 1);
  idData = model->data(indextemp).toString();
  flagId = model->data(indexflag).toString();
  ui->lineEdit_Id->setText(idData);
}

void SelectSeat_Dialog::deskInit() {
  QStringList *deskIdItem = new QStringList();
  QStringList *flagItem = new QStringList();
  int row = 0;
  seat->searchSeatInfo(deskIdItem, flagItem, &row);
  ui->tableWidget->setRowCount(row);
  for (int i = 0; i < deskIdItem->size(); i++) {
    ui->tableWidget->setItem(i, 0, new QTableWidgetItem(deskIdItem->at(i)));
    ui->tableWidget->setItem(i, 1, new QTableWidgetItem(flagItem->at(i)));
  }
}

void SelectSeat_Dialog::on_button_Close_clicked() { this->close(); }
