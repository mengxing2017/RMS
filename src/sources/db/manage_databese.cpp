#include "src/include/db/manage_databese.h"

ManageDatabese::ManageDatabese() {}

QSqlDatabase ManageDatabese::connect() {
  QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName(QCoreApplication::applicationDirPath() + "/../db/data.db");
  return db;
}

bool ManageDatabese::openDb(QSqlDatabase db) {
  //数据库初始化并连接
  return db.open();
}

void ManageDatabese::closeDb(QSqlDatabase db) { db.close(); }

bool ManageDatabese::createDb() {
  QSqlDatabase db = connect();
  if (db.open()) {
  }
  return true;
}
