/*
    This file is part of Libiprit by Andrei Borovsky <anb@symmetrica.net>.

    Libiprit is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libiprit is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Libiprit.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBIPRIT_GLOBAL_H
#define LIBIPRIT_GLOBAL_H

#include <QtCore/qglobal.h>

#define LIBIPRIT_LIBRARY

#if defined(LIBIPRIT_LIBRARY)
#  define LIBIPRITSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBIPRITSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBIPRIT_GLOBAL_H
