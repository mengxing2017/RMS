#include "db/manage_database.h"

ManageDatabase::ManageDatabase() {}

QSqlDatabase ManageDatabase::connect() {
  QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName(":rms:");
  db.setDatabaseName(QCoreApplication::applicationDirPath() + "/../db/rms.db");
  return db;
}

bool ManageDatabase::openDb(QSqlDatabase db) {
  //数据库初始化并连接
  return db.open();
}

void ManageDatabase::closeDb(QSqlDatabase db) { db.close(); }
