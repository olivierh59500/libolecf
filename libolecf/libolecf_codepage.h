/*
 * Codepage functions
 *
 * Copyright (C) 2008-2016, Joachim Metz <joachim.metz@gmail.com>
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

#if !defined( _LIBOLECF_INTERNAL_CODEPAGE_H )
#define _LIBOLECF_INTERNAL_CODEPAGE_H

#include <common.h>
#include <types.h>

#if defined( __cplusplus )
extern "C" {
#endif

#if !defined( HAVE_LOCAL_LIBOLECF )

#include <libolecf/codepage.h>

/* Define HAVE_LOCAL_LIBOLECF for local use of libolecf
 * The definitions in <libolecf/codepage.h> are copied here
 * for local use of libolecf
 */
#else

/* The codepage definitions
 */
enum LIBOLECF_CODEPAGES
{
	LIBOLECF_CODEPAGE_ASCII		= 20127,

	LIBOLECF_CODEPAGE_ISO_8859_1	= 28591,
	LIBOLECF_CODEPAGE_ISO_8859_2	= 28592,
	LIBOLECF_CODEPAGE_ISO_8859_3	= 28593,
	LIBOLECF_CODEPAGE_ISO_8859_4	= 28594,
	LIBOLECF_CODEPAGE_ISO_8859_5	= 28595,
	LIBOLECF_CODEPAGE_ISO_8859_6	= 28596,
	LIBOLECF_CODEPAGE_ISO_8859_7	= 28597,
	LIBOLECF_CODEPAGE_ISO_8859_8	= 28598,
	LIBOLECF_CODEPAGE_ISO_8859_9	= 28599,
	LIBOLECF_CODEPAGE_ISO_8859_10	= 28600,
	LIBOLECF_CODEPAGE_ISO_8859_11	= 28601,
	LIBOLECF_CODEPAGE_ISO_8859_13	= 28603,
	LIBOLECF_CODEPAGE_ISO_8859_14	= 28604,
	LIBOLECF_CODEPAGE_ISO_8859_15	= 28605,
	LIBOLECF_CODEPAGE_ISO_8859_16	= 28606,

	LIBOLECF_CODEPAGE_KOI8_R	= 20866,
	LIBOLECF_CODEPAGE_KOI8_U	= 21866,

	LIBOLECF_CODEPAGE_WINDOWS_874	= 874,
	LIBOLECF_CODEPAGE_WINDOWS_932	= 932,
	LIBOLECF_CODEPAGE_WINDOWS_936	= 936,
	LIBOLECF_CODEPAGE_WINDOWS_949	= 949,
	LIBOLECF_CODEPAGE_WINDOWS_950	= 950,
	LIBOLECF_CODEPAGE_WINDOWS_1250	= 1250,
	LIBOLECF_CODEPAGE_WINDOWS_1251	= 1251,
	LIBOLECF_CODEPAGE_WINDOWS_1252	= 1252,
	LIBOLECF_CODEPAGE_WINDOWS_1253	= 1253,
	LIBOLECF_CODEPAGE_WINDOWS_1254	= 1254,
	LIBOLECF_CODEPAGE_WINDOWS_1255	= 1255,
	LIBOLECF_CODEPAGE_WINDOWS_1256	= 1256,
	LIBOLECF_CODEPAGE_WINDOWS_1257	= 1257,
	LIBOLECF_CODEPAGE_WINDOWS_1258	= 1258
};

#endif /* !defined( HAVE_LOCAL_LIBOLECF ) */

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBOLECF_INTERNAL_CODEPAGE_H ) */

