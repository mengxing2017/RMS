#include "order_dishes.h"

OrderDishes::OrderDishes() {}

void OrderDishes::UpdateDishes(QString tableId, QAbstractItemModel *rightModel,
                               QAbstractItemModel *leftModel) {
  QSqlDatabase db = ManageDatabase::connect();
  if (ManageDatabase::openDb(db)) {
    //此处将数据存入数据库
    QSqlQuery query(db);
    query.prepare("delete from BillInfo where TableID ='" + tableId + "'");
    if (query.exec()) {
      qDebug() << "test query";
    }

    int row = 0;
    QString time = query.value(3).toString();
    while (50 > row) {
      QSqlQuery query(db);
      query.prepare(
          "INSERT INTO BillInfo (TableID,FoodName,amount,expense,datetime)"
          "VALUES (:deskid, :foodname, :foodcount,:price,:time)");
      QModelIndex indexfoodName = rightModel->index(row, 0);
      QModelIndex indexfoodPrice = rightModel->index(row, 1);
      QString tempfoodname = rightModel->data(indexfoodName).toString();
      if (tempfoodname == "") break;
      QString tempfoodNumber = rightModel->data(indexfoodPrice).toString();
      QString tempfoodPrice = "";
      int i = 0;
      while (1) {
        qDebug() << "test";

        QModelIndex leftfoodName = leftModel->index(i, 0);
        if (leftModel->data(leftfoodName).toString() == tempfoodname) {
          QModelIndex leftfoodprice = leftModel->index(i, 1);
          tempfoodPrice = leftModel->data(leftfoodprice).toString();
          break;
        }
        i++;
      }
      query.bindValue(":deskid", tableId);
      query.bindValue(":foodname", tempfoodname);
      query.bindValue(":foodcount", tempfoodNumber);
      query.bindValue(":price", tempfoodPrice);
      query.bindValue(":time", time);
      row++;
      qDebug() << "test2" << row;
      if (query.exec()) {
        qDebug() << "存储成功";
      } else {
        qDebug() << "存储失败";
      }
    }
    ManageDatabase::closeDb(db);
  }
}

QStringList OrderDishes::searchSomeoneTable() {
  QStringList item;
  QSqlDatabase db = ManageDatabase::connect();
  if (ManageDatabase::openDb(db)) {
    QSqlQuery query(db);

    query.exec("select *from TableInfo ");
    item.append("");
    while (query.next()) {
      if (query.value(2).toString() == "有人") {
        QString foodName = query.value(1).toString();
        item.append(foodName);
      }
    }
    ManageDatabase::closeDb(db);
  }
  return item;
}

void OrderDishes::chooseDishes(const QString &arg1, QStringList *foodNameItem,
                               QStringList *foodPriceItem) {
  QSqlDatabase db = ManageDatabase::connect();
  if (ManageDatabase::openDb(db)) {
    QSqlQuery query(db);
    query.exec("select *from tableinfo where TableID ='" + arg1 + "'");
    query.first();
    QString time = query.value(3).toString();
    query.exec("select *from BillInfo where TableID ='" + arg1 +
               "'and datetime='" + time + "'");
    while (query.next()) {
      QString foodName = query.value(2).toString();
      qDebug() << query.value(2).toDouble();
      QString foodPrice = query.value(3).toString();
      foodNameItem->append(foodName);
      foodPriceItem->append(foodPrice);
    }
    if (query.exec()) qDebug() << "test combobox";
    ManageDatabase::closeDb(db);
  }
}
