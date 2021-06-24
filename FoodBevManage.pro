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
    src/include/main/dayincomequery_dialog.h \
    src/include/main/add_reduce_dialog.h \
    src/include/main/staffregister_dialog.h \
    src/include/main/varietymenudialog.h \
    src/include/main/dishescountdialog.h \
    src/include/main/foodinfo_dialog.h \
    src/include/main/daystatistics.h \
    src/include/main/logindialog.h \
    src/include/main/monthincomequery_dialog.h \
    src/include/main/selectseat_dialog.h \
    src/include/main/stockqquery_dialog.h \
    src/include/main/check_outdialog.h \
    src/include/main/mainwindow.h \
    src/include/main/orderdishesdialog.h \
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
    src/include/ui/ui_varietymenu_dialog.h

SOURCES += \
    src/sources/main/selectseat_dialog.cpp \
    src/sources/main/main.cpp \
    src/sources/main/login_dialog.cpp \
    src/sources/main/mainwindow.cpp \
    src/sources/main/varietymenu_dialog.cpp \
    src/sources/main/stockqquery_dialog.cpp \
    src/sources/main/daystatistics.cpp \
    src/sources/main/foodinfo_dialog.cpp \
    src/sources/main/add_reduce_dialog.cpp \
    src/sources/main/dayincomequery_dialog.cpp \
    src/sources/main/check_out_dialog.cpp \
    src/sources/main/orderdishes_dialog.cpp \
    src/sources/main/dishescount_dialog.cpp \
    src/sources/main/staffregister_dialog.cpp \
    src/sources/main/monthincomequery_dialog.cpp \
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
    src/sources/ui/ui_stockquery_dialog.cpp

