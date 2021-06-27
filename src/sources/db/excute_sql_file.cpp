#include "src/include/db/excute_sql_file.h"

#include "src/include/db/manage_databese.h"

ExcuteSqlFile::ExcuteSqlFile() {}

int ExcuteSqlFile::excute(QFile *file, QSqlDatabase db) {
  int iRet = 0;
  if (!file->exists()) {
    return -1;
  }
  if (!file->open(QIODevice::ReadOnly | QIODevice::Text)) {
    return -1;
  }
  QTextStream in(file);
  in.setCodec("UTF-8");
  QString sqlData = in.readAll();
  qDebug() << sqlData;
  QSqlQuery query(db);
  QStringList qstrlist_sql = sqlData.split(";");
  for (int i = 0; i < qstrlist_sql.size() - 1; i++) {
    QString qstr_sql_part = qstrlist_sql.at(i).toUtf8();
    qDebug() << qstr_sql_part;
    bool sql_result = query.exec(qstr_sql_part);
    if (!sql_result) {
      QSqlError sql_error = query.lastError();
      iRet = -1;
      break;
    }
  }

  return iRet;
}
