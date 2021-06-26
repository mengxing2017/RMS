#ifndef USER_MANAGEMENT_H
#define USER_MANAGEMENT_H

#include <QSqlQuery>

#include "manage_databese.h"

class UserManagement
{
public:
    UserManagement();

    bool registerUser(QString name,QString password,QString jurisdiction);

    bool login(QString username,QString password);
};

#endif // USER_MANAGEMENT_H
