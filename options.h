/*
   options.h
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

#ifndef OPTIONS_H
#define OPTIONS_H

#include <QDialog>
#include "appsettings.h"
#include "profile.h"

namespace Ui {
    class Options;
}

class Options : public QDialog
{
    Q_OBJECT

public:
    explicit Options(QWidget *parent = 0);
    ~Options();

public slots:
    void on_cbox_profil_currentIndexChanged(int profile);
    void on_cbox_hd_currentIndexChanged(int hd);
    void on_txtfield_code_textEdited();
    void on_b_ok_clicked();
    void on_b_cancel_clicked();

signals:
    void saveLastEditedProfile(int);

private:
    Ui::Options *ui;
    Profile *profiles[3];
    Profile *profile1;
    Profile *profile2;
    Profile *profile3;
    QSettings *settingsTable;
};

#endif // OPTIONS_H
