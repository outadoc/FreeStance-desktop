/****************************************************************************
** Meta object code from reading C++ file 'options.h'
**
** Created: Tue Jun 14 17:36:01 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "options.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'options.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Options[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   36,    8,    8, 0x0a,
      87,   84,    8,    8, 0x0a,
     123,    8,    8,    8, 0x0a,
     153,    8,    8,    8, 0x0a,
     171,    8,    8,    8, 0x0a,
     193,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Options[] = {
    "Options\0\0saveLastEditedProfile(int)\0"
    "profile\0on_cbox_profil_currentIndexChanged(int)\0"
    "hd\0on_cbox_hd_currentIndexChanged(int)\0"
    "on_txtfield_code_textEdited()\0"
    "on_b_ok_clicked()\0on_b_cancel_clicked()\0"
    "on_b_help_clicked()\0"
};

const QMetaObject Options::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Options,
      qt_meta_data_Options, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Options::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Options::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Options::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Options))
        return static_cast<void*>(const_cast< Options*>(this));
    return QDialog::qt_metacast(_clname);
}

int Options::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveLastEditedProfile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: on_cbox_profil_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_cbox_hd_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_txtfield_code_textEdited(); break;
        case 4: on_b_ok_clicked(); break;
        case 5: on_b_cancel_clicked(); break;
        case 6: on_b_help_clicked(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Options::saveLastEditedProfile(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
