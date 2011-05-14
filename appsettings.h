/*
   appsettings.h
   FreeStance 2.0
   outadoc (Baptiste Candellier)
   2011
*/

/*
Copyright (C) 2011 Candellier Baptiste

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef APPSETTINGS_H
#define APPSETTINGS_H

#include <QtGui>

class AppSettings
{
    public:
    AppSettings();
    int getProfileToUse();
    int getHdToUse();
    QString getCode();
    QString getDistantVersion();
    int setProfileToUse(int profile);
    int setHdToUse(int hd);
    int setCode(QString code);
    int setDistantVersion(QString distantVersion);

    private:
    int m_profileToUse;
    int m_hdToUse;
    QString m_code;
    QString m_distantVersion;
};

#endif // APPSETTINGS_H
