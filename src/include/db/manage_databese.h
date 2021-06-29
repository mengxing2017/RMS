#ifndef MANAGE_DATABESE_H
#define MANAGE_DATABESE_H

#include <QCoreApplication>
#include <QDebug>
#include <QSqlDatabase>

#include "create_table.h"

/**
 * @brief The ManageDatabese class
 * 管理数据库类
 */
class ManageDatabese {
 public:
  ManageDatabese();
  static QSqlDatabase connect();
  static bool openDb(QSqlDatabase db);
  static void closeDb(QSqlDatabase db);
};

#endif  // MANAGE_DATABESE_H
