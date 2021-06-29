#ifndef INIT_DATABASE_H
#define INIT_DATABASE_H

#include <QCoreApplication>
#include <QDir>
#include <QFile>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>

/**
 * @brief The InitDatabase class
 * 初始化数据库类
 */
class InitDatabase {
 public:
  InitDatabase();
  bool initDb();
  bool isExistTable(QString table, QSqlDatabase db);
};

#endif  // INIT_DATABASE_H
