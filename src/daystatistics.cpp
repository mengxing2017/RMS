#include "daystatistics.h"

DayStatistics::DayStatistics()
{
    m_db= QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("data.db");
    if (!m_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
}

DayStatistics::~DayStatistics()
{

}

void DayStatistics::statistics()
{
    //获取系统时间
   QDate date=QDate::currentDate();
   QString dateStr=date.toString("yyyy-MM-dd");
   QSqlQuery query(m_db);
   query.exec("select *from billinfo where datetime like '"+dateStr+"%'");
   double sumMoney=0;
   while(query.next())
   {
       int number= query.value(3).toInt();
       double price=query.value(4).toDouble();
       sumMoney+=number*price;
   }
   Money=QString::number(sumMoney);
}

QString DayStatistics::returnMoney()
{
    return Money;
}
