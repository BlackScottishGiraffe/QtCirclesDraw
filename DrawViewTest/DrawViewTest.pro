QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

HEADERS += \
    ../Circles/drawviewwidget.h
SOURCES += \
    tst_drawviewtest.cpp \
    ../Circles/drawviewwidget.cpp
