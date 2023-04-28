/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[446];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 27), // "on_save_maze_button_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 24), // "on_open_maze_btn_clicked"
QT_MOC_LITERAL(4, 65, 24), // "on_open_cave_btn_clicked"
QT_MOC_LITERAL(5, 90, 26), // "on_tabWidget_tabBarClicked"
QT_MOC_LITERAL(6, 117, 5), // "index"
QT_MOC_LITERAL(7, 123, 28), // "on_generate_maze_btn_clicked"
QT_MOC_LITERAL(8, 152, 31), // "on_widht_line_spin_valueChanged"
QT_MOC_LITERAL(9, 184, 4), // "arg1"
QT_MOC_LITERAL(10, 189, 42), // "on_color_lines_comboBox_curre..."
QT_MOC_LITERAL(11, 232, 15), // "mousePressEvent"
QT_MOC_LITERAL(12, 248, 12), // "QMouseEvent*"
QT_MOC_LITERAL(13, 261, 5), // "event"
QT_MOC_LITERAL(14, 267, 23), // "on_find_way_btn_clicked"
QT_MOC_LITERAL(15, 291, 21), // "on_clear_maze_clicked"
QT_MOC_LITERAL(16, 313, 28), // "on_generate_cave_btn_clicked"
QT_MOC_LITERAL(17, 342, 24), // "on_init_cave_btn_clicked"
QT_MOC_LITERAL(18, 367, 24), // "on_radioButton_2_clicked"
QT_MOC_LITERAL(19, 392, 7), // "checked"
QT_MOC_LITERAL(20, 400, 25), // "on_clear_cave_btn_clicked"
QT_MOC_LITERAL(21, 426, 19) // "on_action_triggered"

    },
    "MainWindow\0on_save_maze_button_clicked\0"
    "\0on_open_maze_btn_clicked\0"
    "on_open_cave_btn_clicked\0"
    "on_tabWidget_tabBarClicked\0index\0"
    "on_generate_maze_btn_clicked\0"
    "on_widht_line_spin_valueChanged\0arg1\0"
    "on_color_lines_comboBox_currentTextChanged\0"
    "mousePressEvent\0QMouseEvent*\0event\0"
    "on_find_way_btn_clicked\0on_clear_maze_clicked\0"
    "on_generate_cave_btn_clicked\0"
    "on_init_cave_btn_clicked\0"
    "on_radioButton_2_clicked\0checked\0"
    "on_clear_cave_btn_clicked\0on_action_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    1,   92,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    1,   96,    2, 0x08 /* Private */,
      10,    1,   99,    2, 0x08 /* Private */,
      11,    1,  102,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    1,  109,    2, 0x08 /* Private */,
      20,    0,  112,    2, 0x08 /* Private */,
      21,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_save_maze_button_clicked(); break;
        case 1: _t->on_open_maze_btn_clicked(); break;
        case 2: _t->on_open_cave_btn_clicked(); break;
        case 3: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_generate_maze_btn_clicked(); break;
        case 5: _t->on_widht_line_spin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_color_lines_comboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->on_find_way_btn_clicked(); break;
        case 9: _t->on_clear_maze_clicked(); break;
        case 10: _t->on_generate_cave_btn_clicked(); break;
        case 11: _t->on_init_cave_btn_clicked(); break;
        case 12: _t->on_radioButton_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->on_clear_cave_btn_clicked(); break;
        case 14: _t->on_action_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
