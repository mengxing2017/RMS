#ifndef INIT_DATABASE_H
#define INIT_DATABASE_H

#include <QCoreApplication>
#include <QDir>
#include <QFile>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>

class InitDatabase {
 public:
  InitDatabase();
  bool initDb();
  bool isExistTable(QString table, QSqlDatabase db);
};

#endif  // INIT_DATABASE_H
