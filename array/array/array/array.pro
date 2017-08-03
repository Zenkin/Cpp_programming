QT += core
QT -= gui

CONFIG += c++11

TARGET = array
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    array.cpp \
    start_work_with_array.cpp

HEADERS += \
    array.h \
    start_work_with_array.h
