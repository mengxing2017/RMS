#ifndef DAYSTATISTICS_H
#define DAYSTATISTICS_H

#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QDate>

#include "manage_databese.h"

class DayStatistics
{
public:
    DayStatistics();
    ~DayStatistics();
    void statistics();
    QString returnMoney();

private:
    QString Money;
};

#endif // DAYSTATISTICS_H
