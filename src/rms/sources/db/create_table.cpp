#include "db/create_table.h"
#include "db/excute_sql_file.h"
#include "log.h"
#include "log4qt/logger.h"

CreateTable::CreateTable() {}

bool CreateTable::CreateAccount(QSqlDatabase db) {
  Log4Qt::Logger *log = Log::createLog()->getLogger();

  QFile *file = new QFile(":/res/db/create_table/create_account_table.sql");
  if (!file->exists()) {
    log->error("sql file not exists");
    file->~QFile();
    return false;
  }

  ExcuteSqlFile *excute = new ExcuteSqlFile();
  if (excute->excute(file, db)) {
    file->~QFile();
    log->error("create account table success!");
    excute->~ExcuteSqlFile();
    return true;
  };
  excute->~ExcuteSqlFile();
  file->~QFile();
  log->error("create account table failed!");
  return false;
}
