#ifndef UPDATE_DISHES_H
#define UPDATE_DISHES_H

#include <QAbstractItemModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtDebug>

#include "manage_databese.h"

/**
 * @brief The OrderDishes class
 * 点菜类
 */
class OrderDishes {
 public:
  OrderDishes();

  void UpdateDishes(QString tableId, QAbstractItemModel *model,
                    QAbstractItemModel *leftmodel);

  QStringList searchSomeoneTable();
  void chooseDishes(const QString &arg1, QStringList *foodNameItem,
                    QStringList *foodPriceItem);
};

#endif  // UPDATE_DISHES_H
