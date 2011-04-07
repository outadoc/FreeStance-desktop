/*
   options.cpp
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

#include "options.h"
#include "ui_options.h"

Options::Options(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Options)
{
    ui->setupUi(this);

    //on créé 3 profils temporaires
    profile1 = new Profile("profile1");
    profile2 = new Profile("profile2");
    profile3 = new Profile("profile3");

    qsettingstable = new QSettings("outadoc", "FreeStance");

    //remplissage du champ texte avec le code du profil 1
    ui->txtfield_code->setText(profile1->getCode());

    //sélection du hd avec le hd du profil 1
    if(profile1->getHd() == 1)
    {
        ui->cbox_hd->setCurrentIndex(0);
    }

    if(profile1->getHd() == 2)
    {
        ui->cbox_hd->setCurrentIndex(1);
    }

    if(profile1->getHd() == 3)
    {
        ui->cbox_hd->setCurrentIndex(2);
    }
}

Options::~Options()
{
    delete ui;
}

void Options::on_cbox_profil_currentIndexChanged(int profile)
{
    //si on choisit de modifier un autre profil
    if(profile == 0)
    {
        //on set le hd
        if(profile1->getHd() == 1)
        {
            ui->cbox_hd->setCurrentIndex(0);
        }

        if(profile1->getHd() == 2)
        {
            ui->cbox_hd->setCurrentIndex(1);
        }

        if(profile1->getHd() == 3)
        {
            ui->cbox_hd->setCurrentIndex(2);
        }

        //on set le code
        QMessageBox::information(this, "code profil 1", profile1->getCode());
        ui->txtfield_code->setText(profile1->getCode());
    }
    if(profile == 1)
    {
        if(profile2->getHd() == 1)
        {
            ui->cbox_hd->setCurrentIndex(0);
        }

        if(profile2->getHd() == 2)
        {
            ui->cbox_hd->setCurrentIndex(1);
        }

        if(profile2->getHd() == 3)
        {
            ui->cbox_hd->setCurrentIndex(2);
        }

        ui->txtfield_code->setText(profile1->getCode());
    }
    if(profile == 2)
    {
        if(profile3->getHd() == 1)
        {
            ui->cbox_hd->setCurrentIndex(0);
        }

        if(profile3->getHd() == 2)
        {
            ui->cbox_hd->setCurrentIndex(1);
        }

        if(profile3->getHd() == 3)
        {
            ui->cbox_hd->setCurrentIndex(2);
        }

        ui->txtfield_code->setText(profile1->getCode());
    }
}

void Options::on_cbox_hd_currentIndexChanged(int hd)
{
    //si on change le hd, on l'enregistre dans le profil correspondant
    if(ui->cbox_profil->currentIndex() == 0)
    {
        if(hd == 0)
        {
            profile1->setHd(1);
        }

        if(hd == 1)
        {
            profile1->setHd(2);
        }
        if(hd == 2)
        {
            profile1->setHd(3);
        }
    }
    if(ui->cbox_profil->currentIndex() == 1)
    {
        if(hd == 0)
        {
            profile2->setHd(1);
        }

        if(hd == 1)
        {
            profile2->setHd(2);
        }
        if(hd == 2)
        {
            profile2->setHd(3);
        }
    }
    if(ui->cbox_profil->currentIndex() == 2)
    {
        if(hd == 0)
        {
            profile3->setHd(1);
        }

        if(hd == 1)
        {
            profile3->setHd(2);
        }
        if(hd == 2)
        {
            profile3->setHd(3);
        }
    }
}

void Options::on_txtfield_code_textEdited()
{
    //si on change le code, on l'enregistre dans le profil correspondant
    if(ui->cbox_profil->currentIndex() == 0)
    {
        profile1->setCode(ui->txtfield_code->text());
    }
    if(ui->cbox_profil->currentIndex() == 1)
    {
        profile2->setCode(ui->txtfield_code->text());
    }
    if(ui->cbox_profil->currentIndex() == 2)
    {
        profile3->setCode(ui->txtfield_code->text());
    }
}

void Options::on_b_ok_clicked()
{   
    //le dernier profil n'a pas été sauvegardé dans son objet. il faut le faire manuellement
    connect(this, SIGNAL(saveLastEditedProfile(int)), this, SLOT(on_cbox_profil_currentIndexChanged(int)));
    emit saveLastEditedProfile(ui->cbox_profil->currentIndex());

    //il ne faut pas afficher d'erreur si le champ n'est pas rempli... on n'est pas obligé de remplir tous les profils !
    if(profile1->getCode().length() == 8 )
    {
        qsettingstable->setValue("Profile 1/code", profile1->getCode());
        qsettingstable->setValue("Profile 1/hd", profile1->getHd());

        qsettingstable->setValue("hasBeenSet", true);
        close();

        if(profile2->getCode() != "")
        {
            if(profile2->getCode().length() == 8)
            {
                qsettingstable->setValue("Profile 2/code", profile2->getCode());
                qsettingstable->setValue("Profile 2/hd", profile2->getHd());

                close();

                if(profile3->getCode() != "")
                {
                    if(profile3->getCode().length() == 8)
                    {
                        qsettingstable->setValue("Profile 3/code", profile3->getCode());
                        qsettingstable->setValue("Profile 3/hd", profile3->getHd());

                        close();
                    }
                    else
                    {
                        QMessageBox::warning(this, tr("Code invalide"), tr("Le code doit être de 8 caractères !"));
                    }
                }
            }
            else
            {
                QMessageBox::warning(this, tr("Code invalide"), tr("Le code doit être de 8 caractères !"));
            }
        }
    }
    else
    {
        QMessageBox::warning(this, tr("Code invalide"), tr("Le code doit être de 8 caractères !"));
    }
}

void Options::on_b_cancel_clicked()
{
    if(qsettingstable->value("hasBeenSet", "hasBeenSet").toString() != "hasBeenSet")
    {
        bool hasBeenSet = qsettingstable->value("hasBeenSet", false).toBool();
        if (!hasBeenSet)
        {
            QCoreApplication::quit();
        }
    }
    else
    {
        close();
    }
}
