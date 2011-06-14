/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created: Tue Jun 14 17:35:40 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(429, 283);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Resources/logo-fb.png"), QSize(), QIcon::Normal, QIcon::Off);
        About->setWindowIcon(icon);
        pushButton = new QPushButton(About);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 220, 221, 41));
        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 20, 361, 171));
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 220, 131, 41));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/Resources/outa[dev].png")));
        label->setScaledContents(true);

        retranslateUi(About);
        QObject::connect(pushButton, SIGNAL(clicked(bool)), About, SLOT(accept()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "\303\200 Propos", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("About", "Fermer", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">FreeStance</span> est une application vous permettant </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">de contr\303\264ler votre Freebox depuis votre ordinateur, </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">sans avoir \303\240 aller chercher la t\303\251l\303\251commande !<br />Elle a \303\251t\303\251 d\303\251velopp\303\251e par outa[dev].<br />Vous pouvez contacter"
                        " le d\303\251veloppeur <a href=\"\\&quot;http://twitter.com/#!/outadoc\\&quot;\"><span style=\" text-decoration: underline; color:#0000ff;\">sur Twitter</span></a> </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ou <a href=\"\\&quot;mailto:admin@outadoc.fr\\&quot;\"><span style=\" text-decoration: underline; color:#0000ff;\">par email.</span></a><br /><br />Freebox est une marque d\303\251pos\303\251e de Free, SAS.<br />FreeStance est un programme distribu\303\251 sous license </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">GNU GPl.</p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
