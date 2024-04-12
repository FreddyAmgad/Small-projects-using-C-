/****************************************************************************
** Meta object code from reading C++ file 'date_time.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../date_time.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'date_time.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Date_Time_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Date_Time_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Date_Time_t qt_meta_stringdata_Date_Time = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Date_Time"
QT_MOC_LITERAL(1, 10, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "arg1"
QT_MOC_LITERAL(4, 38, 21) // "on_pushButton_clicked"

    },
    "Date_Time\0on_comboBox_activated\0\0arg1\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Date_Time[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void Date_Time::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Date_Time *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Date_Time::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Date_Time.data,
    qt_meta_data_Date_Time,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Date_Time::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Date_Time::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Date_Time.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Date_Time::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
