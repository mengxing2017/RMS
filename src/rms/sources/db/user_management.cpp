#include "user_management.h"

UserManagement::UserManagement() {}

bool UserManagement::registerUser(QString name, QString password,
                                  QString jurisdiction) {
  QSqlDatabase db = ManageDatabase::connect();
  if (ManageDatabase::openDb(db)) {
    QSqlQuery query(db);
    //        query.exec("select *from billinfo")
    query.prepare(
        "INSERT INTO logininfo (uname,upasswd,power)"
        "VALUES (:name, :password, :juris)");
    query.bindValue(":name", name);
    query.bindValue(":password", password);
    query.bindValue(":juris", jurisdiction);
    return query.exec();
  }
  return false;
}

bool UserManagement::login(QString username, QString password) {
  bool flag = false;
  QSqlDatabase db = ManageDatabase::connect();
  if (ManageDatabase::openDb(db)) {
    QSqlQuery query(db);
    query.exec("select *from LoginInfo");
    while (query.next()) {
      QString user = query.value(1).toString();
      QString pass = query.value(2).toString();
      if (username == user && password == pass) {
        flag = true;
      }
    }
  }

  return flag;
}
