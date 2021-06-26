#ifndef SEARCH_FOOD_INFO_H
#define SEARCH_FOOD_INFO_H

#include <QSqlQuery>
#include <QAbstractItemModel>
#include "manage_databese.h"

class FoodInfo
{
public:
    FoodInfo();

    void insertFoodInfo(QString foodName,QString foodPrice);

    void searchFoodInfo(QStringList *foodNameItem, QStringList *foodPriceItem,int *row);

    void deleteFoodInfo(QString data );
};

#endif // SEARCH_FOOD_INFO_H
