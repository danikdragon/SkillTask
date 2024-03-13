/****************************************************************************
** Meta object code from reading C++ file 'Controler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Controler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Controler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TvControler_t {
    QByteArrayData data[17];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TvControler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TvControler_t qt_meta_stringdata_TvControler = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TvControler"
QT_MOC_LITERAL(1, 12, 5), // "set_0"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 5), // "set_1"
QT_MOC_LITERAL(4, 25, 5), // "set_2"
QT_MOC_LITERAL(5, 31, 5), // "set_3"
QT_MOC_LITERAL(6, 37, 5), // "set_4"
QT_MOC_LITERAL(7, 43, 5), // "set_5"
QT_MOC_LITERAL(8, 49, 5), // "set_6"
QT_MOC_LITERAL(9, 55, 5), // "set_7"
QT_MOC_LITERAL(10, 61, 5), // "set_8"
QT_MOC_LITERAL(11, 67, 5), // "set_9"
QT_MOC_LITERAL(12, 73, 4), // "plus"
QT_MOC_LITERAL(13, 78, 5), // "minus"
QT_MOC_LITERAL(14, 84, 4), // "next"
QT_MOC_LITERAL(15, 89, 8), // "previous"
QT_MOC_LITERAL(16, 98, 9) // "start_end"

    },
    "TvControler\0set_0\0\0set_1\0set_2\0set_3\0"
    "set_4\0set_5\0set_6\0set_7\0set_8\0set_9\0"
    "plus\0minus\0next\0previous\0start_end"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TvControler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    0,   95,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    0,   99,    2, 0x0a /* Public */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    0,  101,    2, 0x0a /* Public */,
      15,    0,  102,    2, 0x0a /* Public */,
      16,    0,  103,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TvControler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TvControler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_0(); break;
        case 1: _t->set_1(); break;
        case 2: _t->set_2(); break;
        case 3: _t->set_3(); break;
        case 4: _t->set_4(); break;
        case 5: _t->set_5(); break;
        case 6: _t->set_6(); break;
        case 7: _t->set_7(); break;
        case 8: _t->set_8(); break;
        case 9: _t->set_9(); break;
        case 10: _t->plus(); break;
        case 11: _t->minus(); break;
        case 12: _t->next(); break;
        case 13: _t->previous(); break;
        case 14: _t->start_end(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TvControler::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TvControler.data,
    qt_meta_data_TvControler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TvControler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TvControler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TvControler.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TvControler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
