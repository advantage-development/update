/****************************************************************************
** Meta object code from reading C++ file 'messagepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/messagepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MessagePage_t {
    QByteArrayData data[17];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MessagePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MessagePage_t qt_meta_stringdata_MessagePage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MessagePage"
QT_MOC_LITERAL(1, 12, 13), // "exportClicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(4, 49, 20), // "on_newButton_clicked"
QT_MOC_LITERAL(5, 70, 32), // "on_copyFromAddressButton_clicked"
QT_MOC_LITERAL(6, 103, 30), // "on_copyToAddressButton_clicked"
QT_MOC_LITERAL(7, 134, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(8, 158, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(9, 180, 18), // "messageTextChanged"
QT_MOC_LITERAL(10, 199, 16), // "selectionChanged"
QT_MOC_LITERAL(11, 216, 20), // "itemSelectionChanged"
QT_MOC_LITERAL(12, 237, 15), // "incomingMessage"
QT_MOC_LITERAL(13, 253, 14), // "contextualMenu"
QT_MOC_LITERAL(14, 268, 5), // "point"
QT_MOC_LITERAL(15, 274, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(16, 296, 23) // "on_pushButton_2_clicked"

    },
    "MessagePage\0exportClicked\0\0"
    "on_sendButton_clicked\0on_newButton_clicked\0"
    "on_copyFromAddressButton_clicked\0"
    "on_copyToAddressButton_clicked\0"
    "on_deleteButton_clicked\0on_backButton_clicked\0"
    "messageTextChanged\0selectionChanged\0"
    "itemSelectionChanged\0incomingMessage\0"
    "contextualMenu\0point\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessagePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    1,   95,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QPoint,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MessagePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MessagePage *_t = static_cast<MessagePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->exportClicked(); break;
        case 1: _t->on_sendButton_clicked(); break;
        case 2: _t->on_newButton_clicked(); break;
        case 3: _t->on_copyFromAddressButton_clicked(); break;
        case 4: _t->on_copyToAddressButton_clicked(); break;
        case 5: _t->on_deleteButton_clicked(); break;
        case 6: _t->on_backButton_clicked(); break;
        case 7: _t->messageTextChanged(); break;
        case 8: _t->selectionChanged(); break;
        case 9: _t->itemSelectionChanged(); break;
        case 10: _t->incomingMessage(); break;
        case 11: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->on_pushButton_clicked(); break;
        case 13: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MessagePage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MessagePage.data,
      qt_meta_data_MessagePage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MessagePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessagePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MessagePage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MessagePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
