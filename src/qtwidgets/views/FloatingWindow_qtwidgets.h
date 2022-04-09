/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2019-2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/

#pragma once

#include "View_qtwidgets.h"

#include "kdbindings/signal.h"

QT_BEGIN_NAMESPACE
class QVBoxLayout;
class QMainWindow;
QT_END_NAMESPACE

namespace KDDockWidgets::Controllers {
class FloatingWindow;
class Frame;
}

namespace KDDockWidgets::Views {


class DOCKS_EXPORT FloatingWindow_qtwidgets : public View_qtwidgets<QWidget>
{
    Q_OBJECT
public:
    explicit FloatingWindow_qtwidgets(Controllers::FloatingWindow *controller,
                                      QMainWindow *parent = nullptr,
                                      Qt::WindowFlags windowFlags = {});

    ~FloatingWindow_qtwidgets() override;

    Controllers::FloatingWindow *floatingWindow() const;

protected:
    void paintEvent(QPaintEvent *) override;
    void closeEvent(QCloseEvent *) override;
    bool event(QEvent *ev) override;
    void init() override;

private:
    Controllers::FloatingWindow *const m_controller;
    QVBoxLayout *const m_vlayout;
    KDBindings::ConnectionHandle m_screenChangedConnection;

    void updateMargins();
    Q_DISABLE_COPY(FloatingWindow_qtwidgets)
};
}