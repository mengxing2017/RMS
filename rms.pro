#-------------------------------------------------
#
# Project created by QtCreator 2016-07-14T07:09:29
#
#-------------------------------------------------
include(rms/src/config.pri)

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

PROJECT_ROOT = $$PWD
BUILD_DIST = $$PROJECT_ROOT/bin
APP_TARGET = rms

TARGET = $${APP_TARGET}
TEMPLATE = app

DESTDIR = $${BUILD_DIST}
MOC_DIR = $${PROJECT_ROOT}/compile/moc
OBJECTS_DIR = $${PROJECT_ROOT}/compile/obj
RCC_DIR = $${PROJECT_ROOT}/compile/rcc
UI_DIR = $${PROJECT_ROOT}/compile/ui

LIBS += -L$${PROJECT_ROOT}/lib/sqlite3 -lqsqlite

RESOURCES += \
    res.qrc

CONFIG += c++17

