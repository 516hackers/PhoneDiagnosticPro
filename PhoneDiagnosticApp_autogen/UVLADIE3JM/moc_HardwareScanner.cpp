/****************************************************************************
** Meta object code from reading C++ file 'HardwareScanner.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/HardwareScanner.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HardwareScanner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.0. It"
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
struct qt_meta_tag_ZN15HardwareScannerE_t {};
} // unnamed namespace

template <> constexpr inline auto HardwareScanner::qt_create_metaobjectdata<qt_meta_tag_ZN15HardwareScannerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "HardwareScanner",
        "scanStarted",
        "",
        "scanProgress",
        "percent",
        "status",
        "scanFinished",
        "QList<TestResult>",
        "results",
        "scanStopped",
        "componentResult",
        "TestResult",
        "result",
        "onComponentTested"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'scanStarted'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scanProgress'
        QtMocHelpers::SignalData<void(int, const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { QMetaType::QString, 5 },
        }}),
        // Signal 'scanFinished'
        QtMocHelpers::SignalData<void(const QVector<TestResult> &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'scanStopped'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'componentResult'
        QtMocHelpers::SignalData<void(const TestResult &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'onComponentTested'
        QtMocHelpers::SlotData<void(const TestResult &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<HardwareScanner, qt_meta_tag_ZN15HardwareScannerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject HardwareScanner::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15HardwareScannerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15HardwareScannerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15HardwareScannerE_t>.metaTypes,
    nullptr
} };

void HardwareScanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HardwareScanner *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->scanStarted(); break;
        case 1: _t->scanProgress((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->scanFinished((*reinterpret_cast<std::add_pointer_t<QList<TestResult>>>(_a[1]))); break;
        case 3: _t->scanStopped(); break;
        case 4: _t->componentResult((*reinterpret_cast<std::add_pointer_t<TestResult>>(_a[1]))); break;
        case 5: _t->onComponentTested((*reinterpret_cast<std::add_pointer_t<TestResult>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (HardwareScanner::*)()>(_a, &HardwareScanner::scanStarted, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (HardwareScanner::*)(int , const QString & )>(_a, &HardwareScanner::scanProgress, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (HardwareScanner::*)(const QVector<TestResult> & )>(_a, &HardwareScanner::scanFinished, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (HardwareScanner::*)()>(_a, &HardwareScanner::scanStopped, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (HardwareScanner::*)(const TestResult & )>(_a, &HardwareScanner::componentResult, 4))
            return;
    }
}

const QMetaObject *HardwareScanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HardwareScanner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15HardwareScannerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HardwareScanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void HardwareScanner::scanStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void HardwareScanner::scanProgress(int _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void HardwareScanner::scanFinished(const QVector<TestResult> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void HardwareScanner::scanStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void HardwareScanner::componentResult(const TestResult & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
