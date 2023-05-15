/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2019-2023 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/
#include "DropIndicatorOverlay_c.h"


#include <QDebug>


namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template<typename T>
struct ValueWrapper
{
    T value;
};

}
namespace KDDockWidgetsBindings_wrappersNS {
DropIndicatorOverlay_wrapper::DropIndicatorOverlay_wrapper(KDDockWidgets::Core::DropArea *dropArea)
    : ::KDDockWidgets::Core::DropIndicatorOverlay(dropArea)
{
}
KDDockWidgets::DropLocation DropIndicatorOverlay_wrapper::currentDropLocation() const
{
    return ::KDDockWidgets::Core::DropIndicatorOverlay::currentDropLocation();
}
void DropIndicatorOverlay_wrapper::currentDropLocationChanged()
{
    ::KDDockWidgets::Core::DropIndicatorOverlay::currentDropLocationChanged();
}
bool DropIndicatorOverlay_wrapper::dropIndicatorVisible(KDDockWidgets::DropLocation arg__1) const
{
    if (m_dropIndicatorVisibleCallback) {
        const void *thisPtr = this;
        return m_dropIndicatorVisibleCallback(const_cast<void *>(thisPtr), arg__1);
    } else {
        return ::KDDockWidgets::Core::DropIndicatorOverlay::dropIndicatorVisible(arg__1);
    }
}
bool DropIndicatorOverlay_wrapper::dropIndicatorVisible_nocallback(KDDockWidgets::DropLocation arg__1) const
{
    return ::KDDockWidgets::Core::DropIndicatorOverlay::dropIndicatorVisible(arg__1);
}
KDDockWidgets::DropLocation DropIndicatorOverlay_wrapper::hover(QPoint globalPos)
{
    return ::KDDockWidgets::Core::DropIndicatorOverlay::hover(globalPos);
}
KDDockWidgets::DropLocation DropIndicatorOverlay_wrapper::hover_impl(QPoint globalPos)
{
    if (m_hover_implCallback) {
        const void *thisPtr = this;
        return m_hover_implCallback(const_cast<void *>(thisPtr), &globalPos);
    } else {
        qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
        return {};
    }
}
KDDockWidgets::DropLocation DropIndicatorOverlay_wrapper::hover_impl_nocallback(QPoint globalPos)
{
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
}
KDDockWidgets::Core::Group *DropIndicatorOverlay_wrapper::hoveredFrame() const
{
    return ::KDDockWidgets::Core::DropIndicatorOverlay::hoveredFrame();
}
void DropIndicatorOverlay_wrapper::hoveredFrameChanged(KDDockWidgets::Core::Group *arg__1)
{
    ::KDDockWidgets::Core::DropIndicatorOverlay::hoveredFrameChanged(arg__1);
}
QRect DropIndicatorOverlay_wrapper::hoveredFrameRect() const
{
    return ::KDDockWidgets::Core::DropIndicatorOverlay::hoveredFrameRect();
}
void DropIndicatorOverlay_wrapper::hoveredFrameRectChanged()
{
    ::KDDockWidgets::Core::DropIndicatorOverlay::hoveredFrameRectChanged();
}
bool DropIndicatorOverlay_wrapper::isHovered() const
{
    return ::KDDockWidgets::Core::DropIndicatorOverlay::isHovered();
}
KDDockWidgets::Location DropIndicatorOverlay_wrapper::multisplitterLocationFor(KDDockWidgets::DropLocation arg__1)
{
    return ::KDDockWidgets::Core::DropIndicatorOverlay::multisplitterLocationFor(arg__1);
}
void DropIndicatorOverlay_wrapper::onHoveredFrameChanged(KDDockWidgets::Core::Group *arg__1)
{
    if (m_onHoveredFrameChangedCallback) {
        const void *thisPtr = this;
        m_onHoveredFrameChangedCallback(const_cast<void *>(thisPtr), arg__1);
    } else {
        ::KDDockWidgets::Core::DropIndicatorOverlay::onHoveredFrameChanged(arg__1);
    }
}
void DropIndicatorOverlay_wrapper::onHoveredFrameChanged_nocallback(KDDockWidgets::Core::Group *arg__1)
{
    ::KDDockWidgets::Core::DropIndicatorOverlay::onHoveredFrameChanged(arg__1);
}
QPoint DropIndicatorOverlay_wrapper::posForIndicator(KDDockWidgets::DropLocation arg__1) const
{
    if (m_posForIndicatorCallback) {
        const void *thisPtr = this;
        return *m_posForIndicatorCallback(const_cast<void *>(thisPtr), arg__1);
    } else {
        qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
        return {};
    }
}
QPoint DropIndicatorOverlay_wrapper::posForIndicator_nocallback(KDDockWidgets::DropLocation arg__1) const
{
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
}
void DropIndicatorOverlay_wrapper::removeHover()
{
    ::KDDockWidgets::Core::DropIndicatorOverlay::removeHover();
}
void DropIndicatorOverlay_wrapper::setCurrentDropLocation(KDDockWidgets::DropLocation location)
{
    ::KDDockWidgets::Core::DropIndicatorOverlay::setCurrentDropLocation(location);
}
void DropIndicatorOverlay_wrapper::setHoveredFrame(KDDockWidgets::Core::Group *arg__1)
{
    ::KDDockWidgets::Core::DropIndicatorOverlay::setHoveredFrame(arg__1);
}
void DropIndicatorOverlay_wrapper::setParentView_impl(KDDockWidgets::Core::View *parent)
{
    if (m_setParentView_implCallback) {
        const void *thisPtr = this;
        m_setParentView_implCallback(const_cast<void *>(thisPtr), parent);
    } else {
        ::KDDockWidgets::Core::DropIndicatorOverlay::setParentView_impl(parent);
    }
}
void DropIndicatorOverlay_wrapper::setParentView_impl_nocallback(KDDockWidgets::Core::View *parent)
{
    ::KDDockWidgets::Core::DropIndicatorOverlay::setParentView_impl(parent);
}
void DropIndicatorOverlay_wrapper::setWindowBeingDragged(bool arg__1)
{
    ::KDDockWidgets::Core::DropIndicatorOverlay::setWindowBeingDragged(arg__1);
}
QString DropIndicatorOverlay_wrapper::tr(const char *s, const char *c, int n)
{
    return ::KDDockWidgets::Core::DropIndicatorOverlay::tr(s, c, n);
}
void DropIndicatorOverlay_wrapper::updateVisibility()
{
    if (m_updateVisibilityCallback) {
        const void *thisPtr = this;
        m_updateVisibilityCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::Core::DropIndicatorOverlay::updateVisibility();
    }
}
void DropIndicatorOverlay_wrapper::updateVisibility_nocallback()
{
    ::KDDockWidgets::Core::DropIndicatorOverlay::updateVisibility();
}
DropIndicatorOverlay_wrapper::~DropIndicatorOverlay_wrapper()
{
}

}
static KDDockWidgets::Core::DropIndicatorOverlay *fromPtr(void *ptr)
{
    return reinterpret_cast<KDDockWidgets::Core::DropIndicatorOverlay *>(ptr);
}
static KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper *fromWrapperPtr(void *ptr)
{
    return reinterpret_cast<KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper *>(ptr);
}
extern "C" {
void c_KDDockWidgets__Core__DropIndicatorOverlay_Finalizer(void *, void *cppObj, void *)
{
    delete reinterpret_cast<KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper *>(cppObj);
}
void *c_KDDockWidgets__Core__DropIndicatorOverlay__constructor_DropArea(void *dropArea_)
{
    auto dropArea = reinterpret_cast<KDDockWidgets::Core::DropArea *>(dropArea_);
    auto ptr = new KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper(dropArea);
    return reinterpret_cast<void *>(ptr);
}
// currentDropLocation() const
int c_KDDockWidgets__Core__DropIndicatorOverlay__currentDropLocation(void *thisObj)
{
    return int(fromPtr(thisObj)->currentDropLocation());
}
// currentDropLocationChanged()
void c_KDDockWidgets__Core__DropIndicatorOverlay__currentDropLocationChanged(void *thisObj)
{
    fromPtr(thisObj)->currentDropLocationChanged();
}
// dropIndicatorVisible(KDDockWidgets::DropLocation arg__1) const
bool c_KDDockWidgets__Core__DropIndicatorOverlay__dropIndicatorVisible_DropLocation(void *thisObj, int arg__1)
{
    return [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->dropIndicatorVisible_nocallback(static_cast<KDDockWidgets::DropLocation>(arg__1));} else {    return targetPtr->dropIndicatorVisible(static_cast<KDDockWidgets::DropLocation>(arg__1));} }();
}
// hover(QPoint globalPos)
int c_KDDockWidgets__Core__DropIndicatorOverlay__hover_QPoint(void *thisObj, void *globalPos_)
{
    assert(globalPos_);
    auto &globalPos = *reinterpret_cast<QPoint *>(globalPos_);
    return int(fromPtr(thisObj)->hover(globalPos));
}
// hover_impl(QPoint globalPos)
int c_KDDockWidgets__Core__DropIndicatorOverlay__hover_impl_QPoint(void *thisObj, void *globalPos_)
{
    assert(globalPos_);
    auto &globalPos = *reinterpret_cast<QPoint *>(globalPos_);
    return fromWrapperPtr(thisObj)->hover_impl_nocallback(globalPos);
}
// hoveredFrame() const
void *c_KDDockWidgets__Core__DropIndicatorOverlay__hoveredFrame(void *thisObj)
{
    return fromPtr(thisObj)->hoveredFrame();
}
// hoveredFrameChanged(KDDockWidgets::Core::Group * arg__1)
void c_KDDockWidgets__Core__DropIndicatorOverlay__hoveredFrameChanged_Group(void *thisObj, void *arg__1_)
{
    auto arg__1 = reinterpret_cast<KDDockWidgets::Core::Group *>(arg__1_);
    fromPtr(thisObj)->hoveredFrameChanged(arg__1);
}
// hoveredFrameRect() const
void *c_KDDockWidgets__Core__DropIndicatorOverlay__hoveredFrameRect(void *thisObj)
{
    return new Dartagnan::ValueWrapper<QRect> { fromPtr(thisObj)->hoveredFrameRect() };
}
// hoveredFrameRectChanged()
void c_KDDockWidgets__Core__DropIndicatorOverlay__hoveredFrameRectChanged(void *thisObj)
{
    fromPtr(thisObj)->hoveredFrameRectChanged();
}
// isHovered() const
bool c_KDDockWidgets__Core__DropIndicatorOverlay__isHovered(void *thisObj)
{
    return fromPtr(thisObj)->isHovered();
}
// multisplitterLocationFor(KDDockWidgets::DropLocation arg__1)
int c_static_KDDockWidgets__Core__DropIndicatorOverlay__multisplitterLocationFor_DropLocation(int arg__1)
{
    return KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper::multisplitterLocationFor(static_cast<KDDockWidgets::DropLocation>(arg__1));
}
// onHoveredFrameChanged(KDDockWidgets::Core::Group * arg__1)
void c_KDDockWidgets__Core__DropIndicatorOverlay__onHoveredFrameChanged_Group(void *thisObj, void *arg__1_)
{
    auto arg__1 = reinterpret_cast<KDDockWidgets::Core::Group *>(arg__1_);
    fromWrapperPtr(thisObj)->onHoveredFrameChanged_nocallback(arg__1);
}
// posForIndicator(KDDockWidgets::DropLocation arg__1) const
void *c_KDDockWidgets__Core__DropIndicatorOverlay__posForIndicator_DropLocation(void *thisObj, int arg__1)
{
    return new Dartagnan::ValueWrapper<QPoint> { [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->posForIndicator_nocallback(static_cast<KDDockWidgets::DropLocation>(arg__1));} else {    return targetPtr->posForIndicator(static_cast<KDDockWidgets::DropLocation>(arg__1));} }() };
}
// removeHover()
void c_KDDockWidgets__Core__DropIndicatorOverlay__removeHover(void *thisObj)
{
    fromPtr(thisObj)->removeHover();
}
// setCurrentDropLocation(KDDockWidgets::DropLocation location)
void c_KDDockWidgets__Core__DropIndicatorOverlay__setCurrentDropLocation_DropLocation(void *thisObj, int location)
{
    fromPtr(thisObj)->setCurrentDropLocation(static_cast<KDDockWidgets::DropLocation>(location));
}
// setHoveredFrame(KDDockWidgets::Core::Group * arg__1)
void c_KDDockWidgets__Core__DropIndicatorOverlay__setHoveredFrame_Group(void *thisObj, void *arg__1_)
{
    auto arg__1 = reinterpret_cast<KDDockWidgets::Core::Group *>(arg__1_);
    fromPtr(thisObj)->setHoveredFrame(arg__1);
}
// setParentView_impl(KDDockWidgets::Core::View * parent)
void c_KDDockWidgets__Core__DropIndicatorOverlay__setParentView_impl_View(void *thisObj, void *parent_)
{
    auto parent = reinterpret_cast<KDDockWidgets::Core::View *>(parent_);
    fromWrapperPtr(thisObj)->setParentView_impl_nocallback(parent);
}
// setWindowBeingDragged(bool arg__1)
void c_KDDockWidgets__Core__DropIndicatorOverlay__setWindowBeingDragged_bool(void *thisObj, bool arg__1)
{
    fromPtr(thisObj)->setWindowBeingDragged(arg__1);
}
// tr(const char * s, const char * c, int n)
void *c_static_KDDockWidgets__Core__DropIndicatorOverlay__tr_char_char_int(const char *s, const char *c, int n)
{
    return new Dartagnan::ValueWrapper<QString> { KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper::tr(s, c, n) };
}
// updateVisibility()
void c_KDDockWidgets__Core__DropIndicatorOverlay__updateVisibility(void *thisObj)
{
    fromWrapperPtr(thisObj)->updateVisibility_nocallback();
}
void c_KDDockWidgets__Core__DropIndicatorOverlay__destructor(void *thisObj)
{
    delete fromPtr(thisObj);
}
void c_KDDockWidgets__Core__DropIndicatorOverlay__registerVirtualMethodCallback(void *ptr, void *callback, int methodId)
{
    auto wrapper = fromWrapperPtr(ptr);
    switch (methodId) {
    case 1620:
        wrapper->m_dropIndicatorVisibleCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper::Callback_dropIndicatorVisible>(callback);
        break;
    case 1624:
        wrapper->m_hover_implCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper::Callback_hover_impl>(callback);
        break;
    case 1636:
        wrapper->m_onHoveredFrameChangedCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper::Callback_onHoveredFrameChanged>(callback);
        break;
    case 1639:
        wrapper->m_posForIndicatorCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper::Callback_posForIndicator>(callback);
        break;
    case 899:
        wrapper->m_setParentView_implCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper::Callback_setParentView_impl>(callback);
        break;
    case 1652:
        wrapper->m_updateVisibilityCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::DropIndicatorOverlay_wrapper::Callback_updateVisibility>(callback);
        break;
    }
}
}