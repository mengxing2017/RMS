#include <QApplication>
#include <QDir>
#include <QFile>
#include <QStandardPaths>
#include <QtDebug>

#include "mainwindow.h"
#include "service/init_db_service.h"
#include "slot/login_slot.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  InitDbService *initDb = new InitDbService();
  if (!initDb->initDb()) {
    initDb->~InitDbService();
    return -1;
  }
  initDb->~InitDbService();

  LoginSlot *loginSlot = new LoginSlot();
  loginSlot->show();
  //  loginSlot->show();

  //  MainWindow w;
  //  w.show();
  //  return a.exec();
  return 0;
}
