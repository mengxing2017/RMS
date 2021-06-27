#ifndef EXCUTE_SQL_FILE_H
#define EXCUTE_SQL_FILE_H

#include <QFile>
#include <QSqlError>
#include <QSqlQuery>
#include <QTextStream>

class ExcuteSqlFile {
 public:
  ExcuteSqlFile();
  int excute(QFile *file, QSqlDatabase db);
};

#endif  // EXCUTE_SQL_FILE_H
