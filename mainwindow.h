/*
   mainwindow.h
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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork/QNetworkAccessManager>
#include <QtGui>
#include <QtWebKit>

#include "appsettings.h"
#include "profile.h"
#include "options.h"
#include "about.h"
#include "help.h"

#define VERSION "2.0.1"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void downloadChangelog();
    void requestKey(QString key, bool isLong);

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
    void on_actionAide_triggered();

    void checkForUpdates();
    void checkUpdatesResult(QNetworkReply *reply);
    void askForUpdate(QNetworkReply *reply);

    void changeWebsite(int indexToNavigateTo);
    void on_b_home_clicked();
    void beginLoading();
    void loading(int percentage);
    void stopLoading(bool ok);

private slots:
    void on_b_power_clicked();
    void on_b_free_clicked();
    void on_b_info_clicked();
    void on_b_epgfbx_clicked();
    void on_b_list_clicked();
    void on_b_rep_clicked();
    void on_b_mute_clicked();
    void on_b_up_2_clicked();
    void on_b_right_2_clicked();
    void on_b_down_2_clicked();
    void on_b_left_2_clicked();
    void on_b_vol_plus_clicked();
    void on_b_vol_minus_clicked();
    void on_b_prgm_plus_clicked();
    void on_b_prgm_minus_clicked();
    void on_b_ok_clicked();
    void on_b_up_clicked();
    void on_b_right_clicked();
    void on_b_down_clicked();
    void on_b_left_clicked();
    void on_b_rec_clicked();
    void on_b_prevchap_clicked();
    void on_b_retourrapide_clicked();
    void on_b_playpause_clicked();
    void on_b_stop_clicked();
    void on_b_avancerapide_clicked();
    void on_b_nextchap_clicked();
    void on_b_1_clicked();
    void on_b_2_clicked();
    void on_b_3_clicked();
    void on_b_4_clicked();
    void on_b_5_clicked();
    void on_b_6_clicked();
    void on_b_7_clicked();
    void on_b_8_clicked();
    void on_b_9_clicked();
    void on_b_0_clicked();
    void on_b_yellow_arrow_clicked();
    void on_b_cycle_clicked();
    void on_b_tf1_clicked();
    void on_b_fr2_clicked();
    void on_b_fr3_clicked();
    void on_b_cplus_clicked();
    void on_b_fr5_clicked();
    void on_b_m6_clicked();
    void on_b_arte_clicked();
    void on_b_d8_clicked();
    void on_b_w9_clicked();
    void on_b_tmc_clicked();
    void on_b_nt1_clicked();
    void on_b_nrj12_clicked();
    void on_b_fr4_clicked();
    void on_b_lcp_clicked();
    void on_b_bfm_clicked();
    void on_b_itv_clicked();
    void on_b_dstar_clicked();
    void on_b_gulli_clicked();
    void on_b_fro_clicked();

private:
    Ui::MainWindow *ui;
    Options *options;
    About *about;
    Help *help;

    QUrl programmetvNetUrl;
    QUrl programmeTvUrl;
    QUrl cesoirtvComUrl;
    QUrl tvmagComUrl;
    QUrl tvexpressComUrl;
    QUrl homepage;

    QWebView *webbrowser;
    QVBoxLayout *vbox;
    QSettings *settingsTable;
};

#endif // MAINWINDOW_H
