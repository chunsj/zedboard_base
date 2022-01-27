/* Determine the wordsize from the preprocessor defines.

   Copyright (C) 2016-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#if defined (__aarch64__) && defined (__LP64__)
# define __WORDSIZE			64
#elif defined (__aarch64__)
# define __WORDSIZE			32
# define __WORDSIZE32_SIZE_ULONG	1
# define __WORDSIZE32_PTRDIFF_LONG	1
#else
# define __WORDSIZE			32
# define __WORDSIZE32_SIZE_ULONG	0
# define __WORDSIZE32_PTRDIFF_LONG	0
#endif

#define __WORDSIZE_TIME64_COMPAT32	0