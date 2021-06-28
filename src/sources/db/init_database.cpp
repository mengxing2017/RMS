#include "src/include/db/init_database.h"
#include "src/include/db/create_table.h"
#include "src/include/db/manage_databese.h"

InitDatabase::InitDatabase() {}

bool InitDatabase::initDb() {
  QString dbDirPath = QCoreApplication::applicationDirPath() + "/../db";
  QString dbPath = dbDirPath + "/data.db";

  // 如果文件不存在，则判断文件夹是否存在，不存在则创建文件夹
  QDir dir;
  if (!dir.exists(dbDirPath)) {
    dir.mkpath(dbDirPath);
  }

  // 判断数据库是否能打开，如果不能打开，则直接退出程序
  QSqlDatabase db = ManageDatabese::connect();
  if (!db.open()) {
    qDebug() << "initDatabase: database open faild ";
    return false;
  }
  QStringList tableName;
  tableName.append("account");
  for (int i = 0; i < tableName.size(); i++) {
    bool bRet = false;
    // 需要遍历每个表是否已创建
    bool isExist = isExistTable(tableName.at(i), db);
    if (isExist) {
      continue;
    }
    CreateTable *creatTable = new CreateTable();
    bRet = creatTable->CreateAccount(db);
    creatTable->~CreateTable();
    if (!bRet) {
      return false;
    }
  }
  //需要验证表是否存在，如果表不存在，则创建表，如果表存在，则直接返回true
  qDebug() << "InitDatabase: create table sussces!";
  return true;
}

bool InitDatabase::isExistTable(QString table, QSqlDatabase db) {
  bool bRet = false;
  QSqlQuery query(db);
  query.exec(
      QString(
          "select count(*) from sqlite_master where type='table' and name='%1'")
          .arg(table));  //关键的判断
  if (query.next()) {
    if (query.value(0).toInt() > 0) {
      bRet = true;
    }
  }
  return bRet;
}
