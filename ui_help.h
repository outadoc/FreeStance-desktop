/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created: Tue Jun 14 19:20:59 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QFrame *frame_image;
    QLabel *lbl_image;
    QLabel *label;
    QPushButton *b_prev;
    QPushButton *b_next;
    QFrame *frame_desc;
    QLabel *lbl_desc;
    QPushButton *b_close;
    QLabel *lbl_step;

    void setupUi(QDialog *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QString::fromUtf8("Help"));
        Help->resize(473, 449);
        Help->setMinimumSize(QSize(473, 449));
        Help->setMaximumSize(QSize(473, 449));
        frame_image = new QFrame(Help);
        frame_image->setObjectName(QString::fromUtf8("frame_image"));
        frame_image->setGeometry(QRect(60, 81, 351, 221));
        frame_image->setFrameShape(QFrame::StyledPanel);
        frame_image->setFrameShadow(QFrame::Raised);
        lbl_image = new QLabel(frame_image);
        lbl_image->setObjectName(QString::fromUtf8("lbl_image"));
        lbl_image->setGeometry(QRect(0, 0, 351, 221));
        lbl_image->setScaledContents(true);
        label = new QLabel(Help);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 101, 21));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        b_prev = new QPushButton(Help);
        b_prev->setObjectName(QString::fromUtf8("b_prev"));
        b_prev->setGeometry(QRect(20, 81, 31, 221));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        b_prev->setFont(font1);
        b_next = new QPushButton(Help);
        b_next->setObjectName(QString::fromUtf8("b_next"));
        b_next->setGeometry(QRect(420, 81, 31, 221));
        b_next->setFont(font1);
        frame_desc = new QFrame(Help);
        frame_desc->setObjectName(QString::fromUtf8("frame_desc"));
        frame_desc->setGeometry(QRect(20, 310, 431, 71));
        frame_desc->setFrameShape(QFrame::StyledPanel);
        frame_desc->setFrameShadow(QFrame::Raised);
        lbl_desc = new QLabel(frame_desc);
        lbl_desc->setObjectName(QString::fromUtf8("lbl_desc"));
        lbl_desc->setGeometry(QRect(0, 0, 431, 71));
        lbl_desc->setAlignment(Qt::AlignCenter);
        lbl_desc->setWordWrap(true);
        b_close = new QPushButton(Help);
        b_close->setObjectName(QString::fromUtf8("b_close"));
        b_close->setGeometry(QRect(140, 400, 191, 41));
        lbl_step = new QLabel(Help);
        lbl_step->setObjectName(QString::fromUtf8("lbl_step"));
        lbl_step->setGeometry(QRect(60, 50, 81, 21));

        retranslateUi(Help);
        QObject::connect(b_close, SIGNAL(clicked()), Help, SLOT(reject()));

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QDialog *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "Aide", 0, QApplication::UnicodeUTF8));
        lbl_image->setText(QString());
        label->setText(QApplication::translate("Help", "Pas-\303\240\302\240-pas", 0, QApplication::UnicodeUTF8));
        b_prev->setText(QApplication::translate("Help", "\342\227\204", 0, QApplication::UnicodeUTF8));
        b_next->setText(QApplication::translate("Help", "\342\226\272", 0, QApplication::UnicodeUTF8));
        lbl_desc->setText(QApplication::translate("Help", "Description", 0, QApplication::UnicodeUTF8));
        b_close->setText(QApplication::translate("Help", "Fermer", 0, QApplication::UnicodeUTF8));
        lbl_step->setText(QApplication::translate("Help", "Etape", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
