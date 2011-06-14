/*
   help.cpp
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

#include "help.h"
#include "ui_help.h"

Help::Help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);

    descriptions[0] = "Ouvrez le menu principal de votre Freebox en appuyant sur le bouton \"Free\" de votre t�l�commande.";
    descriptions[1] = "Ouvez le menu \"Param�tres\".";
    descriptions[2] = "Ouvrez le menu \"Informations G�n�rales\"";
    descriptions[3] = "Le code t�l�commande se trouve ici. Entrez le dans le champ \"Code t�l�commande\" des r�glages du programme.";
    descriptions[4] = "Revenez au menu \"Param�tres\", avec la touche \"B\" (rouge), puis entrez dans le menu \"FTP\".";
    descriptions[5] = "Le num�ro du boitier se trouve sur la ligne commen�ant par \"Serveur\". Rep�rez les 3 caract�res apr�s le \"@\", au format \"hd1\". Dans cet exemple, le 1 est le num�ro du boitier. Entrez le v�tre dans les r�glages de FreeStance.";

    goToStep(1);
}

Help::~Help()
{
    delete ui;
}

void Help::on_b_next_clicked()
{
    goToStep(actualStep + 1);
}

void Help::on_b_prev_clicked()
{
    goToStep(actualStep - 1);
}

void Help::setImage(int image)
{
    QPixmap pixmap(":/screens/Resources/screen" + QString::number(image) + ".png");
    ui->lbl_image->setPixmap(pixmap);
    ui->lbl_image->show();
}

void Help::setImageMeta(int step)
{
    ui->lbl_step->setText("Etape " + QString::number(step));
    ui->lbl_desc->setText(descriptions[step - 1]);
}

void Help::goToStep(int step)
{
    if(step == 1)
    {
        ui->b_prev->setEnabled(false);
        ui->b_next->setEnabled(true);
    }

    else if(step == 6)
    {
        ui->b_next->setEnabled(false);
        ui->b_prev->setEnabled(true);
    }

    else
    {
        ui->b_next->setEnabled(true);
        ui->b_prev->setEnabled(true);
    }

    actualStep = step;
    setImageMeta(step);
    setImage(step);
}
