QT += core
QT -= gui

CONFIG += c++11

TARGET = Pointers
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    assigning_values_using_pointers.cpp \
    arithmetic_on_pointers.cpp \
    print_labels.cpp

HEADERS += \
    variable.h \
    assigning_values_using_pointers.h \
    arithmetic_on_pointers.h \
    print_labels.h
