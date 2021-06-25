#ifndef SEAT_INFO_H
#define SEAT_INFO_H

#include <QString>
#include <QSqlQuery>

#include "manage_databese.h"

class SeatInfo
{
public:
    SeatInfo();

    void searchSeatInfo(QStringList *desKIdItem,QStringList *flagItem,int *row);
    bool updateSeatInfo(QString time,QString idTable );
};

#endif // SEAT_INFO_H
