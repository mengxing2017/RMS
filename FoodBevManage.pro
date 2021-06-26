#-------------------------------------------------
#
# Project created by QtCreator 2016-07-14T07:09:29
#
#-------------------------------------------------
include(config.pri)

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = $${APP_TARGET}
TEMPLATE = app

DESTDIR = $${BUILD_DIST}
MOC_DIR = $${PROJECT_ROOT}/compile/moc
OBJECTS_DIR = $${PROJECT_ROOT}/compile/obj
RCC_DIR = $${PROJECT_ROOT}/compile/rcc
UI_DIR = $${PROJECT_ROOT}/compile/ui

LIBS += -L./lib/sqlite3 -lqsqlite

RESOURCES += \
    res.qrc

CONFIG += c++17

HEADERS += \
    src/include/main/mainwindow.h \
    src/include/dialog/dayincomequery_dialog.h \
    src/include/dialog/add_reduce_dialog.h \
    src/include/dialog/staffregister_dialog.h \
    src/include/dialog/varietymenu_dialog.h \
    src/include/dialog/dishescount_dialog.h \
    src/include/dialog/foodinfo_dialog.h \
    src/include/dialog/login_dialog.h \
    src/include/dialog/monthincomequery_dialog.h \
    src/include/dialog/selectseat_dialog.h \
    src/include/dialog/stockqquery_dialog.h \
    src/include/dialog/check_out_dialog.h \
    src/include/dialog/orderdishes_dialog.h \
    src/include/ui/ui_stockquery_dialog.h \
    src/include/ui/ui_mainwindow.h \
    src/include/ui/ui_foodinfo_dialog.h \
    src/include/ui/ui_add_reduce_dialog.h \
    src/include/ui/ui_orderdishes_dialog.h \
    src/include/ui/ui_monthincomequery_dialog.h \
    src/include/ui/ui_selectseat_dialog.h \
    src/include/ui/ui_staffregister_dialog.h \
    src/include/ui/ui_login_dialog.h \
    src/include/ui/ui_check_out_dialog.h \
    src/include/ui/ui_dayincomequery_dialog.h \
    src/include/ui/ui_dishescount_dialog.h \
    src/include/ui/ui_varietymenu_dialog.h \
    src/include/db/day_statistics.h \
    src/include/db/manage_databese.h\
    src/include/db/order_dishes.h \
    src/include/db/search_sales.h \
    src/include/db/food_info.h \
    src/include/db/user_management.h \
    src/include/db/seat_info.h \
    src/include/db/check.h

SOURCES += \
    src/sources/main/main.cpp \
    src/sources/main/mainwindow.cpp \
    src/sources/dialog/selectseat_dialog.cpp \
    src/sources/dialog/login_dialog.cpp \
    src/sources/dialog/varietymenu_dialog.cpp \
    src/sources/dialog/stockqquery_dialog.cpp \
    src/sources/dialog/foodinfo_dialog.cpp \
    src/sources/dialog/add_reduce_dialog.cpp \
    src/sources/dialog/dayincomequery_dialog.cpp \
    src/sources/dialog/check_out_dialog.cpp \
    src/sources/dialog/orderdishes_dialog.cpp \
    src/sources/dialog/dishescount_dialog.cpp \
    src/sources/dialog/staffregister_dialog.cpp \
    src/sources/dialog/monthincomequery_dialog.cpp \
    src/sources/ui/ui_dishescount_dialog.cpp \
    src/sources/ui/ui_staffregister_dialog.cpp \
    src/sources/ui/ui_selectseat_dialog.cpp \
    src/sources/ui/ui_add_reduce_dialog.cpp \
    src/sources/ui/ui_dayincomequery_dialog.cpp \
    src/sources/ui/ui_login_dialog.cpp \
    src/sources/ui/ui_mainwindow.cpp \
    src/sources/ui/ui_varietymenu_dialog.cpp \
    src/sources/ui/ui_check_out_dialog.cpp \
    src/sources/ui/ui_monthincomequery_dialog.cpp \
    src/sources/ui/ui_orderdishes_dialog.cpp \
    src/sources/ui/ui_foodinfo_dialog.cpp \
    src/sources/ui/ui_stockquery_dialog.cpp \
    src/sources/db/day_statistics.cpp \
    src/sources/db/manage_databese.cpp \
    src/sources/db/order_dishes.cpp \
    src/sources/db/search_sales.cpp \
    src/sources/db/food_info.cpp \
    src/sources/db/user_management.cpp \
    src/sources/db/seat_info.cpp \
    src/sources/db/check.cpp

