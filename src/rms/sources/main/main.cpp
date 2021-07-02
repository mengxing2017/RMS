#include <QApplication>
#include <QDir>
#include <QFile>
#include <QStandardPaths>
#include <QtDebug>

#include "db/init_database.h"
#include "log.h"
#include "log4qt/logger.h"
#include "main/mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  Log4Qt::Logger *logger = Log::createLog()->getLogger();
  logger->debug("debug");

  //  InitDatabase *initDb = new InitDatabase();
  //  if (!initDb->initDb()) {
  //    initDb->~InitDatabase();
  //    return -1;
  //  }
  //  initDb->~InitDatabase();
  //  MainWindow w;
  //  w.show();
  //  return a.exec();
  return 0;
}
