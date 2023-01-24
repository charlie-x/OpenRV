//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QMenuBarType__h__
#define __MuQt5__QMenuBarType__h__
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
class MuQt_QMenuBar;

//
//  NOTE: file generated by qt2mu.py
//

class QMenuBarType : public Class
{
  public:

    typedef MuQt_QMenuBar MuQtType;
    typedef QMenuBar QtType;

    //
    //  Constructors
    //

    QMenuBarType(Context* context, 
           const char* name,
           Class* superClass = 0,
           Class* superClass2 = 0);

    virtual ~QMenuBarType();

    static bool isInheritable() { return true; }
    static inline ClassInstance* cachedInstance(const MuQtType*);

    //
    //  Class API
    //

    virtual void load();

    MemberFunction* _func[33];
};

// Inheritable object

class MuQt_QMenuBar : public QMenuBar
{
  public:
    virtual ~MuQt_QMenuBar();
    MuQt_QMenuBar(Pointer muobj, const CallEnvironment*, QWidget * parent) ;
    virtual int heightForWidth(int _p4) const;
    virtual QSize minimumSizeHint() const;
    virtual QSize sizeHint() const;
  protected:
    virtual void changeEvent(QEvent * e) ;
    virtual bool event(QEvent * e) ;
    virtual bool eventFilter(QObject * object, QEvent * event) ;
    virtual void focusInEvent(QFocusEvent * _p14) ;
    virtual void focusOutEvent(QFocusEvent * _p14) ;
    virtual void keyPressEvent(QKeyEvent * e) ;
    virtual void leaveEvent(QEvent * _p9) ;
    virtual void mouseMoveEvent(QMouseEvent * e) ;
    virtual void mousePressEvent(QMouseEvent * e) ;
    virtual void mouseReleaseEvent(QMouseEvent * e) ;
    virtual void paintEvent(QPaintEvent * e) ;
    virtual void resizeEvent(QResizeEvent * _p15) ;
    virtual void timerEvent(QTimerEvent * e) ;
  public:
    virtual bool hasHeightForWidth() const;
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const;
  protected:
    virtual void closeEvent(QCloseEvent * event) ;
    virtual void contextMenuEvent(QContextMenuEvent * event) ;
    virtual void dragEnterEvent(QDragEnterEvent * event) ;
    virtual void dragLeaveEvent(QDragLeaveEvent * event) ;
    virtual void dragMoveEvent(QDragMoveEvent * event) ;
    virtual void dropEvent(QDropEvent * event) ;
    virtual void enterEvent(QEvent * event) ;
    virtual bool focusNextPrevChild(bool next) ;
    virtual void hideEvent(QHideEvent * event) ;
    virtual void keyReleaseEvent(QKeyEvent * event) ;
    virtual void mouseDoubleClickEvent(QMouseEvent * event) ;
    virtual void moveEvent(QMoveEvent * event) ;
    virtual void showEvent(QShowEvent * event) ;
    virtual void tabletEvent(QTabletEvent * event) ;
    virtual void wheelEvent(QWheelEvent * event) ;
  public:
    void changeEvent_pub(QEvent * e)  { changeEvent(e); }
    void changeEvent_pub_parent(QEvent * e)  { QMenuBar::changeEvent(e); }
    bool event_pub(QEvent * e)  { return event(e); }
    bool event_pub_parent(QEvent * e)  { return QMenuBar::event(e); }
    bool eventFilter_pub(QObject * object, QEvent * event)  { return eventFilter(object, event); }
    bool eventFilter_pub_parent(QObject * object, QEvent * event)  { return QMenuBar::eventFilter(object, event); }
    void focusInEvent_pub(QFocusEvent * _p14)  { focusInEvent(_p14); }
    void focusInEvent_pub_parent(QFocusEvent * _p14)  { QMenuBar::focusInEvent(_p14); }
    void focusOutEvent_pub(QFocusEvent * _p14)  { focusOutEvent(_p14); }
    void focusOutEvent_pub_parent(QFocusEvent * _p14)  { QMenuBar::focusOutEvent(_p14); }
    void keyPressEvent_pub(QKeyEvent * e)  { keyPressEvent(e); }
    void keyPressEvent_pub_parent(QKeyEvent * e)  { QMenuBar::keyPressEvent(e); }
    void leaveEvent_pub(QEvent * _p9)  { leaveEvent(_p9); }
    void leaveEvent_pub_parent(QEvent * _p9)  { QMenuBar::leaveEvent(_p9); }
    void mouseMoveEvent_pub(QMouseEvent * e)  { mouseMoveEvent(e); }
    void mouseMoveEvent_pub_parent(QMouseEvent * e)  { QMenuBar::mouseMoveEvent(e); }
    void mousePressEvent_pub(QMouseEvent * e)  { mousePressEvent(e); }
    void mousePressEvent_pub_parent(QMouseEvent * e)  { QMenuBar::mousePressEvent(e); }
    void mouseReleaseEvent_pub(QMouseEvent * e)  { mouseReleaseEvent(e); }
    void mouseReleaseEvent_pub_parent(QMouseEvent * e)  { QMenuBar::mouseReleaseEvent(e); }
    void paintEvent_pub(QPaintEvent * e)  { paintEvent(e); }
    void paintEvent_pub_parent(QPaintEvent * e)  { QMenuBar::paintEvent(e); }
    void resizeEvent_pub(QResizeEvent * _p15)  { resizeEvent(_p15); }
    void resizeEvent_pub_parent(QResizeEvent * _p15)  { QMenuBar::resizeEvent(_p15); }
    void timerEvent_pub(QTimerEvent * e)  { timerEvent(e); }
    void timerEvent_pub_parent(QTimerEvent * e)  { QMenuBar::timerEvent(e); }
    void closeEvent_pub(QCloseEvent * event)  { closeEvent(event); }
    void closeEvent_pub_parent(QCloseEvent * event)  { QMenuBar::closeEvent(event); }
    void contextMenuEvent_pub(QContextMenuEvent * event)  { contextMenuEvent(event); }
    void contextMenuEvent_pub_parent(QContextMenuEvent * event)  { QMenuBar::contextMenuEvent(event); }
    void dragEnterEvent_pub(QDragEnterEvent * event)  { dragEnterEvent(event); }
    void dragEnterEvent_pub_parent(QDragEnterEvent * event)  { QMenuBar::dragEnterEvent(event); }
    void dragLeaveEvent_pub(QDragLeaveEvent * event)  { dragLeaveEvent(event); }
    void dragLeaveEvent_pub_parent(QDragLeaveEvent * event)  { QMenuBar::dragLeaveEvent(event); }
    void dragMoveEvent_pub(QDragMoveEvent * event)  { dragMoveEvent(event); }
    void dragMoveEvent_pub_parent(QDragMoveEvent * event)  { QMenuBar::dragMoveEvent(event); }
    void dropEvent_pub(QDropEvent * event)  { dropEvent(event); }
    void dropEvent_pub_parent(QDropEvent * event)  { QMenuBar::dropEvent(event); }
    void enterEvent_pub(QEvent * event)  { enterEvent(event); }
    void enterEvent_pub_parent(QEvent * event)  { QMenuBar::enterEvent(event); }
    bool focusNextPrevChild_pub(bool next)  { return focusNextPrevChild(next); }
    bool focusNextPrevChild_pub_parent(bool next)  { return QMenuBar::focusNextPrevChild(next); }
    void hideEvent_pub(QHideEvent * event)  { hideEvent(event); }
    void hideEvent_pub_parent(QHideEvent * event)  { QMenuBar::hideEvent(event); }
    void keyReleaseEvent_pub(QKeyEvent * event)  { keyReleaseEvent(event); }
    void keyReleaseEvent_pub_parent(QKeyEvent * event)  { QMenuBar::keyReleaseEvent(event); }
    void mouseDoubleClickEvent_pub(QMouseEvent * event)  { mouseDoubleClickEvent(event); }
    void mouseDoubleClickEvent_pub_parent(QMouseEvent * event)  { QMenuBar::mouseDoubleClickEvent(event); }
    void moveEvent_pub(QMoveEvent * event)  { moveEvent(event); }
    void moveEvent_pub_parent(QMoveEvent * event)  { QMenuBar::moveEvent(event); }
    void showEvent_pub(QShowEvent * event)  { showEvent(event); }
    void showEvent_pub_parent(QShowEvent * event)  { QMenuBar::showEvent(event); }
    void tabletEvent_pub(QTabletEvent * event)  { tabletEvent(event); }
    void tabletEvent_pub_parent(QTabletEvent * event)  { QMenuBar::tabletEvent(event); }
    void wheelEvent_pub(QWheelEvent * event)  { wheelEvent(event); }
    void wheelEvent_pub_parent(QWheelEvent * event)  { QMenuBar::wheelEvent(event); }
  public:
    const QMenuBarType* _baseType;
    ClassInstance* _obj;
    const CallEnvironment* _env;
};

inline ClassInstance* QMenuBarType::cachedInstance(const QMenuBarType::MuQtType* obj) { return obj->_obj; }

} // Mu

#endif // __MuQt__QMenuBarType__h__