#-------------------------------------------------
#
# Project created by QtCreator 2016-07-14T07:09:29
#
#-------------------------------------------------

QT       += core gui

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
    logindialog.cpp

HEADERS  += mainwindow.h \
    orderdishesdialog.h \
    dishescountdialog.h \
    selectseatdialog.h \
    check_outdialog.h \
    varietymenudialog.h \
    logindialog.h

FORMS    += mainwindow.ui \
    orderdishesdialog.ui \
    dishescountdialog.ui \
    selectseatdialog.ui \
    check_outdialog.ui \
    varietymenudialog.ui \
    logindialog.ui

RESOURCES += \
    res.qrc
