#ifndef SEARCHTABLEDB_H
#define SEARCHTABLEDB_H

#include <QSqlQuery>
#include <QVariant>

class SearchTableDb {
 public:
  SearchTableDb();
  bool isExistTable(QSqlQuery query, const QString tableName);
};

#endif  // SEARCHTABLEDB_H
