#ifndef SEARCH_SALES_H
#define SEARCH_SALES_H

#include <QString>
#include "manage_databese.h"
#include <QSqlQuery>

class SearchSales
{
public:
    SearchSales();

    QString searchDailySales(QString year,QString month,QString day );
    QString searchMonthSales(QString year,QString month);

};

#endif // SEARCH_SALES_H
