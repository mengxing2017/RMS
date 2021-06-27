#ifndef CREATE_TABLE_H
#define CREATE_TABLE_H

#include <QDebug>
#include <QFile>
#include <QSqlDatabase>

class CreateTable {
 public:
  CreateTable();
  bool CreateAccount(QSqlDatabase db);
};

#endif  // CREATE_TABLE_H
