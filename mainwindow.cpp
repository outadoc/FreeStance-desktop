/*
   mainwindow.cpp
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

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //objet pour la gestion des réglages
    settingsTable = new QSettings("outadoc", "FreeStance");

    options = new Options(this);
    about = new About(this);
    settings = new AppSettings;

    //on vérifie les mises à jour
    checkForUpdates();

    //on centre la fenêtre
    QDesktopWidget *widget = QApplication::desktop();
    int desktop_width = widget->width();
    int desktop_height = widget->height();
    int x = desktop_width / 2 - width() / 2;
    int y = desktop_height / 2 - height() / 2 - 25;
    move(QPoint(x, y));

    bool hasBeenSet = settingsTable->value("hasBeenSet", false).toBool();
    //si le prog n'a jamais été utilisé...
    if(hasBeenSet != true)
    {
        settingsTable->setValue("hasBeenSet", false);
        options->show();
    }

    //on récupère le dernier profil utilisé pour l'utiliser par défaut dans le programme
    if(settings->getProfileToUse() == 1)
    {
        ui->actionProfil_1->setChecked(true);
        ui->actionProfil_2->setChecked(false);
        ui->actionProfil_3->setChecked(false);
    }

    else if (settings->getProfileToUse() == 2)
    {
        ui->actionProfil_1->setChecked(false);
        ui->actionProfil_2->setChecked(true);
        ui->actionProfil_3->setChecked(false);
    }

    else if(settings->getProfileToUse() == 3)
    {
        ui->actionProfil_1->setChecked(false);
        ui->actionProfil_2->setChecked(false);
        ui->actionProfil_3->setChecked(true);
    }

    //url pour les programmes tv
    setProgrammetvNetUrl(QUrl(tr("http://www.programme-tv.net/programme/free-13/")));
    setProgrammeTvUrl(QUrl(tr("http://dev.outadoc.fr/freestance/tvprog.html")));
    setCesoirtvComUrl(QUrl(tr("http://cesoirtv.com/")));
    setTvmagComUrl(QUrl(tr("http://www.tvmag.com/programme-tv/guide-tele.html?boId=2")));
    setTvexpressComUrl(QUrl(tr("http://tv-express.com/")));
    setHomepage(getTvexpressComUrl());

    //chargement du guide epg
    webbrowser = new QWebView;
    vbox = new QVBoxLayout;
    vbox->addWidget(webbrowser);
    ui->web_frame->setLayout(vbox);
    ui->prgrbar_browser->setVisible(false);
    webbrowser->load(getHomepage());

    //connections pour l'epg
    connect(ui->b_refresh, SIGNAL(clicked()), webbrowser, SLOT(reload()));
    connect(ui->b_prev, SIGNAL(clicked()), webbrowser, SLOT(back()));
    connect(ui->b_fw, SIGNAL(clicked()), webbrowser, SLOT(forward()));
    connect(ui->cbox_site, SIGNAL(currentIndexChanged(int)), this, SLOT(changeWebsite(int)));
    connect(webbrowser, SIGNAL(loadStarted()), this, SLOT(beginLoading()));
    connect(webbrowser, SIGNAL(loadProgress(int)), this, SLOT(loading(int)));
    connect(webbrowser, SIGNAL(loadFinished(bool)), this, SLOT(stopLoading(bool)));
    connect(ui->actionPr_f_rences, SIGNAL(triggered()), options, SLOT(show()));
    connect(ui->actionV_rifier_les_mises_jour, SIGNAL(triggered()), SLOT(checkForUpdates()));

    //on affiche la version dans le bas
    ui->lbl_actual_version->setText(VERSION);

    //le stay on top ne marche pas pour le moment, donc
    ui->actionToujours_au_dessus->setVisible(false);

    //easter egg (désolé, il FALLAIT que je le fasse :D)
    if(2 + 2 == 5) { QMessageBox::critical(this, "Uh Oh", "Tiens, chez vous, 2 + 2 = 5. Vous seriez pas sous Windows par hasard ? =D"); }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::checkForUpdates()
{
    ui->lbl_updt_availability->setText("");
    //on télécharge le fichier texte qui contient la version
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    manager->get(QNetworkRequest(QUrl("http://maj.outadoc.fr/freestance/version.txt")));
    QObject::connect(manager, SIGNAL(finished(QNetworkReply *)), this, SLOT(checkUpdatesResult(QNetworkReply *)));
}

void MainWindow::checkUpdatesResult(QNetworkReply *reply)
{
    //si le site a été trouvé
    QVariant statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
    if (statusCode.toInt() == 200)
    {
        //on ne prend que les 5 premiers caractères, sinon ça bug
        QString distantVersion = reply->read(5);

        //si la version du fichier distant est différente de la version locale
        if(distantVersion != VERSION)
        {
          settings->setDistantVersion(distantVersion);
          ui->lbl_updt_availability->setText(tr("Nouvelle version disponible !") + " ("+ settings->getDistantVersion() + ")");
          //on télécharge le changelog
          downloadChangelog();
        }
        else
        {
            ui->lbl_updt_availability->setText(tr(""));
            settings->setDistantVersion(distantVersion);
        }
    }
    else
    {
        ui->lbl_updt_availability->setText("");
    }
}
void MainWindow::downloadChangelog()
{
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    manager->get(QNetworkRequest(QUrl("http://maj.outadoc.fr/freestance/notes.txt")));
    QObject::connect(manager, SIGNAL(finished(QNetworkReply *)), this, SLOT(askForUpdate(QNetworkReply *)));
}

void MainWindow::askForUpdate(QNetworkReply *reply)
{
    QString changelog = reply->readAll();
    changelog = changelog.toLatin1();
    //on affiche la disponiblité de la màj, avec le changelog
    int answer = QMessageBox::information(this, tr("Mise à jour"), tr("Une nouvelle version de FreeStance <b>(") + settings->getDistantVersion() + tr(")</b> est disponible au téléchargement ! Télécharger la mise à jour ?<br /><b>Notes de version:</b><br />") + changelog, QMessageBox::Yes | QMessageBox::No);
    if(answer == QMessageBox::Yes)
    {
        //si l'utilisateur veut la télécharger, on l'emmène sur le site
        QDesktopServices::openUrl(QUrl("http://maj.outadoc.fr/freestance"));
    }
}

void MainWindow::on_actionSite_internet_triggered()
{
    QDesktopServices::openUrl(QUrl("http://outadoc.fr/"));
}

void MainWindow::on_action_Propos_triggered()
{
    about->show();
}

void MainWindow::on_actionAide_triggered()
{
    QMessageBox::information(this, tr("Aide"), tr("Ce programme vous permet de contrôler votre Freebox HD ou Révolution comme vous le feriez avec votre télécommande, mais par le réseau.<br />Vous trouverez votre code télécommande dans les menus de votre Freebox : \"Paramètres > Informations\".<br />Si vous n'avez qu'un seul boitier TV, le numéro du boîtier est HD1. Si par contre vous avez souscrit à l'option Multi-TV, choisissez le numéro du boîtier à contrôler."));
}

//bascule du profil par le menu
void MainWindow::on_actionProfil_1_triggered()
{
    if(settingsTable->value("Profile 1/code", "") == "")
    {
        QMessageBox::warning(this, "Erreur", "WTF ?! oO", QMessageBox::Ok);
        ui->actionProfil_1->setChecked(false);
    }

    else
    {
        ui->actionProfil_1->setChecked(true);
        ui->actionProfil_2->setChecked(false);
        ui->actionProfil_3->setChecked(false);
        settings->setProfileToUse(1);
    }
}

void MainWindow::on_actionProfil_2_triggered()
{
    if(settingsTable->value("Profile 2/code", "") == "")
    {
        QMessageBox::warning(this, "Erreur", "Ce profil n'a pas été configuré. Rendez-vous dans les réglages pour le faire.", QMessageBox::Ok);
        ui->actionProfil_2->setChecked(false);
    }

    else
    {
        ui->actionProfil_1->setChecked(false);
        ui->actionProfil_2->setChecked(true);
        ui->actionProfil_3->setChecked(false);
        settings->setProfileToUse(2);
    }
}

void MainWindow::on_actionProfil_3_triggered()
{
    if(settingsTable->value("Profile 3/code", "") == "")
    {
        QMessageBox::warning(this, "Erreur", "Ce profil n'a pas été configuré. Rendez-vous dans les réglages pour le faire.", QMessageBox::Ok);
        ui->actionProfil_3->setChecked(false);
    }

    else
    {
        ui->actionProfil_1->setChecked(false);
        ui->actionProfil_2->setChecked(false);
        ui->actionProfil_3->setChecked(true);
        settings->setProfileToUse(3);
    }
}

//le coeur du programme : la requête de l'URL qui va changer la chaîne sur la Freebox
void MainWindow::requestKey(QString key, bool isLong)
{
    int profile = settings->getProfileToUse();
    QString hd = settingsTable->value("Profile " + QString::number(profile) + "/hd", "1").toString();
    QString code = settingsTable->value("Profile " + QString::number(profile) + "/code", "").toString();
    QString longString;

    if(isLong == true)
        longString = "&long=true";
    else
        longString = "";

    QNetworkAccessManager *manager = new QNetworkAccessManager();
    manager->get(QNetworkRequest(QUrl("http://hd" + hd + ".freebox.fr/pub/remote_control?key=" + key + "&code=" + code + longString)));
}

//choix du site pour l'EPG
void MainWindow::changeWebsite(int indexToNavigateTo)
{
    if(indexToNavigateTo == 0)
    {
        setHomepage(getTvexpressComUrl());
    }
    else if(indexToNavigateTo == 1)
    {
        setHomepage(getProgrammetvNetUrl());
    }
    else if(indexToNavigateTo == 2)
    {
        setHomepage(getCesoirtvComUrl());
    }
    else if(indexToNavigateTo == 3)
    {
        setHomepage(getTvmagComUrl());
    }
    else if(indexToNavigateTo == 4)
    {
        setHomepage(getProgrammeTvUrl());
    }
    webbrowser->load(getHomepage());
}

//fonctions get/set pour les url des sites de l'epg
QUrl MainWindow::getProgrammetvNetUrl()
{
    return programmetvNetUrl;
}

QUrl MainWindow::getProgrammeTvUrl()
{
    return programmeTvUrl;
}

QUrl MainWindow::getCesoirtvComUrl()
{
    return cesoirtvComUrl;
}

QUrl MainWindow::getTvmagComUrl()
{
    return tvmagComUrl;
}

QUrl MainWindow::getTvexpressComUrl()
{
    return tvexpressComUrl;
}

QUrl MainWindow::getHomepage()
{
    return homepage;
}

void MainWindow::setProgrammetvNetUrl(QUrl url)
{
    programmetvNetUrl = url;
}

void MainWindow::setProgrammeTvUrl(QUrl url)
{
    programmeTvUrl = url;
}

void MainWindow::setCesoirtvComUrl(QUrl url)
{
    cesoirtvComUrl = url;
}

void MainWindow::setTvmagComUrl(QUrl url)
{
    tvmagComUrl = url;
}

void MainWindow::setTvexpressComUrl(QUrl url)
{
    tvexpressComUrl = url;
}

void MainWindow::setHomepage(QUrl url)
{
    homepage = url;
}

//slots pour l'epg
void MainWindow::on_b_home_clicked()
{
    webbrowser->load(getHomepage());
}

void MainWindow::beginLoading()
{
    ui->prgrbar_browser->setVisible(true);
    ui->lbl_nav_state->setText("Chargement...");
}

void MainWindow::loading(int percentage)
{
    ui->prgrbar_browser->setVisible(true);
    ui->prgrbar_browser->setValue(percentage);
    ui->lbl_nav_state->setText("Chargement...");
}

void MainWindow::stopLoading(bool ok)
{
    ok = true; //sert à rien, mais j'aime pas les warnings
    ui->prgrbar_browser->setVisible(false);
    ui->lbl_nav_state->setText("Terminé.");
}


//clics sur les boutons de la télécommande
void MainWindow::on_b_power_clicked()
{
    requestKey("power", false);
}

void MainWindow::on_b_free_clicked()
{
    requestKey("home", false);
}

void MainWindow::on_b_info_clicked()
{
    requestKey("info", false);
}

void MainWindow::on_b_epgfbx_clicked()
{
    requestKey("epg", false);
}

void MainWindow::on_b_list_clicked()
{
    requestKey("list", false);
}

void MainWindow::on_b_rep_clicked()
{
    requestKey("mail", true);
}

void MainWindow::on_b_mute_clicked()
{
    requestKey("mute", false);
}

void MainWindow::on_b_up_2_clicked()
{
    requestKey("red", false);
}

void MainWindow::on_b_right_2_clicked()
{
    requestKey("green", false);
}

void MainWindow::on_b_down_2_clicked()
{
    requestKey("blue", false);
}

void MainWindow::on_b_left_2_clicked()
{
    requestKey("yellow", false);
}

void MainWindow::on_b_vol_plus_clicked()
{
    requestKey("vol_inc", false);
}

void MainWindow::on_b_vol_minus_clicked()
{
    requestKey("vol_dec", false);
}

void MainWindow::on_b_prgm_plus_clicked()
{
    requestKey("prgm_inc", false);
}

void MainWindow::on_b_prgm_minus_clicked()
{
    requestKey("prgm_dec", false);
}

void MainWindow::on_b_ok_clicked()
{
    requestKey("ok", false);
}

void MainWindow::on_b_up_clicked()
{
    requestKey("up", false);
}

void MainWindow::on_b_right_clicked()
{
    requestKey("right", false);
}

void MainWindow::on_b_down_clicked()
{
    requestKey("down", false);
}

void MainWindow::on_b_left_clicked()
{
    requestKey("left", false);
}

void MainWindow::on_b_rec_clicked()
{
    requestKey("rec", false);
}

void MainWindow::on_b_prevchap_clicked()
{
    requestKey("prev", false);
}

void MainWindow::on_b_retourrapide_clicked()
{
    requestKey("bwd", false);
}

void MainWindow::on_b_playpause_clicked()
{
    requestKey("play", false);
}

void MainWindow::on_b_stop_clicked()
{
    requestKey("stop", false);
}

void MainWindow::on_b_avancerapide_clicked()
{
    requestKey("fwd", false);
}

void MainWindow::on_b_nextchap_clicked()
{
    requestKey("next", false);
}

void MainWindow::on_b_1_clicked()
{
    requestKey("1", true);
}

void MainWindow::on_b_2_clicked()
{
    requestKey("2", true);
}

void MainWindow::on_b_3_clicked()
{
    requestKey("3", true);
}

void MainWindow::on_b_4_clicked()
{
    requestKey("4", true);
}

void MainWindow::on_b_5_clicked()
{
    requestKey("5", true);
}

void MainWindow::on_b_6_clicked()
{
    requestKey("6", true);
}

void MainWindow::on_b_7_clicked()
{
    requestKey("7", true);
}

void MainWindow::on_b_8_clicked()
{
    requestKey("8", true);
}

void MainWindow::on_b_9_clicked()
{
    requestKey("9", true);
}

void MainWindow::on_b_0_clicked()
{
    requestKey("0", true);
}

void MainWindow::on_b_yellow_arrow_clicked()
{
    requestKey("back", false);
}

void MainWindow::on_b_cycle_clicked()
{
    requestKey("swap", false);
}

void MainWindow::on_b_tf1_clicked()
{
    requestKey("1", false);
}

void MainWindow::on_b_fr2_clicked()
{
    requestKey("2", false);
}

void MainWindow::on_b_fr3_clicked()
{
    requestKey("3", false);
}

void MainWindow::on_b_cplus_clicked()
{
    requestKey("4", false);
}

void MainWindow::on_b_fr5_clicked()
{
    requestKey("5", false);
}

void MainWindow::on_b_m6_clicked()
{
    requestKey("6", false);
}

void MainWindow::on_b_arte_clicked()
{
    requestKey("7", false);
}

void MainWindow::on_b_d8_clicked()
{
    requestKey("8", false);
}

void MainWindow::on_b_w9_clicked()
{
    requestKey("9", false);
}

void MainWindow::on_b_tmc_clicked()
{
    requestKey("1", true);
    requestKey("0", false);
}

void MainWindow::on_b_nt1_clicked()
{
    requestKey("1", true);
    requestKey("1", false);
}

void MainWindow::on_b_nrj12_clicked()
{
    requestKey("1", true);
    requestKey("2", false);
}

void MainWindow::on_b_lcp_clicked()
{
    requestKey("1", true);
    requestKey("3", false);
}

void MainWindow::on_b_fr4_clicked()
{
    requestKey("1", true);
    requestKey("4", false);
}

void MainWindow::on_b_bfm_clicked()
{
    requestKey("1", true);
    requestKey("5", false);
}

void MainWindow::on_b_itv_clicked()
{
    requestKey("1", true);
    requestKey("6", false);
}

void MainWindow::on_b_dstar_clicked()
{
    requestKey("1", true);
    requestKey("7", false);
}

void MainWindow::on_b_gulli_clicked()
{
    requestKey("1", true);
    requestKey("8", false);
}

void MainWindow::on_b_fro_clicked()
{
    requestKey("1", true);
    requestKey("5", true);
    requestKey("2", false);
}
