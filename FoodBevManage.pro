#-------------------------------------------------
#
# Project created by QtCreator 2016-07-14T07:09:29
#
#-------------------------------------------------
include(config.pri)

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FoodBevManage
TEMPLATE = app

RESOURCES += \
    res.qrc

HEADERS += \
    src/dayincomequery_dialog.h \
    src/add_reduce_dialog.h \
    src/staffregister_dialog.h \
    src/varietymenudialog.h \
    src/dishescountdialog.h \
    src/foodinfo_dialog.h \
    src/daystatistics.h \
    src/logindialog.h \
    src/monthincomequery_dialog.h \
    src/selectseat_dialog.h \
    src/stockqquery_dialog.h \
    src/check_outdialog.h \
    src/mainwindow.h \
    src/orderdishesdialog.h \
    src/main/ui_stockquery_dialog.h \
    src/main/ui_mainwindow.h \
    src/main/ui_foodinfo_dialog.h \
    src/main/ui_add_reduce_dialog.h \
    src/main/ui_orderdishes_dialog.h \
    src/main/ui_monthincomequery_dialog.h \
    src/main/ui_selectseat_dialog.h \
    src/main/ui_staffregister_dialog.h \
    src/main/ui_login_dialog.h \
    src/main/ui_check_out_dialog.h \
    src/main/ui_dayincomequery_dialog.h \
    src/main/ui_dishescount_dialog.h \
    src/main/ui_varietymenu_dialog.h

SOURCES += \
    src/selectseat_dialog.cpp \
    src/main.cpp \
    src/login_dialog.cpp \
    src/mainwindow.cpp \
    src/varietymenu_dialog.cpp \
    src/stockqquery_dialog.cpp \
    src/daystatistics.cpp \
    src/foodinfo_dialog.cpp \
    src/add_reduce_dialog.cpp \
    src/dayincomequery_dialog.cpp \
    src/check_out_dialog.cpp \
    src/orderdishes_dialog.cpp \
    src/dishescount_dialog.cpp \
    src/staffregister_dialog.cpp \
    src/monthincomequery_dialog.cpp \
    src/main/ui_dishescount_dialog.cpp \
    src/main/ui_staffregister_dialog.cpp \
    src/main/ui_selectseat_dialog.cpp \
    src/main/ui_add_reduce_dialog.cpp \
    src/main/ui_dayincomequery_dialog.cpp \
    src/main/ui_login_dialog.cpp \
    src/main/ui_mainwindow.cpp \
    src/main/ui_varietymenu_dialog.cpp \
    src/main/ui_check_out_dialog.cpp \
    src/main/ui_monthincomequery_dialog.cpp \
    src/main/ui_orderdishes_dialog.cpp \
    src/main/ui_foodinfo_dialog.cpp \
    src/main/ui_stockquery_dialog.cpp

