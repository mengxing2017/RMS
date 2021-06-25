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
};

#endif // SEARCH_SALES_H
