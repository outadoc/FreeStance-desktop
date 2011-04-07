/*
   options.h
   FreeStance 2.0
   outadoc (Baptiste Candellier)
   2011
*/

#ifndef OPTIONS_H
#define OPTIONS_H

#include <QDialog>
#include "appsettings.h"
#include "profile.h"

namespace Ui {
    class Options;
}

class Options : public QDialog
{
    Q_OBJECT

public:
    explicit Options(QWidget *parent = 0);
    ~Options();

public slots:
    void on_cbox_profil_currentIndexChanged(int profile);
    void on_cbox_hd_currentIndexChanged(int hd);
    void on_txtfield_code_textEdited();
    void on_b_ok_clicked();
    void on_b_cancel_clicked();

signals:
    void saveLastEditedProfile(int);

private:
    Ui::Options *ui;
    Profile *profile1;
    Profile *profile2;
    Profile *profile3;
    QSettings *qsettingstable;
};

#endif // OPTIONS_H
