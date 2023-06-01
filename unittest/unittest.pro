QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_unittest.cpp \
    ../server12/Func_for_server.cpp

HEADERS += \
    ../server12/Funcs_for_server.h
