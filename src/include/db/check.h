#ifndef CHECK_H
#define CHECK_H

#include <QString>
#include <QStringList>
#include <QSqlQuery>

#include "manage_databese.h"

class Check
{
public:
    Check();

    QString checkOut(const QString &arg1,QStringList *foodNameList,QStringList *foodPriceList,QStringList *numberList);
};
#endif // CHECK_H
