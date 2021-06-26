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

bool UserManagement::login(QString username,QString password)
{
    bool flag=false;
    ManageDatabese *manageDb=new ManageDatabese();
    QSqlDatabase db=manageDb->OpenDb();
    QSqlQuery query(db);
    query.exec("select *from LoginInfo");
    while (query.next()) {
      QString user = query.value(1).toString();
      QString pass = query.value(2).toString();
      if (username == user && username == pass) {
        flag = true;
      }
    }
    return flag;
}
