#include "db/manage_database.h"
#include "db/create_table.h"

ManageDatabase::ManageDatabase() {}

QSqlDatabase ManageDatabase::connect() {
  QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName(":data:");
  db.setDatabaseName(QCoreApplication::applicationDirPath() + "/../db/data.db");
  return db;
}

bool ManageDatabase::openDb(QSqlDatabase db) {
  //数据库初始化并连接
  return db.open();
}

void ManageDatabase::closeDb(QSqlDatabase db) { db.close(); }
