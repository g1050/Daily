/****************************************************************************
** Meta object code from reading C++ file 'manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Navigation_system/manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Manager_t {
    QByteArrayData data[20];
    char stringdata0[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Manager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Manager_t qt_meta_stringdata_Manager = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Manager"
QT_MOC_LITERAL(1, 8, 14), // "returnParentUI"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 21), // "on_btn_submit_clicked"
QT_MOC_LITERAL(4, 46, 21), // "on_btn_cancel_clicked"
QT_MOC_LITERAL(5, 68, 21), // "on_btn_search_clicked"
QT_MOC_LITERAL(6, 90, 18), // "on_btn_all_clicked"
QT_MOC_LITERAL(7, 109, 23), // "on_btn_submit_2_clicked"
QT_MOC_LITERAL(8, 133, 23), // "on_btn_cancel_2_clicked"
QT_MOC_LITERAL(9, 157, 20), // "on_btn_all_2_clicked"
QT_MOC_LITERAL(10, 178, 23), // "on_btn_search_2_clicked"
QT_MOC_LITERAL(11, 202, 19), // "on_btn_add2_clicked"
QT_MOC_LITERAL(12, 222, 22), // "on_btn_delete2_clicked"
QT_MOC_LITERAL(13, 245, 23), // "on_btn_distance_clicked"
QT_MOC_LITERAL(14, 269, 23), // "on_btn_submit_3_clicked"
QT_MOC_LITERAL(15, 293, 23), // "on_btn_cancel_3_clicked"
QT_MOC_LITERAL(16, 317, 20), // "on_btn_all_3_clicked"
QT_MOC_LITERAL(17, 338, 19), // "on_btn_add3_clicked"
QT_MOC_LITERAL(18, 358, 22), // "on_btn_delete3_clicked"
QT_MOC_LITERAL(19, 381, 23) // "on_btn_search_3_clicked"

    },
    "Manager\0returnParentUI\0\0on_btn_submit_clicked\0"
    "on_btn_cancel_clicked\0on_btn_search_clicked\0"
    "on_btn_all_clicked\0on_btn_submit_2_clicked\0"
    "on_btn_cancel_2_clicked\0on_btn_all_2_clicked\0"
    "on_btn_search_2_clicked\0on_btn_add2_clicked\0"
    "on_btn_delete2_clicked\0on_btn_distance_clicked\0"
    "on_btn_submit_3_clicked\0on_btn_cancel_3_clicked\0"
    "on_btn_all_3_clicked\0on_btn_add3_clicked\0"
    "on_btn_delete3_clicked\0on_btn_search_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Manager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  105,    2, 0x08 /* Private */,
       4,    0,  106,    2, 0x08 /* Private */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    0,  114,    2, 0x08 /* Private */,
      13,    0,  115,    2, 0x08 /* Private */,
      14,    0,  116,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,
      16,    0,  118,    2, 0x08 /* Private */,
      17,    0,  119,    2, 0x08 /* Private */,
      18,    0,  120,    2, 0x08 /* Private */,
      19,    0,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Manager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Manager *_t = static_cast<Manager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->returnParentUI(); break;
        case 1: _t->on_btn_submit_clicked(); break;
        case 2: _t->on_btn_cancel_clicked(); break;
        case 3: _t->on_btn_search_clicked(); break;
        case 4: _t->on_btn_all_clicked(); break;
        case 5: _t->on_btn_submit_2_clicked(); break;
        case 6: _t->on_btn_cancel_2_clicked(); break;
        case 7: _t->on_btn_all_2_clicked(); break;
        case 8: _t->on_btn_search_2_clicked(); break;
        case 9: _t->on_btn_add2_clicked(); break;
        case 10: _t->on_btn_delete2_clicked(); break;
        case 11: _t->on_btn_distance_clicked(); break;
        case 12: _t->on_btn_submit_3_clicked(); break;
        case 13: _t->on_btn_cancel_3_clicked(); break;
        case 14: _t->on_btn_all_3_clicked(); break;
        case 15: _t->on_btn_add3_clicked(); break;
        case 16: _t->on_btn_delete3_clicked(); break;
        case 17: _t->on_btn_search_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Manager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Manager::returnParentUI)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Manager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Manager.data,
      qt_meta_data_Manager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Manager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Manager.stringdata0))
        return static_cast<void*>(const_cast< Manager*>(this));
    return QWidget::qt_metacast(_clname);
}

int Manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Manager::returnParentUI()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
