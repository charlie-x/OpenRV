//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QFileType__h__
#define __MuQt5__QFileType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngine/QtWebEngine>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <MuQt5/Bridge.h>

namespace Mu {
class MuQt_QFile;

//
//  NOTE: file generated by qt2mu.py
//

class QFileType : public Class
{
  public:

    typedef MuQt_QFile MuQtType;
    typedef QFile QtType;

    //
    //  Constructors
    //

    QFileType(Context* context, 
           const char* name,
           Class* superClass = 0,
           Class* superClass2 = 0);

    virtual ~QFileType();

    static bool isInheritable() { return true; }
    static inline ClassInstance* cachedInstance(const MuQtType*);

    //
    //  Class API
    //

    virtual void load();

    MemberFunction* _func[8];
};

// Inheritable object

class MuQt_QFile : public QFile
{
  public:
    virtual ~MuQt_QFile();
    MuQt_QFile(Pointer muobj, const CallEnvironment*, const QString & name) ;
    MuQt_QFile(Pointer muobj, const CallEnvironment*, QObject * parent) ;
    MuQt_QFile(Pointer muobj, const CallEnvironment*, const QString & name, QObject * parent) ;
    virtual QString fileName() const;
    virtual bool resize(qint64 sz) ;
    virtual qint64 size() const;
    virtual bool atEnd() const;
    virtual void close() ;
    virtual bool isSequential() const;
    virtual qint64 pos() const;
    virtual bool seek(qint64 pos) ;
  public:
    const QFileType* _baseType;
    ClassInstance* _obj;
    const CallEnvironment* _env;
};

inline ClassInstance* QFileType::cachedInstance(const QFileType::MuQtType* obj) { return obj->_obj; }

} // Mu

#endif // __MuQt__QFileType__h__