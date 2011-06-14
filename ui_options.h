/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created: Tue Jun 14 17:42:05 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Options
{
public:
    QLabel *lbl_img_settings;
    QComboBox *cbox_profil;
    QLabel *lbl_profil;
    QFrame *frame;
    QGroupBox *groupBox;
    QLabel *lbl_code;
    QLabel *lbl_hd;
    QComboBox *cbox_hd;
    QLineEdit *txtfield_code;
    QPushButton *b_ok;
    QPushButton *b_cancel;
    QPushButton *b_help;

    void setupUi(QDialog *Options)
    {
        if (Options->objectName().isEmpty())
            Options->setObjectName(QString::fromUtf8("Options"));
        Options->setWindowModality(Qt::ApplicationModal);
        Options->resize(338, 262);
        Options->setMinimumSize(QSize(338, 262));
        Options->setMaximumSize(QSize(338, 262));
        Options->setModal(true);
        lbl_img_settings = new QLabel(Options);
        lbl_img_settings->setObjectName(QString::fromUtf8("lbl_img_settings"));
        lbl_img_settings->setGeometry(QRect(10, 10, 61, 61));
        lbl_img_settings->setPixmap(QPixmap(QString::fromUtf8(":/menu_icons/Resources/settings_big.png")));
        lbl_img_settings->setScaledContents(true);
        cbox_profil = new QComboBox(Options);
        cbox_profil->setObjectName(QString::fromUtf8("cbox_profil"));
        cbox_profil->setGeometry(QRect(90, 40, 121, 27));
        lbl_profil = new QLabel(Options);
        lbl_profil->setObjectName(QString::fromUtf8("lbl_profil"));
        lbl_profil->setGeometry(QRect(90, 20, 111, 17));
        frame = new QFrame(Options);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(70, 80, 171, 151));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 161, 151));
        lbl_code = new QLabel(groupBox);
        lbl_code->setObjectName(QString::fromUtf8("lbl_code"));
        lbl_code->setGeometry(QRect(10, 80, 141, 31));
        lbl_hd = new QLabel(groupBox);
        lbl_hd->setObjectName(QString::fromUtf8("lbl_hd"));
        lbl_hd->setGeometry(QRect(10, 30, 51, 17));
        cbox_hd = new QComboBox(groupBox);
        cbox_hd->setObjectName(QString::fromUtf8("cbox_hd"));
        cbox_hd->setGeometry(QRect(10, 50, 131, 27));
        txtfield_code = new QLineEdit(groupBox);
        txtfield_code->setObjectName(QString::fromUtf8("txtfield_code"));
        txtfield_code->setGeometry(QRect(10, 110, 113, 27));
        txtfield_code->setMaxLength(8);
        b_ok = new QPushButton(Options);
        b_ok->setObjectName(QString::fromUtf8("b_ok"));
        b_ok->setGeometry(QRect(260, 40, 71, 41));
        b_cancel = new QPushButton(Options);
        b_cancel->setObjectName(QString::fromUtf8("b_cancel"));
        b_cancel->setGeometry(QRect(260, 90, 71, 41));
        b_help = new QPushButton(Options);
        b_help->setObjectName(QString::fromUtf8("b_help"));
        b_help->setGeometry(QRect(260, 140, 71, 31));
        b_help->setDefault(false);
        b_help->setFlat(false);

        retranslateUi(Options);

        QMetaObject::connectSlotsByName(Options);
    } // setupUi

    void retranslateUi(QDialog *Options)
    {
        Options->setWindowTitle(QApplication::translate("Options", "Options", 0, QApplication::UnicodeUTF8));
        lbl_img_settings->setText(QString());
        cbox_profil->clear();
        cbox_profil->insertItems(0, QStringList()
         << QApplication::translate("Options", "Profil 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Options", "Profil 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Options", "Profil 3", 0, QApplication::UnicodeUTF8)
        );
        lbl_profil->setText(QApplication::translate("Options", "Profil \303\240 modifier", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Options", "Modifier le profil", 0, QApplication::UnicodeUTF8));
        lbl_code->setText(QApplication::translate("Options", "Code t\303\251l\303\251commande", 0, QApplication::UnicodeUTF8));
        lbl_hd->setText(QApplication::translate("Options", "Bo\303\256tier", 0, QApplication::UnicodeUTF8));
        cbox_hd->clear();
        cbox_hd->insertItems(0, QStringList()
         << QApplication::translate("Options", "HD1 (Bo\303\256tier 1)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Options", "HD2 (Bo\303\256tier 2)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Options", "HD3 (Bo\303\256tier 3)", 0, QApplication::UnicodeUTF8)
        );
        b_ok->setText(QApplication::translate("Options", "OK", 0, QApplication::UnicodeUTF8));
        b_cancel->setText(QApplication::translate("Options", "Annuler", 0, QApplication::UnicodeUTF8));
        b_help->setText(QApplication::translate("Options", "Aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Options: public Ui_Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
