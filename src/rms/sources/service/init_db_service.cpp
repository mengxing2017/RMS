#include "service/init_db_service.h"
#include "db/manage_database.h"
#include "db/search_table_db.h"
#include "service/sql_file_service.h"

InitDbService::InitDbService() { log = Log::createLog()->getLogger(); }

bool InitDbService::initDb() {
  QString dbDirPath = QCoreApplication::applicationDirPath() + "/../db";
  QString dbPath = dbDirPath + "/data.db";

  // 如果文件不存在，则判断文件夹是否存在，不存在则创建文件夹
  QDir dbDir;
  if (!dbDir.exists(dbDirPath)) {
    dbDir.mkpath(dbDirPath);
  }

  // 判断数据库是否能打开，如果不能打开，则直接退出程序
  QSqlDatabase db = ManageDatabase::connect();
  if (!db.open()) {
    log->error("initDatabase: database open faild!");
    return false;
  }

  // 创建表
  return createTable(db);
}

// 判断表存在，如果表已经存在，则返回true，不存在则返回false
bool InitDbService::isExistTable(QSqlDatabase db, const QString tableName) {
  QSqlQuery query(db);
  SearchTableDb *search = new SearchTableDb();
  bool bRet = search->isExistTable(query, tableName);
  search->~SearchTableDb();
  return bRet;
}

// 创建表
bool InitDbService::createTable(QSqlDatabase db) {
  QDir sqlDir(":/res/db/create");
  if (!sqlDir.exists()) {
    log->error("database sql file not exist!");
    return false;
  }

  QStringList tableNameList;
  QFileInfoList fileList = sqlDir.entryInfoList();
  for (int i = 0; i < fileList.size(); i++) {
    QFileInfo fileInfo = fileList.at(i);
    if (fileInfo.fileName().compare(".") == 0 ||
        fileInfo.fileName().compare("..") == 0 || fileInfo.isDir()) {
      i++;
      continue;
    }
    tableNameList.append(fileInfo.filePath());
  }

  for (int i = 0; i < tableNameList.size(); i++) {
    QFile file(tableNameList.at(i));
    if (!isExistTable(db, file.fileName())) {
      continue;
    }
    SqlFileService *excute = new SqlFileService();
    if (excute->excute(db, &file)) {
      log->info(QString("create '%1' table sussces!").arg(file.fileName()));
    } else {
      log->warn(QString("'%1' create failed").arg(file.fileName()));
    }
  }
  return true;
}

// 插入数据
