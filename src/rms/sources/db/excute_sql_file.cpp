#include "db/excute_sql_file.h"
#include "db/manage_database.h"

ExcuteSqlFile::ExcuteSqlFile() {}

int ExcuteSqlFile::excute(QFile *file, QSqlDatabase db) {
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
  qDebug() << sqlData;
  QSqlQuery query(db);
  QStringList qstrlist_sql = sqlData.split(";");
  for (int i = 0; i < qstrlist_sql.size() - 1; i++) {
    QString qstr_sql_part = qstrlist_sql.at(i).toUtf8();
    qDebug() << qstr_sql_part;
    bool success = query.exec(
        "CREATE TABLE students ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT, "
        "name VARCHAR(40) NOT NULL, "
        "score INTEGER NOT NULL, "
        "grade VARCHAR(40) NOT NULL)");
    if (!success) {
      QSqlError lastError = query.lastError();
      QString err = lastError.driverText();
      qDebug() << err;
      iRet = -1;
      break;
    }
  }

  return iRet;
}
