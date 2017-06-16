/****************************************************************************
** Meta object code from reading C++ file 'proyecto1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PROYECTO1/proyecto1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'proyecto1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PROYECTO1_t {
    QByteArrayData data[11];
    char stringdata[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PROYECTO1_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PROYECTO1_t qt_meta_stringdata_PROYECTO1 = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PROYECTO1"
QT_MOC_LITERAL(1, 10, 20), // "on_BtnCerrar_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 19), // "on_BtnNuevo_clicked"
QT_MOC_LITERAL(4, 52, 19), // "on_BtnAbrir_clicked"
QT_MOC_LITERAL(5, 72, 18), // "on_BtnSave_clicked"
QT_MOC_LITERAL(6, 91, 20), // "on_BtnSaveAs_clicked"
QT_MOC_LITERAL(7, 112, 22), // "on_BtnTraducir_clicked"
QT_MOC_LITERAL(8, 135, 12), // "crearArchivo"
QT_MOC_LITERAL(9, 148, 5), // "texto"
QT_MOC_LITERAL(10, 154, 30) // "on_LineaComandos_returnPressed"

    },
    "PROYECTO1\0on_BtnCerrar_clicked\0\0"
    "on_BtnNuevo_clicked\0on_BtnAbrir_clicked\0"
    "on_BtnSave_clicked\0on_BtnSaveAs_clicked\0"
    "on_BtnTraducir_clicked\0crearArchivo\0"
    "texto\0on_LineaComandos_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PROYECTO1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void PROYECTO1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PROYECTO1 *_t = static_cast<PROYECTO1 *>(_o);
        switch (_id) {
        case 0: _t->on_BtnCerrar_clicked(); break;
        case 1: _t->on_BtnNuevo_clicked(); break;
        case 2: _t->on_BtnAbrir_clicked(); break;
        case 3: _t->on_BtnSave_clicked(); break;
        case 4: _t->on_BtnSaveAs_clicked(); break;
        case 5: _t->on_BtnTraducir_clicked(); break;
        case 6: _t->crearArchivo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->on_LineaComandos_returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObject PROYECTO1::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PROYECTO1.data,
      qt_meta_data_PROYECTO1,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PROYECTO1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PROYECTO1::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PROYECTO1.stringdata))
        return static_cast<void*>(const_cast< PROYECTO1*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PROYECTO1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
