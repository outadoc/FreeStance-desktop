/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Mar 8 00:31:14 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      47,   11,   11,   11, 0x0a,
      76,   11,   11,   11, 0x0a,
     106,   11,   11,   11, 0x0a,
     136,   11,   11,   11, 0x0a,
     166,   11,   11,   11, 0x0a,
     199,   11,   11,   11, 0x0a,
     239,   11,   11,   11, 0x0a,
     271,  265,   11,   11, 0x0a,
     306,  265,   11,   11, 0x0a,
     335,   11,   11,   11, 0x0a,
     398,  380,   11,   11, 0x0a,
     417,   11,   11,   11, 0x0a,
     437,   11,   11,   11, 0x0a,
     463,  452,   11,   11, 0x0a,
     479,  476,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_actionSite_internet_triggered()\0"
    "on_action_Propos_triggered()\0"
    "on_actionProfil_1_triggered()\0"
    "on_actionProfil_2_triggered()\0"
    "on_actionProfil_3_triggered()\0"
    "on_actionPr_f_rences_triggered()\0"
    "on_actionToujours_au_dessus_triggered()\0"
    "on_actionAide_triggered()\0reply\0"
    "checkUpdatesResult(QNetworkReply*)\0"
    "askForUpdate(QNetworkReply*)\0"
    "on_actionV_rifier_les_mises_jour_triggered()\0"
    "indexToNavigateTo\0changeWebsite(int)\0"
    "on_b_home_clicked()\0beginLoading()\0"
    "percentage\0loading(int)\0ok\0stopLoading(bool)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_actionSite_internet_triggered(); break;
        case 1: on_action_Propos_triggered(); break;
        case 2: on_actionProfil_1_triggered(); break;
        case 3: on_actionProfil_2_triggered(); break;
        case 4: on_actionProfil_3_triggered(); break;
        case 5: on_actionPr_f_rences_triggered(); break;
        case 6: on_actionToujours_au_dessus_triggered(); break;
        case 7: on_actionAide_triggered(); break;
        case 8: checkUpdatesResult((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: askForUpdate((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: on_actionV_rifier_les_mises_jour_triggered(); break;
        case 11: changeWebsite((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: on_b_home_clicked(); break;
        case 13: beginLoading(); break;
        case 14: loading((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: stopLoading((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
