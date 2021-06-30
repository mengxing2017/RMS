#include "src/rms/include/db/create_table.h"
#include "src/rms/include/db/excute_sql_file.h"

CreateTable::CreateTable() {}

bool CreateTable::CreateAccount(QSqlDatabase db) {
  //  QFile file(":/res/db/create_table/create_account_table.sql");
  QFile *file = new QFile(":/res/db/create_table/create_account_table.sql");
  if (!file->exists()) {
    qDebug() << "sql file not exists";
    file->~QFile();
    return false;
  }
  ExcuteSqlFile *excute = new ExcuteSqlFile();
  if (0 == excute->excute(file, db)) {
    qDebug() << "excute sql faild";
    return true;
  };
  file->~QFile();
  qDebug() << "create account table faild";
  return false;
}
