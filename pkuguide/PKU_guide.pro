#-------------------------------------------------
#
# Project created by QtCreator 2023-05-19T09:25:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PKU_guide
TEMPLATE = app


SOURCES += main.cpp\
        mymainwindow.cpp \
    location_drection.cpp

HEADERS  += mymainwindow.h \
    location_drection.h

FORMS    += mymainwindow.ui

RESOURCES += \
    pku_img.qrc
