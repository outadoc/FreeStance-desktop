/*
   appsettings.cpp
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

#include "appsettings.h"

using namespace std;

AppSettings::AppSettings()
{
    QSettings *settingsTable = new QSettings("outadoc", "FreeStance");

    if(settingsTable->value("hasBeenSet").toBool() == false)
    {
        //si le programme n'a jamais été lancé, on met des valeurs vides
        settingsTable->setValue("profileToUse", 1);
    }

    setProfileToUse(settingsTable->value("profileToUse", 1).toInt());
}

QString AppSettings::getCode()
{
    return m_code;
}

int AppSettings::getHdToUse()
{
    return m_hdToUse;
}

int AppSettings::getProfileToUse()
{
    return m_profileToUse;
}

QString AppSettings::getDistantVersion()
{
    return m_distantVersion;
}

int AppSettings::setCode(QString code)
{
    if(code.size() == 8)
    {
        m_code = code;
        return 0;
    }
    else
    return 1;
}

int AppSettings::setHdToUse(int hd)
{
    if(hd == 1 || hd == 2 || hd == 3)
    {
        m_hdToUse = hd;
        return 0;
    }
    else
    return 1;
}

int AppSettings::setProfileToUse(int profile)
{
    if(profile == 1 || profile == 2 || profile == 3)
    {
        m_profileToUse = profile;
        QSettings *settingsTable = new QSettings("outadoc", "FreeStance");
        settingsTable->setValue("profileToUse", profile);
        return 0;
    }
    else
    return 1;
}

int AppSettings::setDistantVersion(QString distantVersion)
{
    m_distantVersion = distantVersion;
    return 0;
}
