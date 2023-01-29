/****************************************************************************
** Meta object code from reading C++ file 'sidepanel_editor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bt_editor/sidepanel_editor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sidepanel_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SidepanelEditor_t {
    QByteArrayData data[27];
    char stringdata0[398];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SidepanelEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SidepanelEditor_t qt_meta_stringdata_SidepanelEditor = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SidepanelEditor"
QT_MOC_LITERAL(1, 16, 11), // "addNewModel"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "NodeModel"
QT_MOC_LITERAL(4, 39, 9), // "new_model"
QT_MOC_LITERAL(5, 49, 20), // "modelRemoveRequested"
QT_MOC_LITERAL(6, 70, 2), // "ID"
QT_MOC_LITERAL(7, 73, 15), // "nodeModelEdited"
QT_MOC_LITERAL(8, 89, 7), // "prev_ID"
QT_MOC_LITERAL(9, 97, 6), // "new_ID"
QT_MOC_LITERAL(10, 104, 10), // "addSubtree"
QT_MOC_LITERAL(11, 115, 13), // "renameSubtree"
QT_MOC_LITERAL(12, 129, 14), // "destroySubtree"
QT_MOC_LITERAL(13, 144, 13), // "onRemoveModel"
QT_MOC_LITERAL(14, 158, 13), // "selected_name"
QT_MOC_LITERAL(15, 172, 14), // "onReplaceModel"
QT_MOC_LITERAL(16, 187, 8), // "old_name"
QT_MOC_LITERAL(17, 196, 41), // "on_paletteTreeWidget_itemSele..."
QT_MOC_LITERAL(18, 238, 29), // "on_lineEditFilter_textChanged"
QT_MOC_LITERAL(19, 268, 4), // "arg1"
QT_MOC_LITERAL(20, 273, 24), // "on_buttonAddNode_clicked"
QT_MOC_LITERAL(21, 298, 13), // "onContextMenu"
QT_MOC_LITERAL(22, 312, 5), // "point"
QT_MOC_LITERAL(23, 318, 23), // "on_buttonUpload_clicked"
QT_MOC_LITERAL(24, 342, 25), // "on_buttonDownload_clicked"
QT_MOC_LITERAL(25, 368, 21), // "on_buttonLock_toggled"
QT_MOC_LITERAL(26, 390, 7) // "checked"

    },
    "SidepanelEditor\0addNewModel\0\0NodeModel\0"
    "new_model\0modelRemoveRequested\0ID\0"
    "nodeModelEdited\0prev_ID\0new_ID\0"
    "addSubtree\0renameSubtree\0destroySubtree\0"
    "onRemoveModel\0selected_name\0onReplaceModel\0"
    "old_name\0on_paletteTreeWidget_itemSelectionChanged\0"
    "on_lineEditFilter_textChanged\0arg1\0"
    "on_buttonAddNode_clicked\0onContextMenu\0"
    "point\0on_buttonUpload_clicked\0"
    "on_buttonDownload_clicked\0"
    "on_buttonLock_toggled\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SidepanelEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       5,    1,   92,    2, 0x06 /* Public */,
       7,    2,   95,    2, 0x06 /* Public */,
      10,    1,  100,    2, 0x06 /* Public */,
      11,    2,  103,    2, 0x06 /* Public */,
      12,    1,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  111,    2, 0x0a /* Public */,
      15,    2,  114,    2, 0x0a /* Public */,
      17,    0,  119,    2, 0x08 /* Private */,
      18,    1,  120,    2, 0x08 /* Private */,
      20,    0,  123,    2, 0x08 /* Private */,
      21,    1,  124,    2, 0x08 /* Private */,
      23,    0,  127,    2, 0x08 /* Private */,
      24,    0,  128,    2, 0x08 /* Private */,
      25,    1,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,   16,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,

       0        // eod
};

void SidepanelEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SidepanelEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addNewModel((*reinterpret_cast< const NodeModel(*)>(_a[1]))); break;
        case 1: _t->modelRemoveRequested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->nodeModelEdited((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->addSubtree((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->renameSubtree((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->destroySubtree((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onRemoveModel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onReplaceModel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const NodeModel(*)>(_a[2]))); break;
        case 8: _t->on_paletteTreeWidget_itemSelectionChanged(); break;
        case 9: _t->on_lineEditFilter_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_buttonAddNode_clicked(); break;
        case 11: _t->onContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->on_buttonUpload_clicked(); break;
        case 13: _t->on_buttonDownload_clicked(); break;
        case 14: _t->on_buttonLock_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SidepanelEditor::*)(const NodeModel & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SidepanelEditor::addNewModel)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SidepanelEditor::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SidepanelEditor::modelRemoveRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SidepanelEditor::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SidepanelEditor::nodeModelEdited)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SidepanelEditor::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SidepanelEditor::addSubtree)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SidepanelEditor::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SidepanelEditor::renameSubtree)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SidepanelEditor::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SidepanelEditor::destroySubtree)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SidepanelEditor::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_SidepanelEditor.data,
    qt_meta_data_SidepanelEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SidepanelEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SidepanelEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SidepanelEditor.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int SidepanelEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SidepanelEditor::addNewModel(const NodeModel & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SidepanelEditor::modelRemoveRequested(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SidepanelEditor::nodeModelEdited(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SidepanelEditor::addSubtree(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SidepanelEditor::renameSubtree(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SidepanelEditor::destroySubtree(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
