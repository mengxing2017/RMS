#include "sql_file_service.h"
#include "../db/manage_database.h"
#include "../log.h"
#include "log4qt/logger.h"

SqlFileService::SqlFileService() {}

bool SqlFileService::excute(QSqlDatabase db, QFile *file) {
  Log4Qt::Logger *log = Log::createLog()->getLogger();

  if (!file->exists()) {
    log->error("sql file not exist！");
    return false;
  }
  if (!file->open(QIODevice::ReadOnly | QIODevice::Text)) {
    log->error("sql file open failed！");
    return false;
  }
  if (db.isOpen()) {
    db.open();
  }

  QTextStream in(file);
  in.setCodec("UTF-8");
  QString sqlData = in.readAll();
  QSqlQuery query(db);
  QStringList qstrlist_sql = sqlData.split(";");

  QString qstr_sql_part = qstrlist_sql.at(0).toUtf8();
  log->debug(qstr_sql_part);
  bool success = query.exec(qstr_sql_part);
  if (!success) {
    QSqlError lastError = query.lastError();
    QString err = lastError.driverText();
    log->error(err);
    return false;
  }

  return true;
}
