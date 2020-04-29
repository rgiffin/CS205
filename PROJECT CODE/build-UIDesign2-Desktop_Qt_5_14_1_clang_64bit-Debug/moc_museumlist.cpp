/****************************************************************************
** Meta object code from reading C++ file 'museumlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../UIDesign2/museumlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'museumlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MuseumList_t {
    QByteArrayData data[11];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MuseumList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MuseumList_t qt_meta_stringdata_MuseumList = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MuseumList"
QT_MOC_LITERAL(1, 11, 21), // "on_homeButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 28), // "on_itemsViewedButton_clicked"
QT_MOC_LITERAL(4, 63, 27), // "on_myCommentsButton_clicked"
QT_MOC_LITERAL(5, 91, 24), // "on_accountButton_clicked"
QT_MOC_LITERAL(6, 116, 19), // "on_visit1_4_clicked"
QT_MOC_LITERAL(7, 136, 19), // "on_visit2_4_clicked"
QT_MOC_LITERAL(8, 156, 19), // "on_visit3_4_clicked"
QT_MOC_LITERAL(9, 176, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 198, 23) // "on_pushButton_2_clicked"

    },
    "MuseumList\0on_homeButton_clicked\0\0"
    "on_itemsViewedButton_clicked\0"
    "on_myCommentsButton_clicked\0"
    "on_accountButton_clicked\0on_visit1_4_clicked\0"
    "on_visit2_4_clicked\0on_visit3_4_clicked\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MuseumList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MuseumList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MuseumList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_homeButton_clicked(); break;
        case 1: _t->on_itemsViewedButton_clicked(); break;
        case 2: _t->on_myCommentsButton_clicked(); break;
        case 3: _t->on_accountButton_clicked(); break;
        case 4: _t->on_visit1_4_clicked(); break;
        case 5: _t->on_visit2_4_clicked(); break;
        case 6: _t->on_visit3_4_clicked(); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MuseumList::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MuseumList.data,
    qt_meta_data_MuseumList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MuseumList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MuseumList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MuseumList.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MuseumList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
