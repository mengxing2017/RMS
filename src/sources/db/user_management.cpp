#include "src/include/db/user_management.h"

UserManagement::UserManagement()
{

}

bool UserManagement::registerUser(QString name,QString password,QString jurisdiction )
{
    ManageDatabese *manageDb=new ManageDatabese();
    QSqlDatabase db=manageDb->OpenDb();
    QSqlQuery query(db);
    //        query.exec("select *from billinfo")
    query.prepare("INSERT INTO logininfo (uname,upasswd,power)"
                  "VALUES (:name, :password, :juris)");
    query.bindValue(":name", name);
    query.bindValue(":password", password);
    query.bindValue(":juris", jurisdiction);

    return query.exec();
}
