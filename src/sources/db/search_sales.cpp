#include "src/include/db/search_sales.h"

SearchSales::SearchSales() {}

QString SearchSales::searchDailySales(QString year, QString month,
                                      QString day) {
  double sumMoney = 0;
  QSqlDatabase db = ManageDatabese::connect();
  if (ManageDatabese::openDb(db)) {
    QSqlQuery query(db);
    query.exec("select *from billinfo where datetime like'" + year + "-" +
               month + "-" + day + "%'");
    while (query.next()) {
      int number = query.value(3).toInt();
      double foodPrice = query.value(4).toDouble();
      sumMoney += number * foodPrice;
    }
    ManageDatabese::closeDb(db);
  }

  return QString::number(sumMoney);
}

QString SearchSales::searchMonthSales(QString year, QString month) {
  double sumMoney = 0;
  QSqlDatabase db = ManageDatabese::connect();
  if (ManageDatabese::openDb(db)) {
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
    ManageDatabese::closeDb(db);
  }

  return QString::number(sumMoney);
}
