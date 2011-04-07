/*
   appsettings.h
   FreeStance 2.0
   outadoc (Baptiste Candellier)
   2011
*/

#ifndef APPSETTINGS_H
#define APPSETTINGS_H

#include <QtGui>

class AppSettings
{
    public:
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
