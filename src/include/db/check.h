#ifndef CHECK_H
#define CHECK_H

#include <QSqlQuery>
#include <QString>
#include <QStringList>

#include "manage_databese.h"

/**
 * @brief The Check class
 * 结账类
 */
class Check {
 public:
  Check();

  QString checkOut(const QString &arg1, QStringList *foodNameList,
                   QStringList *foodPriceList, QStringList *numberList);
};
#endif  // CHECK_H
