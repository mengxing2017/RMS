#-------------------------------------------------
#
# Project created by QtCreator 2016-07-14T07:09:29
#
#-------------------------------------------------

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FoodBevManage
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    orderdishesdialog.cpp \
    dishescountdialog.cpp \
    selectseatdialog.cpp \
    check_outdialog.cpp \
    varietymenudialog.cpp \
    logindialog.cpp \
    add_reduce_dialog.cpp \
    staffregister_dialog.cpp \
    stockqquery_dialog.cpp \
    dayincomequery_dialog.cpp \
    monthincomequery_dialog.cpp \
    foodinfo_dialog.cpp \
    daystatistics.cpp

HEADERS  += mainwindow.h \
    orderdishesdialog.h \
    dishescountdialog.h \
    selectseatdialog.h \
    check_outdialog.h \
    varietymenudialog.h \
    logindialog.h \
    add_reduce_dialog.h \
    staffregister_dialog.h \
    stockqquery_dialog.h \
    dayincomequery_dialog.h \
    monthincomequery_dialog.h \
    foodinfo_dialog.h \
    daystatistics.h

FORMS    += mainwindow.ui \
    orderdishesdialog.ui \
    dishescountdialog.ui \
    selectseatdialog.ui \
    check_outdialog.ui \
    varietymenudialog.ui \
    logindialog.ui \
    add_reduce_dialog.ui \
    staffregister_dialog.ui \
    stockquery_dialog.ui \
    dayincomequery_dialog.ui \
    monthincomequery_dialog.ui \
    foodinfo_dialog.ui

RESOURCES += \
    res.qrc
