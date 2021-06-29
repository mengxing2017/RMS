#ifndef DAYSTATISTICS_H
#define DAYSTATISTICS_H

#include <QDate>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>

#include "manage_databese.h"

/**
 * @brief The DayStatistics class
 * 日统计类
 */
class DayStatistics {
 public:
  DayStatistics();
  ~DayStatistics();
  void statistics();
  QString returnMoney();

 private:
  QString Money;
};

#endif  // DAYSTATISTICS_H
