#ifndef DAYSTATISTICS_H
#define DAYSTATISTICS_H

#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QDate>


class DayStatistics
{
public:
    DayStatistics();
    ~DayStatistics();
    void statistics();
    QString returnMoney();

private:
    QString Money;
    QSqlDatabase m_db;
};

#endif // DAYSTATISTICS_H
