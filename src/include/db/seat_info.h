#ifndef SEAT_INFO_H
#define SEAT_INFO_H

#include <QSqlQuery>
#include <QString>

#include "manage_databese.h"

/**
 * @brief The SeatInfo class
 * 座位信息类
 */
class SeatInfo {
 public:
  SeatInfo();

  void searchSeatInfo(QStringList *desKIdItem, QStringList *flagItem, int *row);
  QStringList searchSomeSeat();
  bool updateSeatInfo(QString time, QString idTable, QString isSomeone);
};

#endif  // SEAT_INFO_H
