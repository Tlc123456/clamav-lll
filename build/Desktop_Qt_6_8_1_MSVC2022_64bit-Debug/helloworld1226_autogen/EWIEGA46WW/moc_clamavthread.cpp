/****************************************************************************
** Meta object code from reading C++ file 'clamavthread.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../clamavthread.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clamavthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN12ClamAVThreadE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN12ClamAVThreadE = QtMocHelpers::stringData(
    "ClamAVThread",
    "scan",
    "",
    "path",
    "globalScan",
    "abandon",
    "opened",
    "closed",
    "finished",
    "detecting",
    "file",
    "detected",
    "isSafe",
    "virname",
    "message",
    "text",
    "sent",
    "start",
    "cancel",
    "proxyDetecting",
    "proxyDetected",
    "proxyMessage",
    "proxyFinished",
    "updateMessage"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN12ClamAVThreadE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,    1 /* Public */,
       4,    0,  125,    2, 0x06,    3 /* Public */,
       5,    0,  126,    2, 0x06,    4 /* Public */,
       6,    0,  127,    2, 0x06,    5 /* Public */,
       7,    0,  128,    2, 0x06,    6 /* Public */,
       8,    0,  129,    2, 0x06,    7 /* Public */,
       9,    1,  130,    2, 0x06,    8 /* Public */,
      11,    3,  133,    2, 0x06,   10 /* Public */,
      14,    1,  140,    2, 0x06,   14 /* Public */,
      16,    0,  143,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    1,  144,    2, 0x0a,   17 /* Public */,
      17,    0,  147,    2, 0x2a,   19 /* Public | MethodCloned */,
      18,    0,  148,    2, 0x0a,   20 /* Public */,
      19,    1,  149,    2, 0x0a,   21 /* Public */,
      20,    3,  152,    2, 0x0a,   23 /* Public */,
      21,    1,  159,    2, 0x0a,   27 /* Public */,
      22,    0,  162,    2, 0x0a,   29 /* Public */,
      23,    0,  163,    2, 0x0a,   30 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,   10,   12,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,   10,   12,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ClamAVThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN12ClamAVThreadE.offsetsAndSizes,
    qt_meta_data_ZN12ClamAVThreadE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN12ClamAVThreadE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClamAVThread, std::true_type>,
        // method 'scan'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'globalScan'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'abandon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'opened'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'detecting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'detected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'sent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'proxyDetecting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'proxyDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'proxyMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'proxyFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ClamAVThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ClamAVThread *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->scan((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->globalScan(); break;
        case 2: _t->abandon(); break;
        case 3: _t->opened(); break;
        case 4: _t->closed(); break;
        case 5: _t->finished(); break;
        case 6: _t->detecting((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->detected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 8: _t->message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->sent(); break;
        case 10: _t->start((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 11: _t->start(); break;
        case 12: _t->cancel(); break;
        case 13: _t->proxyDetecting((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->proxyDetected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 15: _t->proxyMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->proxyFinished(); break;
        case 17: _t->updateMessage(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (ClamAVThread::*)(const QString & );
            if (_q_method_type _q_method = &ClamAVThread::scan; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (ClamAVThread::*)();
            if (_q_method_type _q_method = &ClamAVThread::globalScan; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (ClamAVThread::*)();
            if (_q_method_type _q_method = &ClamAVThread::abandon; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (ClamAVThread::*)();
            if (_q_method_type _q_method = &ClamAVThread::opened; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (ClamAVThread::*)();
            if (_q_method_type _q_method = &ClamAVThread::closed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (ClamAVThread::*)();
            if (_q_method_type _q_method = &ClamAVThread::finished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (ClamAVThread::*)(const QString & );
            if (_q_method_type _q_method = &ClamAVThread::detecting; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (ClamAVThread::*)(const QString & , bool , const QString & );
            if (_q_method_type _q_method = &ClamAVThread::detected; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (ClamAVThread::*)(const QString & );
            if (_q_method_type _q_method = &ClamAVThread::message; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (ClamAVThread::*)();
            if (_q_method_type _q_method = &ClamAVThread::sent; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject *ClamAVThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClamAVThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN12ClamAVThreadE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClamAVThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void ClamAVThread::scan(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClamAVThread::globalScan()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ClamAVThread::abandon()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ClamAVThread::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ClamAVThread::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ClamAVThread::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ClamAVThread::detecting(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ClamAVThread::detected(const QString & _t1, bool _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ClamAVThread::message(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ClamAVThread::sent()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
