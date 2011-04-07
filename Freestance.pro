#-------------------------------------------------
#
# Project created by QtCreator 2011-02-01T23:33:36
#
#-------------------------------------------------

#Copyright (C) 2011 Candellier Baptiste

#This program is free software; you can redistribute it and/or modify
#it under the terms of the GNU General Public License as published by
#the Free Software Foundation; either version 2 of the License, or
#(at your option) any later version.

#This program is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
#GNU General Public License for more details.

#You should have received a copy of the GNU General Public License along
#with this program; if not, write to the Free Software Foundation, Inc.,
#51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.


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
