#include "src/include/db/manage_databese.h"

ManageDatabese::ManageDatabese()
{

}

QSqlDatabase ManageDatabese::OpenDb()
{
    //数据库初始化并连接
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("data.db");
    if (!db.open()) {
      qDebug() << "Error: connection with database fail";
    } else {
      qDebug() << "Database: connection ok";
    }
    return  db;
}

void ManageDatabese::closeDb(QSqlDatabase db)
{
    db.close();
}

