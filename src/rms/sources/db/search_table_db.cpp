#include "db/search_table_db.h"

SearchTableDb::SearchTableDb() {}

bool SearchTableDb::isExistTable(QSqlQuery query, const QString tableName) {
  bool bRet = false;
  //查询数据
  query.exec(
      QString(
          "select count(*) from sqlite_master where type='table' and name='%1'")
          .arg(tableName));
  //关键的判断
  if (query.next()) {
    if (query.value(0).toInt() > 0) {
      bRet = true;
    }
  }
  return bRet;
}
