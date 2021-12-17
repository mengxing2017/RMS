#include <QApplication>
#include <QDir>
#include <QFile>
#include <QStandardPaths>
#include <QTextCodec>
#include <QtDebug>

#include "mainwindow.h"
#include "service/init_db_service.h"
#include "slot/login_slot.h"

int main(int argc, char *argv[]) {
  QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf8"));

  QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf8"));

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
