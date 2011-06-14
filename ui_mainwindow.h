/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun May 15 13:49:00 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPr_f_rences;
    QAction *actionQuitter;
    QAction *actionProfil_1;
    QAction *actionProfil_2;
    QAction *actionProfil_3;
    QAction *actionAide;
    QAction *action_Propos;
    QAction *actionV_rifier_les_mises_jour;
    QAction *actionSite_internet;
    QAction *actionToujours_au_dessus;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_telec;
    QFrame *frame_2;
    QGroupBox *grpbx_numpad;
    QPushButton *b_1;
    QPushButton *b_2;
    QPushButton *b_3;
    QPushButton *b_4;
    QPushButton *b_5;
    QPushButton *b_6;
    QPushButton *b_7;
    QPushButton *b_8;
    QPushButton *b_9;
    QPushButton *b_0;
    QPushButton *b_yellow_arrow;
    QPushButton *b_cycle;
    QGroupBox *grpbx_direc_arrows;
    QPushButton *b_up;
    QPushButton *b_down;
    QPushButton *b_right;
    QPushButton *b_left;
    QPushButton *b_ok;
    QFrame *frame_3;
    QGroupBox *grpbx_baxy;
    QPushButton *b_up_2;
    QPushButton *b_right_2;
    QPushButton *b_down_2;
    QPushButton *b_left_2;
    QPushButton *b_vol_plus;
    QPushButton *b_prgm_plus;
    QPushButton *b_prgm_minus;
    QPushButton *b_vol_minus;
    QLabel *lbl_vol;
    QLabel *lbl_prgm;
    QFrame *frame_4;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *b_power;
    QPushButton *b_free;
    QPushButton *b_list;
    QPushButton *b_mute;
    QPushButton *b_epgfbx;
    QPushButton *b_info;
    QPushButton *b_rep;
    QFrame *frame_5;
    QPushButton *b_playpause;
    QPushButton *b_stop;
    QPushButton *b_avancerapide;
    QPushButton *b_nextchap;
    QPushButton *b_retourrapide;
    QPushButton *b_prevchap;
    QPushButton *b_rec;
    QWidget *tab_mosaique;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *b_tf1;
    QPushButton *b_fr2;
    QPushButton *b_fr3;
    QPushButton *b_cplus;
    QPushButton *b_fr5;
    QPushButton *b_m6;
    QPushButton *b_arte;
    QPushButton *b_d8;
    QPushButton *b_w9;
    QPushButton *b_lcp;
    QPushButton *b_tmc;
    QPushButton *b_nt1;
    QPushButton *b_nrj12;
    QPushButton *b_fr4;
    QPushButton *b_bfm;
    QPushButton *b_itv;
    QPushButton *b_dstar;
    QPushButton *b_gulli;
    QPushButton *b_fro;
    QWidget *tab_guide;
    QPushButton *b_prev;
    QPushButton *b_fw;
    QPushButton *b_refresh;
    QComboBox *cbox_site;
    QPushButton *b_home;
    QLabel *lbl_nav_state;
    QProgressBar *prgrbar_browser;
    QFrame *web_frame;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_version;
    QLabel *lbl_actual_version;
    QSpacerItem *horizontalSpacer;
    QLabel *lbl_updt_availability;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuAide;
    QMenu *menuProfil;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 548);
        MainWindow->setMinimumSize(QSize(640, 548));
        MainWindow->setMaximumSize(QSize(640, 548));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Resources/logo-fb.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionPr_f_rences = new QAction(MainWindow);
        actionPr_f_rences->setObjectName(QString::fromUtf8("actionPr_f_rences"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/menu_icons/Resources/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPr_f_rences->setIcon(icon1);
        actionPr_f_rences->setIconVisibleInMenu(true);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/menu_icons/Resources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuitter->setIcon(icon2);
        actionQuitter->setIconVisibleInMenu(true);
        actionProfil_1 = new QAction(MainWindow);
        actionProfil_1->setObjectName(QString::fromUtf8("actionProfil_1"));
        actionProfil_1->setCheckable(true);
        actionProfil_1->setChecked(true);
        actionProfil_2 = new QAction(MainWindow);
        actionProfil_2->setObjectName(QString::fromUtf8("actionProfil_2"));
        actionProfil_2->setCheckable(true);
        actionProfil_3 = new QAction(MainWindow);
        actionProfil_3->setObjectName(QString::fromUtf8("actionProfil_3"));
        actionProfil_3->setCheckable(true);
        actionAide = new QAction(MainWindow);
        actionAide->setObjectName(QString::fromUtf8("actionAide"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/menu_icons/Resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAide->setIcon(icon3);
        actionAide->setIconVisibleInMenu(true);
        action_Propos = new QAction(MainWindow);
        action_Propos->setObjectName(QString::fromUtf8("action_Propos"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/menu_icons/Resources/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Propos->setIcon(icon4);
        action_Propos->setIconVisibleInMenu(true);
        actionV_rifier_les_mises_jour = new QAction(MainWindow);
        actionV_rifier_les_mises_jour->setObjectName(QString::fromUtf8("actionV_rifier_les_mises_jour"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/menu_icons/Resources/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionV_rifier_les_mises_jour->setIcon(icon5);
        actionV_rifier_les_mises_jour->setIconVisibleInMenu(true);
        actionSite_internet = new QAction(MainWindow);
        actionSite_internet->setObjectName(QString::fromUtf8("actionSite_internet"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/menu_icons/Resources/website.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSite_internet->setIcon(icon6);
        actionSite_internet->setIconVisibleInMenu(true);
        actionToujours_au_dessus = new QAction(MainWindow);
        actionToujours_au_dessus->setObjectName(QString::fromUtf8("actionToujours_au_dessus"));
        actionToujours_au_dessus->setCheckable(true);
        actionToujours_au_dessus->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/menu_icons/Resources/punaise.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToujours_au_dessus->setIcon(icon7);
        actionToujours_au_dessus->setIconVisibleInMenu(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(622, 477));
        tabWidget->setMaximumSize(QSize(622, 477));
        tabWidget->setFocusPolicy(Qt::NoFocus);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_telec = new QWidget();
        tab_telec->setObjectName(QString::fromUtf8("tab_telec"));
        frame_2 = new QFrame(tab_telec);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(60, 20, 161, 321));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        grpbx_numpad = new QGroupBox(frame_2);
        grpbx_numpad->setObjectName(QString::fromUtf8("grpbx_numpad"));
        grpbx_numpad->setGeometry(QRect(0, 150, 161, 171));
        b_1 = new QPushButton(grpbx_numpad);
        b_1->setObjectName(QString::fromUtf8("b_1"));
        b_1->setGeometry(QRect(10, 10, 41, 31));
        b_2 = new QPushButton(grpbx_numpad);
        b_2->setObjectName(QString::fromUtf8("b_2"));
        b_2->setGeometry(QRect(60, 10, 41, 31));
        b_3 = new QPushButton(grpbx_numpad);
        b_3->setObjectName(QString::fromUtf8("b_3"));
        b_3->setGeometry(QRect(110, 10, 41, 31));
        b_4 = new QPushButton(grpbx_numpad);
        b_4->setObjectName(QString::fromUtf8("b_4"));
        b_4->setGeometry(QRect(10, 50, 41, 31));
        b_5 = new QPushButton(grpbx_numpad);
        b_5->setObjectName(QString::fromUtf8("b_5"));
        b_5->setGeometry(QRect(60, 50, 41, 31));
        b_6 = new QPushButton(grpbx_numpad);
        b_6->setObjectName(QString::fromUtf8("b_6"));
        b_6->setGeometry(QRect(110, 50, 41, 31));
        b_7 = new QPushButton(grpbx_numpad);
        b_7->setObjectName(QString::fromUtf8("b_7"));
        b_7->setGeometry(QRect(10, 90, 41, 31));
        b_8 = new QPushButton(grpbx_numpad);
        b_8->setObjectName(QString::fromUtf8("b_8"));
        b_8->setGeometry(QRect(60, 90, 41, 31));
        b_9 = new QPushButton(grpbx_numpad);
        b_9->setObjectName(QString::fromUtf8("b_9"));
        b_9->setGeometry(QRect(110, 90, 41, 31));
        b_0 = new QPushButton(grpbx_numpad);
        b_0->setObjectName(QString::fromUtf8("b_0"));
        b_0->setGeometry(QRect(60, 130, 41, 31));
        b_yellow_arrow = new QPushButton(grpbx_numpad);
        b_yellow_arrow->setObjectName(QString::fromUtf8("b_yellow_arrow"));
        b_yellow_arrow->setGeometry(QRect(10, 130, 41, 31));
        b_yellow_arrow->setCheckable(false);
        b_cycle = new QPushButton(grpbx_numpad);
        b_cycle->setObjectName(QString::fromUtf8("b_cycle"));
        b_cycle->setGeometry(QRect(110, 130, 41, 31));
        QFont font;
        font.setPointSize(8);
        b_cycle->setFont(font);
        grpbx_direc_arrows = new QGroupBox(frame_2);
        grpbx_direc_arrows->setObjectName(QString::fromUtf8("grpbx_direc_arrows"));
        grpbx_direc_arrows->setGeometry(QRect(20, 10, 121, 121));
        b_up = new QPushButton(grpbx_direc_arrows);
        b_up->setObjectName(QString::fromUtf8("b_up"));
        b_up->setGeometry(QRect(30, 0, 61, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        b_up->setFont(font1);
        b_down = new QPushButton(grpbx_direc_arrows);
        b_down->setObjectName(QString::fromUtf8("b_down"));
        b_down->setGeometry(QRect(30, 90, 61, 31));
        b_down->setFont(font1);
        b_right = new QPushButton(grpbx_direc_arrows);
        b_right->setObjectName(QString::fromUtf8("b_right"));
        b_right->setGeometry(QRect(90, 30, 31, 61));
        b_right->setFont(font1);
        b_left = new QPushButton(grpbx_direc_arrows);
        b_left->setObjectName(QString::fromUtf8("b_left"));
        b_left->setGeometry(QRect(0, 30, 31, 61));
        b_left->setFont(font1);
        b_ok = new QPushButton(grpbx_direc_arrows);
        b_ok->setObjectName(QString::fromUtf8("b_ok"));
        b_ok->setGeometry(QRect(40, 40, 41, 41));
        b_ok->setFont(font1);
        frame_3 = new QFrame(tab_telec);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(250, 20, 161, 321));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        grpbx_baxy = new QGroupBox(frame_3);
        grpbx_baxy->setObjectName(QString::fromUtf8("grpbx_baxy"));
        grpbx_baxy->setGeometry(QRect(20, 30, 121, 121));
        b_up_2 = new QPushButton(grpbx_baxy);
        b_up_2->setObjectName(QString::fromUtf8("b_up_2"));
        b_up_2->setGeometry(QRect(40, 0, 41, 41));
        b_up_2->setFont(font1);
        b_up_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        b_right_2 = new QPushButton(grpbx_baxy);
        b_right_2->setObjectName(QString::fromUtf8("b_right_2"));
        b_right_2->setGeometry(QRect(80, 40, 41, 41));
        b_right_2->setFont(font1);
        b_right_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 0);"));
        b_down_2 = new QPushButton(grpbx_baxy);
        b_down_2->setObjectName(QString::fromUtf8("b_down_2"));
        b_down_2->setGeometry(QRect(40, 80, 41, 41));
        b_down_2->setFont(font1);
        b_down_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 255);"));
        b_left_2 = new QPushButton(grpbx_baxy);
        b_left_2->setObjectName(QString::fromUtf8("b_left_2"));
        b_left_2->setGeometry(QRect(0, 40, 41, 41));
        b_left_2->setFont(font1);
        b_left_2->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 0);"));
        b_vol_plus = new QPushButton(frame_3);
        b_vol_plus->setObjectName(QString::fromUtf8("b_vol_plus"));
        b_vol_plus->setGeometry(QRect(30, 190, 41, 31));
        b_vol_plus->setFont(font1);
        b_prgm_plus = new QPushButton(frame_3);
        b_prgm_plus->setObjectName(QString::fromUtf8("b_prgm_plus"));
        b_prgm_plus->setGeometry(QRect(90, 190, 41, 31));
        b_prgm_plus->setFont(font1);
        b_prgm_minus = new QPushButton(frame_3);
        b_prgm_minus->setObjectName(QString::fromUtf8("b_prgm_minus"));
        b_prgm_minus->setGeometry(QRect(90, 260, 41, 31));
        b_prgm_minus->setFont(font1);
        b_vol_minus = new QPushButton(frame_3);
        b_vol_minus->setObjectName(QString::fromUtf8("b_vol_minus"));
        b_vol_minus->setGeometry(QRect(30, 260, 41, 31));
        b_vol_minus->setFont(font1);
        lbl_vol = new QLabel(frame_3);
        lbl_vol->setObjectName(QString::fromUtf8("lbl_vol"));
        lbl_vol->setGeometry(QRect(40, 230, 31, 17));
        lbl_prgm = new QLabel(frame_3);
        lbl_prgm->setObjectName(QString::fromUtf8("lbl_prgm"));
        lbl_prgm->setGeometry(QRect(90, 230, 41, 17));
        frame_4 = new QFrame(tab_telec);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(440, 20, 121, 321));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_2 = new QWidget(frame_4);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 121, 321));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        b_power = new QPushButton(gridLayoutWidget_2);
        b_power->setObjectName(QString::fromUtf8("b_power"));
        b_power->setMinimumSize(QSize(0, 35));
        b_power->setMaximumSize(QSize(80, 16777215));
        b_power->setAutoFillBackground(false);
        b_power->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font-weight:bold;"));
        b_power->setFlat(false);

        gridLayout_2->addWidget(b_power, 0, 0, 1, 1);

        b_free = new QPushButton(gridLayoutWidget_2);
        b_free->setObjectName(QString::fromUtf8("b_free"));
        b_free->setMinimumSize(QSize(0, 35));
        b_free->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(b_free, 2, 0, 1, 1);

        b_list = new QPushButton(gridLayoutWidget_2);
        b_list->setObjectName(QString::fromUtf8("b_list"));
        b_list->setMinimumSize(QSize(0, 35));
        b_list->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(b_list, 5, 0, 1, 1);

        b_mute = new QPushButton(gridLayoutWidget_2);
        b_mute->setObjectName(QString::fromUtf8("b_mute"));
        b_mute->setMinimumSize(QSize(0, 35));
        b_mute->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(b_mute, 7, 0, 1, 1);

        b_epgfbx = new QPushButton(gridLayoutWidget_2);
        b_epgfbx->setObjectName(QString::fromUtf8("b_epgfbx"));
        b_epgfbx->setMinimumSize(QSize(0, 35));
        b_epgfbx->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(b_epgfbx, 4, 0, 1, 1);

        b_info = new QPushButton(gridLayoutWidget_2);
        b_info->setObjectName(QString::fromUtf8("b_info"));
        b_info->setMinimumSize(QSize(0, 35));
        b_info->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(b_info, 3, 0, 1, 1);

        b_rep = new QPushButton(gridLayoutWidget_2);
        b_rep->setObjectName(QString::fromUtf8("b_rep"));
        b_rep->setMinimumSize(QSize(0, 35));
        b_rep->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(b_rep, 6, 0, 1, 1);

        frame_5 = new QFrame(tab_telec);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(120, 370, 381, 51));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        b_playpause = new QPushButton(frame_5);
        b_playpause->setObjectName(QString::fromUtf8("b_playpause"));
        b_playpause->setGeometry(QRect(170, 10, 41, 31));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        b_playpause->setFont(font2);
        b_stop = new QPushButton(frame_5);
        b_stop->setObjectName(QString::fromUtf8("b_stop"));
        b_stop->setGeometry(QRect(220, 10, 41, 31));
        QFont font3;
        font3.setPointSize(9);
        b_stop->setFont(font3);
        b_avancerapide = new QPushButton(frame_5);
        b_avancerapide->setObjectName(QString::fromUtf8("b_avancerapide"));
        b_avancerapide->setGeometry(QRect(270, 10, 41, 31));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        b_avancerapide->setFont(font4);
        b_nextchap = new QPushButton(frame_5);
        b_nextchap->setObjectName(QString::fromUtf8("b_nextchap"));
        b_nextchap->setGeometry(QRect(320, 10, 41, 31));
        b_nextchap->setFont(font4);
        b_retourrapide = new QPushButton(frame_5);
        b_retourrapide->setObjectName(QString::fromUtf8("b_retourrapide"));
        b_retourrapide->setGeometry(QRect(120, 10, 41, 31));
        b_retourrapide->setFont(font4);
        b_prevchap = new QPushButton(frame_5);
        b_prevchap->setObjectName(QString::fromUtf8("b_prevchap"));
        b_prevchap->setGeometry(QRect(70, 10, 41, 31));
        b_prevchap->setFont(font4);
        b_rec = new QPushButton(frame_5);
        b_rec->setObjectName(QString::fromUtf8("b_rec"));
        b_rec->setGeometry(QRect(20, 10, 41, 31));
        b_rec->setFont(font3);
        b_rec->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        tabWidget->addTab(tab_telec, QString());
        tab_mosaique = new QWidget();
        tab_mosaique->setObjectName(QString::fromUtf8("tab_mosaique"));
        gridLayoutWidget = new QWidget(tab_mosaique);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 571, 401));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        b_tf1 = new QPushButton(gridLayoutWidget);
        b_tf1->setObjectName(QString::fromUtf8("b_tf1"));
        b_tf1->setMinimumSize(QSize(0, 50));
        b_tf1->setMaximumSize(QSize(100, 16777215));
        QFont font5;
        font5.setPointSize(13);
        b_tf1->setFont(font5);

        gridLayout->addWidget(b_tf1, 0, 0, 1, 1);

        b_fr2 = new QPushButton(gridLayoutWidget);
        b_fr2->setObjectName(QString::fromUtf8("b_fr2"));
        b_fr2->setMinimumSize(QSize(0, 50));
        b_fr2->setMaximumSize(QSize(100, 16777215));
        b_fr2->setFont(font5);

        gridLayout->addWidget(b_fr2, 0, 1, 1, 1);

        b_fr3 = new QPushButton(gridLayoutWidget);
        b_fr3->setObjectName(QString::fromUtf8("b_fr3"));
        b_fr3->setMinimumSize(QSize(0, 50));
        b_fr3->setMaximumSize(QSize(100, 16777215));
        b_fr3->setFont(font5);

        gridLayout->addWidget(b_fr3, 0, 2, 1, 1);

        b_cplus = new QPushButton(gridLayoutWidget);
        b_cplus->setObjectName(QString::fromUtf8("b_cplus"));
        b_cplus->setMinimumSize(QSize(0, 50));
        b_cplus->setMaximumSize(QSize(100, 16777215));
        b_cplus->setFont(font5);

        gridLayout->addWidget(b_cplus, 0, 3, 1, 1);

        b_fr5 = new QPushButton(gridLayoutWidget);
        b_fr5->setObjectName(QString::fromUtf8("b_fr5"));
        b_fr5->setMinimumSize(QSize(0, 50));
        b_fr5->setMaximumSize(QSize(100, 16777215));
        b_fr5->setFont(font5);

        gridLayout->addWidget(b_fr5, 1, 0, 1, 1);

        b_m6 = new QPushButton(gridLayoutWidget);
        b_m6->setObjectName(QString::fromUtf8("b_m6"));
        b_m6->setMinimumSize(QSize(0, 50));
        b_m6->setMaximumSize(QSize(100, 16777215));
        b_m6->setFont(font5);

        gridLayout->addWidget(b_m6, 1, 1, 1, 1);

        b_arte = new QPushButton(gridLayoutWidget);
        b_arte->setObjectName(QString::fromUtf8("b_arte"));
        b_arte->setMinimumSize(QSize(0, 50));
        b_arte->setMaximumSize(QSize(100, 16777215));
        b_arte->setFont(font5);

        gridLayout->addWidget(b_arte, 1, 2, 1, 1);

        b_d8 = new QPushButton(gridLayoutWidget);
        b_d8->setObjectName(QString::fromUtf8("b_d8"));
        b_d8->setMinimumSize(QSize(0, 50));
        b_d8->setMaximumSize(QSize(100, 16777215));
        b_d8->setFont(font5);

        gridLayout->addWidget(b_d8, 1, 3, 1, 1);

        b_w9 = new QPushButton(gridLayoutWidget);
        b_w9->setObjectName(QString::fromUtf8("b_w9"));
        b_w9->setMinimumSize(QSize(0, 50));
        b_w9->setMaximumSize(QSize(100, 16777215));
        b_w9->setFont(font5);

        gridLayout->addWidget(b_w9, 2, 0, 1, 1);

        b_lcp = new QPushButton(gridLayoutWidget);
        b_lcp->setObjectName(QString::fromUtf8("b_lcp"));
        b_lcp->setMinimumSize(QSize(0, 50));
        b_lcp->setMaximumSize(QSize(100, 16777215));
        b_lcp->setFont(font5);

        gridLayout->addWidget(b_lcp, 3, 0, 1, 1);

        b_tmc = new QPushButton(gridLayoutWidget);
        b_tmc->setObjectName(QString::fromUtf8("b_tmc"));
        b_tmc->setMinimumSize(QSize(0, 50));
        b_tmc->setMaximumSize(QSize(100, 16777215));
        b_tmc->setFont(font5);

        gridLayout->addWidget(b_tmc, 2, 1, 1, 1);

        b_nt1 = new QPushButton(gridLayoutWidget);
        b_nt1->setObjectName(QString::fromUtf8("b_nt1"));
        b_nt1->setMinimumSize(QSize(0, 50));
        b_nt1->setMaximumSize(QSize(100, 16777215));
        b_nt1->setFont(font5);

        gridLayout->addWidget(b_nt1, 2, 2, 1, 1);

        b_nrj12 = new QPushButton(gridLayoutWidget);
        b_nrj12->setObjectName(QString::fromUtf8("b_nrj12"));
        b_nrj12->setMinimumSize(QSize(0, 50));
        b_nrj12->setMaximumSize(QSize(100, 16777215));
        b_nrj12->setFont(font5);

        gridLayout->addWidget(b_nrj12, 2, 3, 1, 1);

        b_fr4 = new QPushButton(gridLayoutWidget);
        b_fr4->setObjectName(QString::fromUtf8("b_fr4"));
        b_fr4->setMinimumSize(QSize(0, 50));
        b_fr4->setMaximumSize(QSize(100, 16777215));
        b_fr4->setFont(font5);

        gridLayout->addWidget(b_fr4, 3, 1, 1, 1);

        b_bfm = new QPushButton(gridLayoutWidget);
        b_bfm->setObjectName(QString::fromUtf8("b_bfm"));
        b_bfm->setMinimumSize(QSize(0, 50));
        b_bfm->setMaximumSize(QSize(100, 16777215));
        b_bfm->setFont(font5);

        gridLayout->addWidget(b_bfm, 3, 2, 1, 1);

        b_itv = new QPushButton(gridLayoutWidget);
        b_itv->setObjectName(QString::fromUtf8("b_itv"));
        b_itv->setMinimumSize(QSize(0, 50));
        b_itv->setMaximumSize(QSize(100, 16777215));
        b_itv->setFont(font5);

        gridLayout->addWidget(b_itv, 3, 3, 1, 1);

        b_dstar = new QPushButton(gridLayoutWidget);
        b_dstar->setObjectName(QString::fromUtf8("b_dstar"));
        b_dstar->setMinimumSize(QSize(0, 50));
        b_dstar->setMaximumSize(QSize(100, 16777215));
        b_dstar->setFont(font5);

        gridLayout->addWidget(b_dstar, 4, 0, 1, 1);

        b_gulli = new QPushButton(gridLayoutWidget);
        b_gulli->setObjectName(QString::fromUtf8("b_gulli"));
        b_gulli->setMinimumSize(QSize(0, 50));
        b_gulli->setMaximumSize(QSize(100, 16777215));
        b_gulli->setFont(font5);

        gridLayout->addWidget(b_gulli, 4, 1, 1, 1);

        b_fro = new QPushButton(gridLayoutWidget);
        b_fro->setObjectName(QString::fromUtf8("b_fro"));
        b_fro->setMinimumSize(QSize(0, 50));
        b_fro->setMaximumSize(QSize(100, 16777215));
        b_fro->setFont(font5);

        gridLayout->addWidget(b_fro, 4, 2, 1, 1);

        tabWidget->addTab(tab_mosaique, QString());
        tab_guide = new QWidget();
        tab_guide->setObjectName(QString::fromUtf8("tab_guide"));
        b_prev = new QPushButton(tab_guide);
        b_prev->setObjectName(QString::fromUtf8("b_prev"));
        b_prev->setGeometry(QRect(10, 10, 61, 27));
        b_fw = new QPushButton(tab_guide);
        b_fw->setObjectName(QString::fromUtf8("b_fw"));
        b_fw->setGeometry(QRect(80, 10, 61, 27));
        b_refresh = new QPushButton(tab_guide);
        b_refresh->setObjectName(QString::fromUtf8("b_refresh"));
        b_refresh->setGeometry(QRect(150, 10, 81, 27));
        cbox_site = new QComboBox(tab_guide);
        cbox_site->setObjectName(QString::fromUtf8("cbox_site"));
        cbox_site->setGeometry(QRect(450, 10, 161, 27));
        b_home = new QPushButton(tab_guide);
        b_home->setObjectName(QString::fromUtf8("b_home"));
        b_home->setGeometry(QRect(240, 10, 81, 27));
        lbl_nav_state = new QLabel(tab_guide);
        lbl_nav_state->setObjectName(QString::fromUtf8("lbl_nav_state"));
        lbl_nav_state->setGeometry(QRect(10, 419, 101, 17));
        prgrbar_browser = new QProgressBar(tab_guide);
        prgrbar_browser->setObjectName(QString::fromUtf8("prgrbar_browser"));
        prgrbar_browser->setGeometry(QRect(110, 419, 261, 20));
        prgrbar_browser->setValue(0);
        prgrbar_browser->setTextVisible(true);
        web_frame = new QFrame(tab_guide);
        web_frame->setObjectName(QString::fromUtf8("web_frame"));
        web_frame->setGeometry(QRect(10, 50, 601, 361));
        web_frame->setMinimumSize(QSize(601, 361));
        web_frame->setMaximumSize(QSize(601, 361));
        web_frame->setFrameShape(QFrame::StyledPanel);
        web_frame->setFrameShadow(QFrame::Raised);
        tabWidget->addTab(tab_guide, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbl_version = new QLabel(centralWidget);
        lbl_version->setObjectName(QString::fromUtf8("lbl_version"));

        horizontalLayout->addWidget(lbl_version);

        lbl_actual_version = new QLabel(centralWidget);
        lbl_actual_version->setObjectName(QString::fromUtf8("lbl_actual_version"));

        horizontalLayout->addWidget(lbl_actual_version);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lbl_updt_availability = new QLabel(centralWidget);
        lbl_updt_availability->setObjectName(QString::fromUtf8("lbl_updt_availability"));

        horizontalLayout->addWidget(lbl_updt_availability);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 25));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        menuProfil = new QMenu(menuBar);
        menuProfil->setObjectName(QString::fromUtf8("menuProfil"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuProfil->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuFichier->addAction(actionToujours_au_dessus);
        menuFichier->addAction(actionPr_f_rences);
        menuFichier->addAction(actionQuitter);
        menuAide->addAction(actionAide);
        menuAide->addAction(action_Propos);
        menuAide->addSeparator();
        menuAide->addAction(actionV_rifier_les_mises_jour);
        menuAide->addAction(actionSite_internet);
        menuProfil->addAction(actionProfil_1);
        menuProfil->addAction(actionProfil_2);
        menuProfil->addAction(actionProfil_3);

        retranslateUi(MainWindow);
        QObject::connect(actionQuitter, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FreeStance", 0, QApplication::UnicodeUTF8));
        actionPr_f_rences->setText(QApplication::translate("MainWindow", "Pr\303\251f\303\251rences", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionProfil_1->setText(QApplication::translate("MainWindow", "Profil 1", 0, QApplication::UnicodeUTF8));
        actionProfil_2->setText(QApplication::translate("MainWindow", "Profil 2", 0, QApplication::UnicodeUTF8));
        actionProfil_3->setText(QApplication::translate("MainWindow", "Profil 3", 0, QApplication::UnicodeUTF8));
        actionAide->setText(QApplication::translate("MainWindow", "Aide", 0, QApplication::UnicodeUTF8));
        action_Propos->setText(QApplication::translate("MainWindow", "\303\200 propos", 0, QApplication::UnicodeUTF8));
        actionV_rifier_les_mises_jour->setText(QApplication::translate("MainWindow", "V\303\251rifier les mises \303\240 jour", 0, QApplication::UnicodeUTF8));
        actionSite_internet->setText(QApplication::translate("MainWindow", "Site internet", 0, QApplication::UnicodeUTF8));
        actionToujours_au_dessus->setText(QApplication::translate("MainWindow", "Toujours au-dessus", 0, QApplication::UnicodeUTF8));
        grpbx_numpad->setTitle(QString());
        b_1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        b_2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        b_3->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        b_4->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        b_5->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        b_6->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        b_7->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        b_8->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        b_9->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        b_0->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        b_yellow_arrow->setText(QApplication::translate("MainWindow", "\342\206\220", 0, QApplication::UnicodeUTF8));
        b_cycle->setText(QApplication::translate("MainWindow", "Ch.\n"
"cycle", 0, QApplication::UnicodeUTF8));
        grpbx_direc_arrows->setTitle(QString());
        b_up->setText(QApplication::translate("MainWindow", "\342\226\262", 0, QApplication::UnicodeUTF8));
        b_down->setText(QApplication::translate("MainWindow", "\342\226\274", 0, QApplication::UnicodeUTF8));
        b_right->setText(QApplication::translate("MainWindow", "\342\226\272", 0, QApplication::UnicodeUTF8));
        b_left->setText(QApplication::translate("MainWindow", "\342\227\204", 0, QApplication::UnicodeUTF8));
        b_ok->setText(QApplication::translate("MainWindow", "OK", 0, QApplication::UnicodeUTF8));
        grpbx_baxy->setTitle(QString());
        b_up_2->setText(QApplication::translate("MainWindow", "B", 0, QApplication::UnicodeUTF8));
        b_right_2->setText(QApplication::translate("MainWindow", "A", 0, QApplication::UnicodeUTF8));
        b_down_2->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        b_left_2->setText(QApplication::translate("MainWindow", "Y", 0, QApplication::UnicodeUTF8));
        b_vol_plus->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        b_prgm_plus->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        b_prgm_minus->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        b_vol_minus->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        lbl_vol->setText(QApplication::translate("MainWindow", "Vol.", 0, QApplication::UnicodeUTF8));
        lbl_prgm->setText(QApplication::translate("MainWindow", "Prgm.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        b_power->setToolTip(QApplication::translate("MainWindow", "Allumer/\303\211teindre la Freebox", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        b_power->setText(QApplication::translate("MainWindow", "Power", 0, QApplication::UnicodeUTF8));
        b_free->setText(QApplication::translate("MainWindow", "Free", 0, QApplication::UnicodeUTF8));
        b_list->setText(QApplication::translate("MainWindow", "Liste", 0, QApplication::UnicodeUTF8));
        b_mute->setText(QApplication::translate("MainWindow", "Muet", 0, QApplication::UnicodeUTF8));
        b_epgfbx->setText(QApplication::translate("MainWindow", "Guide", 0, QApplication::UnicodeUTF8));
        b_info->setText(QApplication::translate("MainWindow", "Info", 0, QApplication::UnicodeUTF8));
        b_rep->setText(QApplication::translate("MainWindow", "R\303\251pondeur", 0, QApplication::UnicodeUTF8));
        b_playpause->setText(QApplication::translate("MainWindow", "\342\226\272II", 0, QApplication::UnicodeUTF8));
        b_stop->setText(QApplication::translate("MainWindow", "\342\226\240", 0, QApplication::UnicodeUTF8));
        b_avancerapide->setText(QApplication::translate("MainWindow", ">", 0, QApplication::UnicodeUTF8));
        b_nextchap->setText(QApplication::translate("MainWindow", "\302\273", 0, QApplication::UnicodeUTF8));
        b_retourrapide->setText(QApplication::translate("MainWindow", "<", 0, QApplication::UnicodeUTF8));
        b_prevchap->setText(QApplication::translate("MainWindow", "\302\253", 0, QApplication::UnicodeUTF8));
        b_rec->setText(QApplication::translate("MainWindow", "\342\227\217", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_telec), QApplication::translate("MainWindow", "T\303\251l\303\251commande", 0, QApplication::UnicodeUTF8));
        b_tf1->setText(QApplication::translate("MainWindow", "TF1", 0, QApplication::UnicodeUTF8));
        b_fr2->setText(QApplication::translate("MainWindow", "France 2", 0, QApplication::UnicodeUTF8));
        b_fr3->setText(QApplication::translate("MainWindow", "France 3", 0, QApplication::UnicodeUTF8));
        b_cplus->setText(QApplication::translate("MainWindow", "Canal +", 0, QApplication::UnicodeUTF8));
        b_fr5->setText(QApplication::translate("MainWindow", "France 5", 0, QApplication::UnicodeUTF8));
        b_m6->setText(QApplication::translate("MainWindow", "M6", 0, QApplication::UnicodeUTF8));
        b_arte->setText(QApplication::translate("MainWindow", "Arte", 0, QApplication::UnicodeUTF8));
        b_d8->setText(QApplication::translate("MainWindow", "Direct 8", 0, QApplication::UnicodeUTF8));
        b_w9->setText(QApplication::translate("MainWindow", "W9", 0, QApplication::UnicodeUTF8));
        b_lcp->setText(QApplication::translate("MainWindow", "LCP", 0, QApplication::UnicodeUTF8));
        b_tmc->setText(QApplication::translate("MainWindow", "TMC", 0, QApplication::UnicodeUTF8));
        b_nt1->setText(QApplication::translate("MainWindow", "NT1", 0, QApplication::UnicodeUTF8));
        b_nrj12->setText(QApplication::translate("MainWindow", "NRJ12", 0, QApplication::UnicodeUTF8));
        b_fr4->setText(QApplication::translate("MainWindow", "France 4", 0, QApplication::UnicodeUTF8));
        b_bfm->setText(QApplication::translate("MainWindow", "BFM TV", 0, QApplication::UnicodeUTF8));
        b_itv->setText(QApplication::translate("MainWindow", "i>TELE", 0, QApplication::UnicodeUTF8));
        b_dstar->setText(QApplication::translate("MainWindow", "Direct Star", 0, QApplication::UnicodeUTF8));
        b_gulli->setText(QApplication::translate("MainWindow", "Gulli", 0, QApplication::UnicodeUTF8));
        b_fro->setText(QApplication::translate("MainWindow", "France \303\224", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_mosaique), QApplication::translate("MainWindow", "Mosa\303\257que", 0, QApplication::UnicodeUTF8));
        b_prev->setText(QApplication::translate("MainWindow", "\342\206\220", 0, QApplication::UnicodeUTF8));
        b_fw->setText(QApplication::translate("MainWindow", "\342\206\222", 0, QApplication::UnicodeUTF8));
        b_refresh->setText(QApplication::translate("MainWindow", "Actualiser", 0, QApplication::UnicodeUTF8));
        cbox_site->clear();
        cbox_site->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "TV-Express.com", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Programme-TV.net", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "CesoirTV.com", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "TVMag.com", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Programme.TV", 0, QApplication::UnicodeUTF8)
        );
        b_home->setText(QApplication::translate("MainWindow", "Accueil", 0, QApplication::UnicodeUTF8));
        lbl_nav_state->setText(QApplication::translate("MainWindow", "Chargement...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_guide), QApplication::translate("MainWindow", "Guide", 0, QApplication::UnicodeUTF8));
        lbl_version->setText(QApplication::translate("MainWindow", "Version", 0, QApplication::UnicodeUTF8));
        lbl_actual_version->setText(QApplication::translate("MainWindow", "VERSION", 0, QApplication::UnicodeUTF8));
        lbl_updt_availability->setText(QApplication::translate("MainWindow", "V\303\251rification des mises \303\240 jour...", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "&Fichier", 0, QApplication::UnicodeUTF8));
        menuAide->setTitle(QApplication::translate("MainWindow", "?", 0, QApplication::UnicodeUTF8));
        menuProfil->setTitle(QApplication::translate("MainWindow", "&Profil", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
