#include "log.h"

#include "QDebug"
#include "log4qt/appender.h"
#include "log4qt/dailyfileappender.h"
#include "log4qt/logger.h"

Log::Log() { initLogger(); }

// 需确认静态成员函数是否只执行一次
Log* Log::createLog() {
  Log* log = new Log();
  return log;
}

Log4Qt::Logger* Log::getLogger() { return logger; }

void Log::initLogger() {
  // 获取应用conf目录
  QString confDir = QCoreApplication::applicationDirPath() + "/../conf";
  Log4Qt::PropertyConfigurator::configure(confDir + "/log4qt.conf");
  logger = Log4Qt::Logger::rootLogger();
}
