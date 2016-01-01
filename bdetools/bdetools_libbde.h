/*
 * The internal libbde header
 *
 * Copyright (c) 2011, Joachim Metz <jbmetz@users.sourceforge.net>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _BDETOOLS_LIBBDE_H )
#define _BDETOOLS_LIBBDE_H

#include <common.h>

/* If Cygwin libtool DLL support is enabled set LIBBDE_DLL_IMPORT
 * before including libbde.h
 */
#if defined( _WIN32 ) && defined( DLL_EXPORT )
#if !defined( HAVE_STATIC_EXECUTABLES )
#define LIBBDE_DLL_IMPORT
#endif
#endif

#include <libbde.h>

#endif

