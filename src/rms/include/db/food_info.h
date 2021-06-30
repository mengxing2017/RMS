#ifndef SEARCH_FOOD_INFO_H
#define SEARCH_FOOD_INFO_H

#include <QAbstractItemModel>
#include <QSqlQuery>
#include "manage_databese.h"

/**
 * @brief The FoodInfo class
 * 菜品信息类
 */
class FoodInfo {
 public:
  FoodInfo();

  void insertFoodInfo(QString foodName, QString foodPrice);

  void searchFoodInfo(QStringList *foodNameItem, QStringList *foodPriceItem,
                      int *row);

  void deleteFoodInfo(QString data);
};

#endif  // SEARCH_FOOD_INFO_H
