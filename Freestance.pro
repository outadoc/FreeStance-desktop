#-------------------------------------------------
#
# Project created by QtCreator 2011-02-01T23:33:36
#
#-------------------------------------------------

QT       += core gui

TARGET = FreeStance
TEMPLATE = app
QT += webkit


SOURCES += main.cpp\
        mainwindow.cpp \
    options.cpp \
    appsettings.cpp \
    profile.cpp

HEADERS  += mainwindow.h \
    options.h \
    appsettings.h \
    profile.h

FORMS    += mainwindow.ui \
    options.ui

RESOURCES += \
    resources.qrc

OTHER_FILES += \
    resources.rc
