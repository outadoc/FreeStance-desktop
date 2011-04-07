/*
   appsettings.cpp
   FreeStance 2.0
   outadoc (Baptiste Candellier)
   2011
*/

#include "appsettings.h"

using namespace std;

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
