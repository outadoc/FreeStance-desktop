/*
   profile.cpp
   FreeStance 2.0
   outadoc (Baptiste Candellier)
   2011
*/

#include "profile.h"

Profile::Profile(QString objectName)
{
    qsettingstable = new QSettings("outadoc", "FreeStance");

    //à la création de l'objet, on récupère les données enregistrées avec QSettings
    if(qsettingstable->value("hasBeenSet").toBool() == false)
    {
            //si le programme n'a jamais été lancé, on met des valeurs vides
            if(objectName == "profile1")
            {
                qsettingstable->setValue("Profile 1/code", "");
                qsettingstable->setValue("Profile 1/hd", "1");
            }

            if(objectName == "profile2")
            {
                qsettingstable->setValue("Profile 2/code", "");
                qsettingstable->setValue("Profile 2/hd", "1");
            }

            if(objectName == "profile3")
            {
                qsettingstable->setValue("Profile 3/code", "");
                qsettingstable->setValue("Profile 3/hd", "1");
            }
        }

        //dans tous les cas, on les enregistre dans l'objet
        if(objectName == "profile1")
        {
            setCode(qsettingstable->value("Profile 1/code").toString());
            setHd(qsettingstable->value("Profile 1/hd").toInt());
        }

        if(objectName == "profile2")
        {
           setCode(qsettingstable->value("Profile 2/code").toString());
           setHd(qsettingstable->value("Profile 2/hd").toInt());
        }

        if(objectName == "profile3")
        {
           setCode(qsettingstable->value("Profile 3/code").toString());
           setHd(qsettingstable->value("Profile 3/hd").toInt());
        }
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