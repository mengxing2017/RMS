#ifndef SEARCH_SALES_H
#define SEARCH_SALES_H

#include <QSqlQuery>
#include <QString>
#include "manage_database.h"

/**
 * @brief The SearchSales class
 * 消费类
 */
class Sales {
 public:
  Sales();

  QString searchDailySales(QString year, QString month, QString day);
  QString searchMonthSales(QString year, QString month);
};

#endif  // SEARCH_SALES_H
