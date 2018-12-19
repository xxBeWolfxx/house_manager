/****************************************************************************
** Meta object code from reading C++ file 'MenuForm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MenuForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MenuForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MenuForm_t {
    QByteArrayData data[14];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MenuForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MenuForm_t qt_meta_stringdata_MenuForm = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MenuForm"
QT_MOC_LITERAL(1, 9, 12), // "Sending_Data"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 27), // "on_Button_save_quit_clicked"
QT_MOC_LITERAL(4, 51, 24), // "on_timerlist_itemClicked"
QT_MOC_LITERAL(5, 76, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(6, 93, 4), // "item"
QT_MOC_LITERAL(7, 98, 20), // "on_Button_on_clicked"
QT_MOC_LITERAL(8, 119, 21), // "on_Button_off_clicked"
QT_MOC_LITERAL(9, 141, 19), // "on_Timer_on_clicked"
QT_MOC_LITERAL(10, 161, 20), // "on_Timer_off_clicked"
QT_MOC_LITERAL(11, 182, 21), // "on_Button_set_clicked"
QT_MOC_LITERAL(12, 204, 10), // "counterout"
QT_MOC_LITERAL(13, 215, 10) // "stop_timer"

    },
    "MenuForm\0Sending_Data\0\0"
    "on_Button_save_quit_clicked\0"
    "on_timerlist_itemClicked\0QListWidgetItem*\0"
    "item\0on_Button_on_clicked\0"
    "on_Button_off_clicked\0on_Timer_on_clicked\0"
    "on_Timer_off_clicked\0on_Button_set_clicked\0"
    "counterout\0stop_timer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MenuForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MenuForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MenuForm *_t = static_cast<MenuForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Sending_Data(); break;
        case 1: _t->on_Button_save_quit_clicked(); break;
        case 2: _t->on_timerlist_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_Button_on_clicked(); break;
        case 4: _t->on_Button_off_clicked(); break;
        case 5: _t->on_Timer_on_clicked(); break;
        case 6: _t->on_Timer_off_clicked(); break;
        case 7: _t->on_Button_set_clicked(); break;
        case 8: _t->counterout(); break;
        case 9: _t->stop_timer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuForm::Sending_Data)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MenuForm::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_MenuForm.data,
    qt_meta_data_MenuForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MenuForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MenuForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MenuForm::Sending_Data()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
