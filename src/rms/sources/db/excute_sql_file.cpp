#include "db/excute_sql_file.h"
#include "db/manage_database.h"
#include "log.h"
#include "log4qt/logger.h"

ExcuteSqlFile::ExcuteSqlFile() {}

int ExcuteSqlFile::excute(QFile *file, QSqlDatabase db) {
  Log4Qt::Logger *log = Log::createLog()->getLogger();
  int iRet = 0;
  if (!file->exists()) {
    return -1;
  }
  if (!file->open(QIODevice::ReadOnly | QIODevice::Text)) {
    return -1;
  }
  if (db.isOpen()) {
    qDebug() << "excuteSqlFile: open database....";
    db.open();
  }
  QTextStream in(file);
  in.setCodec("UTF-8");
  QString sqlData = in.readAll();
  QSqlQuery query(db);
  QStringList qstrlist_sql = sqlData.split(";");
  log->debug(QString::number(qstrlist_sql.size()));
  for (int i = 0; i < qstrlist_sql.size() - 1; i++) {
    QString qstr_sql_part = qstrlist_sql.at(i).toUtf8();
    log->debug(qstr_sql_part);
    bool success = query.exec(qstr_sql_part);
    if (!success) {
      QSqlError lastError = query.lastError();
      QString err = lastError.driverText();
      log->error(err);
      iRet = -1;
      break;
    }
    log->debug("创建数据库表成功！");
  }

  return iRet;
}
