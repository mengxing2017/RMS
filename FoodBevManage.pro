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


SOURCES += \
    src/source/add_reduce_dialog.cpp \
    src/source/check_outdialog.cpp \
    src/source/dayincomequery_dialog.cpp \
    src/source/daystatistics.cpp \
    src/source/dishescountdialog.cpp \
    src/source/foodinfo_dialog.cpp \
    src/source/logindialog.cpp \
    src/source/main.cpp \
    src/source/mainwindow.cpp \
    src/source/monthincomequery_dialog.cpp \
    src/source/orderdishesdialog.cpp \
    src/source/selectseatdialog.cpp \
    src/source/staffregister_dialog.cpp \
    src/source/stockqquery_dialog.cpp \
    src/source/varietymenudialog.cpp

HEADERS  += \
    src/include/add_reduce_dialog.h \
    src/include/check_outdialog.h \
    src/include/dayincomequery_dialog.h \
    src/include/daystatistics.h \
    src/include/dishescountdialog.h \
    src/include/foodinfo_dialog.h \
    src/include/logindialog.h \
    src/include/mainwindow.h \
    src/include/monthincomequery_dialog.h \
    src/include/orderdishesdialog.h \
    src/include/selectseatdialog.h \
    src/include/staffregister_dialog.h \
    src/include/stockqquery_dialog.h \
    src/include/varietymenudialog.h

FORMS    += \
    res/ui/add_reduce_dialog.ui \
    res/ui/check_outdialog.ui \
    res/ui/dayincomequery_dialog.ui \
    res/ui/dishescountdialog.ui \
    res/ui/foodinfo_dialog.ui \
    res/ui/logindialog.ui \
    res/ui/mainwindow.ui \
    res/ui/monthincomequery_dialog.ui \
    res/ui/orderdishesdialog.ui \
    res/ui/selectseatdialog.ui \
    res/ui/staffregister_dialog.ui \
    res/ui/stockquery_dialog.ui \
    res/ui/varietymenudialog.ui

RESOURCES += \
    res.qrc
