/*
   help.h
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

#ifndef HELP_H
#define HELP_H

#include <QDialog>
#include <QString>

namespace Ui {
    class Help;
}

class Help : public QDialog
{
    Q_OBJECT

public:
    explicit Help(QWidget *parent = 0);
    ~Help();
    void goToStep(int step);
    void setImageMeta(int step);
    void setImage(int image);

public slots:
    void on_b_prev_clicked();
    void on_b_next_clicked();

private:
    Ui::Help *ui;
    int actualStep;
    QString descriptions[6];
};

#endif // HELP_H
