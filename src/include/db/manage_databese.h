#ifndef MANAGE_DATABESE_H
#define MANAGE_DATABESE_H

#define qString DB_NAME="data.db";

#include <QSqlDatabase>
#include <QDebug>

class ManageDatabese
{
public:
    ManageDatabese();
    QSqlDatabase OpenDb();
    void closeDb(QSqlDatabase db);
};

#endif // MANAGE_DATABESE_H
