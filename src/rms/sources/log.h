#ifndef LOG_H
#define LOG_H

#include <QApplication>
#include <QDir>
#include <QProcessEnvironment>
#include <QString>
#include "log4qt/propertyconfigurator.h"

class Log {
 private:
  Log4Qt::Logger* logger;
  void initLogger();

 public:
  Log();
  static Log* createLog();
  Log4Qt::Logger* getLogger();
};

#endif  // LOG_H
