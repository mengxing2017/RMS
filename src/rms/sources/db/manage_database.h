#ifndef MANAGE_DATABASE_H
#define MANAGE_DATABASE_H

#include <QCoreApplication>
#include <QDebug>
#include <QSqlDatabase>

/**
 * @brief The ManageDatabase class
 * 管理数据库类
 */
class ManageDatabase {
 public:
  ManageDatabase();
  static QSqlDatabase connect();
  static bool openDb(QSqlDatabase db);
  static void closeDb(QSqlDatabase db);
};

#endif  // MANAGE_DATABASE_H
