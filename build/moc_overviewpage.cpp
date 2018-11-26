/****************************************************************************
** Meta object code from reading C++ file 'overviewpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/overviewpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OverviewPage_t {
    QByteArrayData data[32];
    char stringdata0[518];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverviewPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverviewPage_t qt_meta_stringdata_OverviewPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OverviewPage"
QT_MOC_LITERAL(1, 13, 18), // "transactionClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 45, 5), // "index"
QT_MOC_LITERAL(5, 51, 32), // "sendPaymentTransferButtonClicked"
QT_MOC_LITERAL(6, 84, 14), // "darkSendStatus"
QT_MOC_LITERAL(7, 99, 10), // "setBalance"
QT_MOC_LITERAL(8, 110, 7), // "CAmount"
QT_MOC_LITERAL(9, 118, 7), // "balance"
QT_MOC_LITERAL(10, 126, 5), // "stake"
QT_MOC_LITERAL(11, 132, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(12, 151, 15), // "immatureBalance"
QT_MOC_LITERAL(13, 167, 17), // "anonymizedBalance"
QT_MOC_LITERAL(14, 185, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(15, 202, 14), // "watchOnlyStake"
QT_MOC_LITERAL(16, 217, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(17, 236, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(18, 257, 14), // "toggleDarksend"
QT_MOC_LITERAL(19, 272, 12), // "darksendAuto"
QT_MOC_LITERAL(20, 285, 13), // "darksendReset"
QT_MOC_LITERAL(21, 299, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(22, 317, 24), // "handleTransactionClicked"
QT_MOC_LITERAL(23, 342, 12), // "updateAlerts"
QT_MOC_LITERAL(24, 355, 8), // "warnings"
QT_MOC_LITERAL(25, 364, 21), // "updateWatchOnlyLabels"
QT_MOC_LITERAL(26, 386, 13), // "showWatchOnly"
QT_MOC_LITERAL(27, 400, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(28, 422, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(29, 446, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(30, 470, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(31, 494, 23) // "on_pushButton_5_clicked"

    },
    "OverviewPage\0transactionClicked\0\0"
    "QModelIndex\0index\0sendPaymentTransferButtonClicked\0"
    "darkSendStatus\0setBalance\0CAmount\0"
    "balance\0stake\0unconfirmedBalance\0"
    "immatureBalance\0anonymizedBalance\0"
    "watchOnlyBalance\0watchOnlyStake\0"
    "watchUnconfBalance\0watchImmatureBalance\0"
    "toggleDarksend\0darksendAuto\0darksendReset\0"
    "updateDisplayUnit\0handleTransactionClicked\0"
    "updateAlerts\0warnings\0updateWatchOnlyLabels\0"
    "showWatchOnly\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverviewPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   98,    2, 0x0a /* Public */,
       7,    9,   99,    2, 0x0a /* Public */,
      18,    0,  118,    2, 0x08 /* Private */,
      19,    0,  119,    2, 0x08 /* Private */,
      20,    0,  120,    2, 0x08 /* Private */,
      21,    0,  121,    2, 0x08 /* Private */,
      22,    1,  122,    2, 0x08 /* Private */,
      23,    1,  125,    2, 0x08 /* Private */,
      25,    1,  128,    2, 0x08 /* Private */,
      27,    0,  131,    2, 0x08 /* Private */,
      28,    0,  132,    2, 0x08 /* Private */,
      29,    0,  133,    2, 0x08 /* Private */,
      30,    0,  134,    2, 0x08 /* Private */,
      31,    0,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8,    9,   10,   11,   12,   13,   14,   15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OverviewPage *_t = static_cast<OverviewPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->sendPaymentTransferButtonClicked(); break;
        case 2: _t->darkSendStatus(); break;
        case 3: _t->setBalance((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6])),(*reinterpret_cast< const CAmount(*)>(_a[7])),(*reinterpret_cast< const CAmount(*)>(_a[8])),(*reinterpret_cast< const CAmount(*)>(_a[9]))); break;
        case 4: _t->toggleDarksend(); break;
        case 5: _t->darksendAuto(); break;
        case 6: _t->darksendReset(); break;
        case 7: _t->updateDisplayUnit(); break;
        case 8: _t->handleTransactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->updateAlerts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->updateWatchOnlyLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_pushButton_clicked(); break;
        case 12: _t->on_pushButton_2_clicked(); break;
        case 13: _t->on_pushButton_3_clicked(); break;
        case 14: _t->on_pushButton_4_clicked(); break;
        case 15: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OverviewPage::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewPage::transactionClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OverviewPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewPage::sendPaymentTransferButtonClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OverviewPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OverviewPage.data,
      qt_meta_data_OverviewPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void OverviewPage::transactionClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OverviewPage::sendPaymentTransferButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
