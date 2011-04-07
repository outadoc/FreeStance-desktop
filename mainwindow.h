/*
   mainwindow.h
   FreeStance 2.0
   outadoc (Baptiste Candellier)
   2011
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork/QNetworkAccessManager>
#include <QtGui>
#include <QtWebKit>

#include "appsettings.h"
#include "profile.h"
#include "options.h"

#define VERSION "2.0"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void checkForUpdates();
    void downloadChangelog();

    QUrl getProgrammetvNetUrl();
    QUrl getProgrammeTvUrl();
    QUrl getCesoirtvComUrl();
    QUrl getTvmagComUrl();
    QUrl getTvexpressComUrl();
    QUrl getHomepage();

    void setProgrammetvNetUrl(QUrl url);
    void setProgrammeTvUrl(QUrl url);
    void setCesoirtvComUrl(QUrl url);
    void setTvmagComUrl(QUrl url);
    void setTvexpressComUrl(QUrl url);
    void setHomepage(QUrl url);
    AppSettings *settings;

public slots:
    void on_actionSite_internet_triggered();
    void on_action_Propos_triggered();
    void on_actionProfil_1_triggered();
    void on_actionProfil_2_triggered();
    void on_actionProfil_3_triggered();
    void on_actionPr_f_rences_triggered();
    void on_actionToujours_au_dessus_triggered();
    void on_actionAide_triggered();
    void checkUpdatesResult(QNetworkReply *reply);
    void askForUpdate(QNetworkReply *reply);
    void on_actionV_rifier_les_mises_jour_triggered();
    void changeWebsite(int indexToNavigateTo);
    void on_b_home_clicked();
    void beginLoading();
    void loading(int percentage);
    void stopLoading(bool ok);

private:
    Ui::MainWindow *ui;
    Options *options;
    QUrl programmetvNetUrl;
    QUrl programmeTvUrl;
    QUrl cesoirtvComUrl;
    QUrl tvmagComUrl;
    QUrl tvexpressComUrl;
    QUrl homepage;
    QWebView *webbrowser;
    QVBoxLayout *vbox;
    QSettings *qsettingstable;
};

#endif // MAINWINDOW_H
