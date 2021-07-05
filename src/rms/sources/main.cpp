#include <QApplication>
#include <QDir>
#include <QFile>
#include <QStandardPaths>
#include <QtDebug>

#include "db/init_database.h"
#include "mainwindow.h"
#include "slot/login_slot.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  InitDatabase *initDb = new InitDatabase();
  if (!initDb->initDb()) {
    initDb->~InitDatabase();
    return -1;
  }
  initDb->~InitDatabase();

  LoginSlot *loginSlot = new LoginSlot();
  loginSlot->show();
  //  loginSlot->show();

  //  MainWindow w;
  //  w.show();
  //  return a.exec();
  return 0;
}
