/*
   mainwindow.cpp
   FreeStance 2.0
   outadoc (Baptiste Candellier)
   2011
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>

QString distantVersion;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //objet pour la gestion des réglages
    qsettingstable = new QSettings("outadoc", "FreeStance");

    options = new Options(this);
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

    bool hasBeenSet = qsettingstable->value("hasBeenSet", false).toBool();
    //si le prog n'a jamais été utilisé...
    if(hasBeenSet != true)
    {
        qsettingstable->setValue("hasBeenSet", false);
        options->show();
    }

    //url pour les programmes tv
    setProgrammetvNetUrl(QUrl(tr("http://www.programme-tv.net/programme/free-13/")));
    setProgrammeTvUrl(QUrl(tr("http://dev.outadoc.fr/freestance/tvprog.html")));
    setCesoirtvComUrl(QUrl(tr("http://cesoirtv.com/")));
    setTvmagComUrl(QUrl(tr("http://www.tvmag.com/programme-tv/guide-tele.html?boId=2")));
    setTvexpressComUrl(QUrl(tr("http://tv-express.com/")));
    setHomepage(getProgrammeTvUrl());

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
    ui->lbl_updt_availability->setText("Vérification des mises à jour...");
    //on télécharge le fichier texte qui contient la version
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    manager->get(QNetworkRequest(QUrl("http://maj.outadoc.fr/freestance/version.txt")));
    QObject::connect(manager, SIGNAL(finished(QNetworkReply *)), this, SLOT(checkUpdatesResult(QNetworkReply *)));
}

void MainWindow::checkUpdatesResult(QNetworkReply *reply)
{
    //si le site a été trouvé
    QVariant statusCodeV = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
    if (statusCodeV.toInt() == 200)
    {
        //si la version du fichier distant est différente de la version locale
        QString distantVersion = reply->readAll();
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
    QMessageBox::information(this, tr("FreeStance v") + VERSION, tr("FreeStance est une application vous permettant de contrôler votre Freebox depuis votre ordinateur, sans avoir à aller chercher la télécommande !<br />Elle a été développée par Baptiste Candellier (aka outadoc).<br />Vous pouvez contacter le développeur <a href=\"http://twitter.com/#!/outadoc\">sur Twitter</a> ou <a href=\"mailto:admin@outadoc.fr\">par email.</a><br /><br />Freebox est une marque déposée de Free, SAS.<br />FreeStance est un programme distribué sous license GNU GPl."));
}

void MainWindow::on_actionAide_triggered()
{
    QMessageBox::information(this, tr("Aide"), tr("Ce programme vous permet de contrôler votre Freebox HD ou Révolution comme vous le feriez avec votre télécommande, mais par le réseau.<br />Vous trouverez votre code télécommande dans les menus de votre Freebox : \"Paramètres > Informations\".<br />Si vous n'avez qu'un seul boitier TV, le numéro du boîtier est HD1. Si par contre vous avez souscrit à l'option Multi-TV, choisissez le numéro du boîtier à contrôler."));
}

//bascule du profil par le menu
void MainWindow::on_actionProfil_1_triggered()
{
    if(ui->actionProfil_2->isChecked() == true)
    {
        ui->actionProfil_2->setChecked(false);
    }
    if(ui->actionProfil_3->isChecked() == true)
    {
        ui->actionProfil_3->setChecked(false);
    }
    ui->actionProfil_1->setChecked(true);
    settings->setProfileToUse(1);
}

void MainWindow::on_actionProfil_2_triggered()
{
    if(ui->actionProfil_1->isChecked() == true)
    {
        ui->actionProfil_1->setChecked(false);
    }
    if(ui->actionProfil_3->isChecked() == true)
    {
        ui->actionProfil_3->setChecked(false);
    }
    ui->actionProfil_2->setChecked(true);
    settings->setProfileToUse(2);
}

void MainWindow::on_actionProfil_3_triggered()
{
    if(ui->actionProfil_1->isChecked() == true)
    {
        ui->actionProfil_1->setChecked(false);
    }
    if(ui->actionProfil_2->isChecked() == true)
    {
        ui->actionProfil_2->setChecked(false);
    }
    ui->actionProfil_3->setChecked(true);
    settings->setProfileToUse(3);
}

void MainWindow::on_actionPr_f_rences_triggered()
{
    options->show();
}

void MainWindow::on_actionToujours_au_dessus_triggered()
{
    /*
    if(ui->actionToujours_au_dessus->isChecked() == true)
    {
        setWindowModality(Qt::ApplicationModal);
    }
    else
    {
        setWindowModality(Qt::NonModal);
    }
    */
}

void MainWindow::on_actionV_rifier_les_mises_jour_triggered()
{
    checkForUpdates();
}

void MainWindow::changeWebsite(int indexToNavigateTo)
{
    //choix du site pour l'EPG
    if(indexToNavigateTo == 0)
    {
        setHomepage(getProgrammeTvUrl());
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
        setHomepage(getTvexpressComUrl());
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
    ok = true; //j'aime pas les warnings
    ui->prgrbar_browser->setVisible(false);
    ui->lbl_nav_state->setText("Terminé.");
}
