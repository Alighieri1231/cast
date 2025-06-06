/****************************************************************************
** Meta object code from reading C++ file 'caster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "caster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Caster_t {
    QByteArrayData data[12];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Caster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Caster_t qt_meta_stringdata_Caster = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Caster"
QT_MOC_LITERAL(1, 7, 9), // "onConnect"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "onFreeze"
QT_MOC_LITERAL(4, 27, 11), // "onShallower"
QT_MOC_LITERAL(5, 39, 8), // "onDeeper"
QT_MOC_LITERAL(6, 48, 9), // "onRequest"
QT_MOC_LITERAL(7, 58, 10), // "onDownload"
QT_MOC_LITERAL(8, 69, 10), // "onAddLabel"
QT_MOC_LITERAL(9, 80, 10), // "onAddTrace"
QT_MOC_LITERAL(10, 91, 14), // "onCaptureImage"
QT_MOC_LITERAL(11, 106, 13) // "onClearScreen"

    },
    "Caster\0onConnect\0\0onFreeze\0onShallower\0"
    "onDeeper\0onRequest\0onDownload\0onAddLabel\0"
    "onAddTrace\0onCaptureImage\0onClearScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Caster[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,

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

       0        // eod
};

void Caster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Caster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConnect(); break;
        case 1: _t->onFreeze(); break;
        case 2: _t->onShallower(); break;
        case 3: _t->onDeeper(); break;
        case 4: _t->onRequest(); break;
        case 5: _t->onDownload(); break;
        case 6: _t->onAddLabel(); break;
        case 7: _t->onAddTrace(); break;
        case 8: _t->onCaptureImage(); break;
        case 9: _t->onClearScreen(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Caster::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Caster.data,
    qt_meta_data_Caster,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Caster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Caster::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Caster.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Caster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
