#include <QApplication>
#include <QDir>
#include <QFile>
#include "src/include/main/mainwindow.h"

/**
 * @brief initDb
 * 初始化数据库，如果数据库文件存在，则直接返回，否则创建数据库
 */
void initDb() {
  QString dbDirPath = QCoreApplication::applicationDirPath() + "/../db";
  QString dbPath = dbDirPath + "/data.db";

  // 如果文件已存在，则直接返回
  QFile file;
  if (file.exists(dbPath)) {
    return;
  }

  // 如果文件不存在，则判断文件夹是否存在，不存在则创建文件夹
  QDir dir;
  if (!dir.exists(dbDirPath)) {
    dir.mkpath(dbDirPath);
  }

  //创建数据库并初始化
  if (!ManageDatabese::createDb()) {
    qDebug() << "create database failed";
    return;
  };
}

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  //  MainWindow w;
  //  w.show();
  initDb();
  //  return a.exec();
  return 0;
}
