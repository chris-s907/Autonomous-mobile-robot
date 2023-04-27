/****************************************************************************
** Meta object code from reading C++ file 'rviz_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/interactive_tools/include/interactive_tools/rviz_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rviz_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_panel__simplePanel_t {
    QByteArrayData data[11];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_panel__simplePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_panel__simplePanel_t qt_meta_stringdata_rviz_panel__simplePanel = {
    {
QT_MOC_LITERAL(0, 0, 23), // "rviz_panel::simplePanel"
QT_MOC_LITERAL(1, 24, 21), // "on_button_1_1_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 21), // "on_button_1_2_clicked"
QT_MOC_LITERAL(4, 69, 21), // "on_button_2_1_clicked"
QT_MOC_LITERAL(5, 91, 21), // "on_button_2_2_clicked"
QT_MOC_LITERAL(6, 113, 21), // "on_button_2_3_clicked"
QT_MOC_LITERAL(7, 135, 21), // "on_button_2_4_clicked"
QT_MOC_LITERAL(8, 157, 21), // "on_button_3_1_clicked"
QT_MOC_LITERAL(9, 179, 21), // "on_button_3_2_clicked"
QT_MOC_LITERAL(10, 201, 21) // "on_button_3_3_clicked"

    },
    "rviz_panel::simplePanel\0on_button_1_1_clicked\0"
    "\0on_button_1_2_clicked\0on_button_2_1_clicked\0"
    "on_button_2_2_clicked\0on_button_2_3_clicked\0"
    "on_button_2_4_clicked\0on_button_3_1_clicked\0"
    "on_button_3_2_clicked\0on_button_3_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_panel__simplePanel[] = {

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

void rviz_panel::simplePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<simplePanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_button_1_1_clicked(); break;
        case 1: _t->on_button_1_2_clicked(); break;
        case 2: _t->on_button_2_1_clicked(); break;
        case 3: _t->on_button_2_2_clicked(); break;
        case 4: _t->on_button_2_3_clicked(); break;
        case 5: _t->on_button_2_4_clicked(); break;
        case 6: _t->on_button_3_1_clicked(); break;
        case 7: _t->on_button_3_2_clicked(); break;
        case 8: _t->on_button_3_3_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject rviz_panel::simplePanel::staticMetaObject = { {
    &rviz::Panel::staticMetaObject,
    qt_meta_stringdata_rviz_panel__simplePanel.data,
    qt_meta_data_rviz_panel__simplePanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_panel::simplePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_panel::simplePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_panel__simplePanel.stringdata0))
        return static_cast<void*>(this);
    return rviz::Panel::qt_metacast(_clname);
}

int rviz_panel::simplePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz::Panel::qt_metacall(_c, _id, _a);
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
