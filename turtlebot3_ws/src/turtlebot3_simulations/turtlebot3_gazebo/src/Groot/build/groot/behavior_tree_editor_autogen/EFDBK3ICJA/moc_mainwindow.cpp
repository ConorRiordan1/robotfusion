/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bt_editor/mainwindow.h"
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
    QByteArrayData data[57];
    char stringdata0[975];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "updateGraphic"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "onAutoArrange"
QT_MOC_LITERAL(4, 40, 14), // "onSceneChanged"
QT_MOC_LITERAL(5, 55, 10), // "onPushUndo"
QT_MOC_LITERAL(6, 66, 13), // "onUndoInvoked"
QT_MOC_LITERAL(7, 80, 13), // "onRedoInvoked"
QT_MOC_LITERAL(8, 94, 18), // "onConnectionUpdate"
QT_MOC_LITERAL(9, 113, 9), // "connected"
QT_MOC_LITERAL(10, 123, 22), // "onRequestSubTreeExpand"
QT_MOC_LITERAL(11, 146, 17), // "GraphicContainer&"
QT_MOC_LITERAL(12, 164, 9), // "container"
QT_MOC_LITERAL(13, 174, 14), // "QtNodes::Node&"
QT_MOC_LITERAL(14, 189, 4), // "node"
QT_MOC_LITERAL(15, 194, 20), // "onAddToModelRegistry"
QT_MOC_LITERAL(16, 215, 9), // "NodeModel"
QT_MOC_LITERAL(17, 225, 5), // "model"
QT_MOC_LITERAL(18, 231, 16), // "onDestroySubTree"
QT_MOC_LITERAL(19, 248, 2), // "ID"
QT_MOC_LITERAL(20, 251, 22), // "onModelRemoveRequested"
QT_MOC_LITERAL(21, 274, 10), // "closeEvent"
QT_MOC_LITERAL(22, 285, 12), // "QCloseEvent*"
QT_MOC_LITERAL(23, 298, 5), // "event"
QT_MOC_LITERAL(24, 304, 23), // "on_actionLoad_triggered"
QT_MOC_LITERAL(25, 328, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(26, 352, 25), // "on_splitter_splitterMoved"
QT_MOC_LITERAL(27, 378, 3), // "pos"
QT_MOC_LITERAL(28, 382, 5), // "index"
QT_MOC_LITERAL(29, 388, 28), // "on_toolButtonReorder_pressed"
QT_MOC_LITERAL(30, 417, 31), // "on_toolButtonCenterView_pressed"
QT_MOC_LITERAL(31, 449, 23), // "onCreateAbsBehaviorTree"
QT_MOC_LITERAL(32, 473, 15), // "AbsBehaviorTree"
QT_MOC_LITERAL(33, 489, 4), // "tree"
QT_MOC_LITERAL(34, 494, 7), // "bt_name"
QT_MOC_LITERAL(35, 502, 14), // "secondary_tabs"
QT_MOC_LITERAL(36, 517, 19), // "onChangeNodesStatus"
QT_MOC_LITERAL(37, 537, 39), // "std::vector<std::pair<int,Nod..."
QT_MOC_LITERAL(38, 577, 11), // "node_status"
QT_MOC_LITERAL(39, 589, 27), // "on_toolButtonLayout_clicked"
QT_MOC_LITERAL(40, 617, 30), // "on_actionEditor_mode_triggered"
QT_MOC_LITERAL(41, 648, 31), // "on_actionMonitor_mode_triggered"
QT_MOC_LITERAL(42, 680, 30), // "on_actionReplay_mode_triggered"
QT_MOC_LITERAL(43, 711, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(44, 739, 22), // "onActionClearTriggered"
QT_MOC_LITERAL(45, 762, 10), // "create_new"
QT_MOC_LITERAL(46, 773, 24), // "on_actionClear_triggered"
QT_MOC_LITERAL(47, 798, 16), // "onTreeNodeEdited"
QT_MOC_LITERAL(48, 815, 7), // "prev_ID"
QT_MOC_LITERAL(49, 823, 6), // "new_ID"
QT_MOC_LITERAL(50, 830, 31), // "onTabCustomContextMenuRequested"
QT_MOC_LITERAL(51, 862, 20), // "onTabRenameRequested"
QT_MOC_LITERAL(52, 883, 9), // "tab_index"
QT_MOC_LITERAL(53, 893, 8), // "new_name"
QT_MOC_LITERAL(54, 902, 16), // "onTabSetMainTree"
QT_MOC_LITERAL(55, 919, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(56, 944, 30) // "on_actionReportIssue_triggered"

    },
    "MainWindow\0updateGraphic\0\0onAutoArrange\0"
    "onSceneChanged\0onPushUndo\0onUndoInvoked\0"
    "onRedoInvoked\0onConnectionUpdate\0"
    "connected\0onRequestSubTreeExpand\0"
    "GraphicContainer&\0container\0QtNodes::Node&\0"
    "node\0onAddToModelRegistry\0NodeModel\0"
    "model\0onDestroySubTree\0ID\0"
    "onModelRemoveRequested\0closeEvent\0"
    "QCloseEvent*\0event\0on_actionLoad_triggered\0"
    "on_actionSave_triggered\0"
    "on_splitter_splitterMoved\0pos\0index\0"
    "on_toolButtonReorder_pressed\0"
    "on_toolButtonCenterView_pressed\0"
    "onCreateAbsBehaviorTree\0AbsBehaviorTree\0"
    "tree\0bt_name\0secondary_tabs\0"
    "onChangeNodesStatus\0"
    "std::vector<std::pair<int,NodeStatus> >\0"
    "node_status\0on_toolButtonLayout_clicked\0"
    "on_actionEditor_mode_triggered\0"
    "on_actionMonitor_mode_triggered\0"
    "on_actionReplay_mode_triggered\0"
    "on_tabWidget_currentChanged\0"
    "onActionClearTriggered\0create_new\0"
    "on_actionClear_triggered\0onTreeNodeEdited\0"
    "prev_ID\0new_ID\0onTabCustomContextMenuRequested\0"
    "onTabRenameRequested\0tab_index\0new_name\0"
    "onTabSetMainTree\0on_actionAbout_triggered\0"
    "on_actionReportIssue_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  194,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  195,    2, 0x0a /* Public */,
       4,    0,  196,    2, 0x0a /* Public */,
       5,    0,  197,    2, 0x0a /* Public */,
       6,    0,  198,    2, 0x0a /* Public */,
       7,    0,  199,    2, 0x0a /* Public */,
       8,    1,  200,    2, 0x0a /* Public */,
      10,    2,  203,    2, 0x0a /* Public */,
      15,    1,  208,    2, 0x0a /* Public */,
      18,    1,  211,    2, 0x0a /* Public */,
      20,    1,  214,    2, 0x0a /* Public */,
      21,    1,  217,    2, 0x0a /* Public */,
      24,    0,  220,    2, 0x0a /* Public */,
      25,    0,  221,    2, 0x0a /* Public */,
      26,    2,  222,    2, 0x0a /* Public */,
      26,    1,  227,    2, 0x2a /* Public | MethodCloned */,
      26,    0,  230,    2, 0x2a /* Public | MethodCloned */,
      29,    0,  231,    2, 0x0a /* Public */,
      30,    0,  232,    2, 0x0a /* Public */,
      31,    3,  233,    2, 0x0a /* Public */,
      31,    2,  240,    2, 0x2a /* Public | MethodCloned */,
      36,    2,  245,    2, 0x0a /* Public */,
      39,    0,  250,    2, 0x0a /* Public */,
      40,    0,  251,    2, 0x0a /* Public */,
      41,    0,  252,    2, 0x0a /* Public */,
      42,    0,  253,    2, 0x0a /* Public */,
      43,    1,  254,    2, 0x0a /* Public */,
      44,    1,  257,    2, 0x0a /* Public */,
      46,    0,  260,    2, 0x0a /* Public */,
      47,    2,  261,    2, 0x0a /* Public */,
      50,    1,  266,    2, 0x0a /* Public */,
      51,    2,  269,    2, 0x0a /* Public */,
      51,    1,  274,    2, 0x2a /* Public | MethodCloned */,
      54,    1,  277,    2, 0x0a /* Public */,
      55,    0,  280,    2, 0x08 /* Private */,
      56,    0,  281,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   27,   28,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32, QMetaType::QString, QMetaType::Bool,   33,   34,   35,
    QMetaType::Void, 0x80000000 | 32, QMetaType::QString,   33,   34,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 37,   34,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   48,   49,
    QMetaType::Void, QMetaType::QPoint,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   52,   53,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void, QMetaType::Int,   52,
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
        case 0: _t->updateGraphic(); break;
        case 1: _t->onAutoArrange(); break;
        case 2: _t->onSceneChanged(); break;
        case 3: _t->onPushUndo(); break;
        case 4: _t->onUndoInvoked(); break;
        case 5: _t->onRedoInvoked(); break;
        case 6: _t->onConnectionUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onRequestSubTreeExpand((*reinterpret_cast< GraphicContainer(*)>(_a[1])),(*reinterpret_cast< QtNodes::Node(*)>(_a[2]))); break;
        case 8: _t->onAddToModelRegistry((*reinterpret_cast< const NodeModel(*)>(_a[1]))); break;
        case 9: _t->onDestroySubTree((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->onModelRemoveRequested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 12: _t->on_actionLoad_triggered(); break;
        case 13: _t->on_actionSave_triggered(); break;
        case 14: _t->on_splitter_splitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->on_splitter_splitterMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_splitter_splitterMoved(); break;
        case 17: _t->on_toolButtonReorder_pressed(); break;
        case 18: _t->on_toolButtonCenterView_pressed(); break;
        case 19: _t->onCreateAbsBehaviorTree((*reinterpret_cast< const AbsBehaviorTree(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 20: _t->onCreateAbsBehaviorTree((*reinterpret_cast< const AbsBehaviorTree(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: _t->onChangeNodesStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::vector<std::pair<int,NodeStatus> >(*)>(_a[2]))); break;
        case 22: _t->on_toolButtonLayout_clicked(); break;
        case 23: _t->on_actionEditor_mode_triggered(); break;
        case 24: _t->on_actionMonitor_mode_triggered(); break;
        case 25: _t->on_actionReplay_mode_triggered(); break;
        case 26: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->onActionClearTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->on_actionClear_triggered(); break;
        case 29: _t->onTreeNodeEdited((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 30: _t->onTabCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 31: _t->onTabRenameRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 32: _t->onTabRenameRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->onTabSetMainTree((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->on_actionAbout_triggered(); break;
        case 35: _t->on_actionReportIssue_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbsBehaviorTree >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AbsBehaviorTree >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::updateGraphic)) {
                *result = 0;
                return;
            }
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
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::updateGraphic()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
