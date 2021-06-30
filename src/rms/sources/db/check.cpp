#include "db/check.h"

Check::Check() {}

QString Check::checkOut(const QString &arg1, QStringList *foodNameList,
                        QStringList *foodPriceList, QStringList *numberList) {
  double sumMoney = 0;
  QSqlDatabase db = ManageDatabase::connect();
  if (ManageDatabase::openDb(db)) {
    QSqlQuery query(db);
    query.exec("select *from TableInfo where  tableid='" + arg1 + "'");
    qDebug() << query.exec();
    query.first();
    QString time = query.value(3).toString();
    query.exec("select *from  billinfo where  tableid='" + arg1 +
               "' and datetime='" + time + "'");

    while (query.next()) {
      QString foodName = query.value(2).toString();
      bool ok;
      int number = query.value(3).toInt(&ok);
      qDebug() << number;
      double price = query.value(4).toDouble(&ok);
      qDebug() << price;

      foodNameList->append(foodName);
      foodPriceList->append(QString::number(price));
      numberList->append(QString::number(number));
      sumMoney += number * price;

      ManageDatabase::closeDb(db);
    }
  }

  return QString::number(sumMoney);
}
