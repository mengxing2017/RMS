#include "src/include/db/manage_databese.h"
#include "src/include/db/create_table.h"

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
  if (!db.open()) {
    qDebug() << "database open failed";
    return false;
  }
  qDebug() << "create database";
  CreateTable *creatTable = new CreateTable();
  bool bl = creatTable->CreateAccount(db);
  creatTable->~CreateTable();
  return bl;
}
