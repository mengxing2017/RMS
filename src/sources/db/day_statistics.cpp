#include "src/include/db/day_statistics.h"

DayStatistics::DayStatistics()
{

}

DayStatistics::~DayStatistics()
{

}

void DayStatistics::statistics()
{
    //获取系统时间
   QDate date=QDate::currentDate();
   QString dateStr=date.toString("yyyy-MM-dd");
   ManageDatabese *manageDb=new ManageDatabese();
   QSqlDatabase db=manageDb->OpenDb();
   QSqlQuery query(db);
   query.exec("select *from billinfo where datetime like '"+dateStr+"%'");
   double sumMoney=0;
   while(query.next())
   {
       int number= query.value(3).toInt();
       double price=query.value(4).toDouble();
       sumMoney+=number*price;
   }
   Money=QString::number(sumMoney);
   manageDb->closeDb(db);
}

QString DayStatistics::returnMoney()
{
    return Money;
}
