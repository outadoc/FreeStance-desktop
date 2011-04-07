/*
   profile.h
   FreeStance 2.0
   outadoc (Baptiste Candellier)
   2011
*/

#ifndef PROFILE_H
#define PROFILE_H

#include <QtGui>

class Profile
{
    public:
    Profile(QString objectName);
    QString getCode();
    int getHd();
    int setCode(QString code);
    int setHd(int hd);

    private:
    QString m_code;
    int m_hd;
    QSettings *qsettingstable;
};

#endif // PROFILE_H
