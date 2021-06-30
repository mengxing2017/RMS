#-------------------------------------------------
#
# Project created by QtCreator 2016-07-14T07:09:29
#
#-------------------------------------------------
include(src/rms/config.pri)

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

PROJECT_ROOT = $$PWD

APP_TARGET = rms
TARGET = $${APP_TARGET}
TEMPLATE = app
DESTDIR = $$PROJECT_ROOT/bin

BUILD_DIST = $$PROJECT_ROOT/build
MOC_DIR = $${BUILD_DIST}/moc
OBJECTS_DIR = $${BUILD_DIST}/obj
RCC_DIR = $${BUILD_DIST}/rcc
UI_DIR = $${BUILD_DIST}/ui

LIBS += -L$${PROJECT_ROOT}/lib/sqlite3 -lqsqlite

RESOURCES += \
    res.qrc

CONFIG += c++17

