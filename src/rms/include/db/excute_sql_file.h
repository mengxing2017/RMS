#ifndef EXCUTE_SQL_FILE_H
#define EXCUTE_SQL_FILE_H

#include <QFile>
#include <QSqlError>
#include <QSqlQuery>
#include <QTextStream>

/**
 * @brief The ExcuteSqlFile class
 * 执行sql文件类
 */
class ExcuteSqlFile {
 public:
  ExcuteSqlFile();
  bool excute(QFile *file, QSqlDatabase db);
};

#endif  // EXCUTE_SQL_FILE_H
