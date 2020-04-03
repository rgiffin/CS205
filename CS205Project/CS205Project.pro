TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += sql

SOURCES += \
        collection.cpp \
        main.cpp

HEADERS += \
    collection.h

QT += sql

