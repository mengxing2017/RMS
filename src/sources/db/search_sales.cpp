#include "src/include/db/search_sales.h"

SearchSales::SearchSales()
{

}

QString SearchSales::searchDailySales(QString year, QString month, QString day)
{
    ManageDatabese *manageDb=new ManageDatabese();
    QSqlDatabase db= manageDb->OpenDb();
    QSqlQuery query(db);
    query.exec("select *from billinfo where datetime like'" + year + "-" + month +
               "-" + day + "%'");
    double sumMoney = 0;
    while (query.next()) {
      int number = query.value(3).toInt();
      double foodPrice = query.value(4).toDouble();
      sumMoney += number * foodPrice;
    }
    manageDb->closeDb(db);
    return QString::number(sumMoney);
}
