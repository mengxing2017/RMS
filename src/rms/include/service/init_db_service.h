#ifndef INIT_DATABASE_H
#define INIT_DATABASE_H

#include <QCoreApplication>
#include <QDir>
#include <QFile>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include "log.h"
#include "log4qt/logger.h"

/**
 * @brief The InitDatabase class
 * 初始化数据库类
 */
class InitDbService {
 public:
  InitDbService();
  bool initDb();
  bool isExistTable(QSqlDatabase db, const QString tableName);
  bool createTable(QSqlDatabase db);

 private:
  Log4Qt::Logger *log;
};

#endif  // INIT_DATABASE_H
