#include "db/food_info.h"

FoodInfo::FoodInfo() {}

void FoodInfo::insertFoodInfo(QString foodName, QString foodPrice) {
  QSqlDatabase db = ManageDatabese::connect();
  if (ManageDatabese::openDb(db)) {
    QSqlQuery query(db);
    query.prepare(
        "INSERT INTO FoodInfo (FoodName,FoodPrice)"
        "VALUES (:foodname, :price)");
    query.bindValue(":foodname", foodName);
    query.bindValue(":price", foodPrice);
    if (query.exec()) qDebug() << "数据库打开";
    ManageDatabese::closeDb(db);
  }
}

void FoodInfo::searchFoodInfo(QStringList *foodNameItem,
                              QStringList *foodPriceItem, int *row) {
  QSqlDatabase db = ManageDatabese::connect();
  if (ManageDatabese::openDb(db)) {
    QSqlQuery query(db);
    query.exec("select *from FoodInfo");
    query.last();
    *row = query.value(0).toInt();
    qDebug() << row;
    query.first();
    query.previous();
    int i = 0;
    while (query.next()) {
      QString foodName = query.value(1).toString();
      qDebug() << query.value(2).toDouble();
      QString foodPrice = query.value(2).toString();
      foodNameItem->append(foodName);
      foodPriceItem->append(foodPrice);
      i++;
    }
    ManageDatabese::closeDb(db);
  }
}

void FoodInfo::deleteFoodInfo(QString data) {
  QSqlDatabase db = ManageDatabese::connect();
  if (ManageDatabese::openDb(db)) {
    QSqlQuery query(db);
    //    char *foodname;
    //    QByteArray tempfoodname=model->data(indexfood).toString().toLatin1();
    //    foodname=tempfoodname.data();
    query.prepare("delete from FoodInfo where FoodName ='" + data + "'");
    if (query.exec()) qDebug() << "test delete";
    ManageDatabese::closeDb(db);
  }
}
