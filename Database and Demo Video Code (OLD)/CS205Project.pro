TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qtl

SOURCES += \
        collection.cpp \
        main.cpp \
        museum.cpp

HEADERS += \
    collection.h \
    museum.h

QT += sql

