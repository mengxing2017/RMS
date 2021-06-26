#include "src/include/db/seat_info.h"

SeatInfo::SeatInfo()
{

}

void SeatInfo::searchSeatInfo(QStringList *desKIdItem,QStringList *flagItem,int *row)
{
    ManageDatabese *manageDb=new ManageDatabese();
    QSqlDatabase db=manageDb->OpenDb();
    QSqlQuery query(db);

    query.exec("select *from TableInfo");
    query.last();
    *row = query.value(0).toInt();
    query.first();
    query.previous();
    while (query.next()) {
      QString deskId = query.value(1).toString();
      qDebug() << query.value(2).toString();
      QString flag = query.value(2).toString();
      desKIdItem->append(deskId);
      flagItem->append(flag);
    }
    manageDb->closeDb(db);
}

QStringList SeatInfo::searchSomeSeat()
{
    QStringList item;
    item.append("");
    ManageDatabese *manageDb=new ManageDatabese();
    QSqlDatabase db=manageDb->OpenDb();
    QSqlQuery query(db);

    query.exec("select *from TableInfo where  isuse='有人'");

    while (query.next()) {
      if (query.value(2).toString() == "有人") {
        QString foodName = query.value(1).toString();
        item.append(foodName);
      }
    }
    return item;
}

bool SeatInfo::updateSeatInfo(QString time, QString idTable,QString isSomeone)
{
    ManageDatabese *manageDb=new ManageDatabese();
    QSqlDatabase db=manageDb->OpenDb();
    QSqlQuery query(db);
    bool bl= query.exec("update TableInfo set isUse = "+isSomeone+",time='" + time +
                      "'   where TableID ='" + idTable + "'");
    manageDb->closeDb(db);
    return bl;
}
