/*
   main.cpp
   FreeStance 2.0
   outadoc (Baptiste Candellier)
   2011
*/

#include <QtGui>
#include "mainwindow.h"
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //modification du charset
    QTextCodec::setCodecForLocale( QTextCodec::codecForName("UTF8") );
    QTextCodec::setCodecForCStrings( QTextCodec::codecForName("UTF8") );
    QTextCodec::setCodecForTr( QTextCodec::codecForName("UTF8") );

    //système de traduction
    QString locale = QLocale::system().name().section('_', 0, 0);
    QTranslator translator;
    translator.load(QString("qt_") + locale, QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    a.installTranslator(&translator);

    return a.exec();
}
