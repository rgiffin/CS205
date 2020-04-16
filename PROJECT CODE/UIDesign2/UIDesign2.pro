QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accountcurator.cpp \
    accountedit.cpp \
    addmuseum.cpp \
    itemsviewed.cpp \
    main.cpp \
    login.cpp \
    museumlist.cpp \
    museummain.cpp \
    mycomments.cpp \
    signup.cpp \
    user.cpp

HEADERS += \
    accountcurator.h \
    accountedit.h \
    addmuseum.h \
    itemsviewed.h \
    login.h \
    museumlist.h \
    museummain.h \
    mycomments.h \
    signup.h \
    user.h

FORMS += \
    accountcurator.ui \
    accountedit.ui \
    addmuseum.ui \
    itemsviewed.ui \
    login.ui \
    museumlist.ui \
    museummain.ui \
    mycomments.ui \
    signup.ui

TRANSLATIONS += \
    UIDesign2_en_US.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    MoM_Logo.qrc

QT += sql
