#include "sales.h"

Sales::Sales() {}

QString Sales::searchDailySales(QString year, QString month, QString day) {
  double sumMoney = 0;
  QSqlDatabase db = ManageDatabase::connect();
  if (ManageDatabase::openDb(db)) {
    QSqlQuery query(db);
    query.exec("select *from billinfo where datetime like'" + year + "-" +
               month + "-" + day + "%'");
    while (query.next()) {
      int number = query.value(3).toInt();
      double foodPrice = query.value(4).toDouble();
      sumMoney += number * foodPrice;
    }
    ManageDatabase::closeDb(db);
  }

  return QString::number(sumMoney);
}

QString Sales::searchMonthSales(QString year, QString month) {
  double sumMoney = 0;
  QSqlDatabase db = ManageDatabase::connect();
  if (ManageDatabase::openDb(db)) {
    QSqlQuery query(db);
    query.exec("select *from billinfo where datetime like'" + year + "-" +
               month + "-%'");
    //    qDebug()<<query.exec();

    qDebug() << query.next();
    while (query.next()) {
      int number = query.value(3).toInt();
      double foodPrice = query.value(4).toDouble();
      sumMoney += number * foodPrice;
      qDebug() << sumMoney;
    }
    ManageDatabase::closeDb(db);
  }

  return QString::number(sumMoney);
}
