/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2020-2023 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/

#pragma once

#include "Layout.h"

namespace KDDockWidgets::Core {
class Layout::Private
{
public:
    bool m_inResizeEvent = false;
    Core::ItemContainer *m_rootItem = nullptr;
    KDBindings::ConnectionHandle m_minSizeChangedHandler;
    bool m_viewDeleted = false;
};
}