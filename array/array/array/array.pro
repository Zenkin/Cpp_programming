QT += core
QT -= gui

CONFIG += c++11

TARGET = array
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    array.cpp

HEADERS += \
    array.h
