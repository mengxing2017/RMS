#ifndef CREATE_TABLE_H
#define CREATE_TABLE_H

#include <QDebug>
#include <QFile>
#include <QSqlDatabase>

/**
 * @brief The CreateTable class
 * 创建表格类
 */
class CreateTable {
 public:
  CreateTable();
  bool CreateAccount(QSqlDatabase db);
};

#endif  // CREATE_TABLE_H
