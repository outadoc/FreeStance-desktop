/*
   profile.cpp
   FreeStance 2.0.1
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

#include "profile.h"

Profile::Profile(QString objectName)
{
    settingsTable = new QSettings("outadoc", "FreeStance");

    //à la création de l'objet, on récupère les données enregistrées avec QSettings
    if(settingsTable->value("hasBeenSet").toBool() == false)
    {
        //si le programme n'a jamais été lancé, on met des valeurs vides
        settingsTable->setValue(objectName + "/code", "");
        settingsTable->setValue(objectName + "/hd", "1");
    }

    //dans tous les cas, on les enregistre dans l'objet
    setCode(settingsTable->value(objectName + "/code").toString());
    setHd(settingsTable->value(objectName + "/hd").toInt());
}

//getters
QString Profile::getCode()
{
    return m_code;
}

int Profile::getHd()
{
    return m_hd;
}

//setters
int Profile::setCode(QString code)
{
    if(code.size() == 8)
    {
        m_code = code;
        return 0;
    }
    else
    {
        return 1;
    }
}

int Profile::setHd(int hd)
{
    if(hd == 1 || hd == 2 || hd == 3)
    {
        m_hd = hd;
        return 0;
    }
    else
    return 1;
}
