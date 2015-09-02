/* Definitions for <stdint.h> types on systems using Cygwin.
   Copyright (C) 2009-2014 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#define SIG_ATOMIC_TYPE "int"

/* Exact-width integer types */

#define INT8_TYPE "signed char"
#define INT16_TYPE "short int"
#define INT32_TYPE "int"
#ifdef __x86_64__
#define INT64_TYPE "long int"
#else
#define INT64_TYPE "long long int"
#endif

#define UINT8_TYPE "unsigned char"
#define UINT16_TYPE "short unsigned int"
#define UINT32_TYPE "unsigned int"
#ifdef __x86_64__
#define UINT64_TYPE "long unsigned int"
#else
#define UINT64_TYPE "long long unsigned int"
#endif

/* Minimum-width integer types */

#define INT_LEAST8_TYPE "signed char"
#define INT_LEAST16_TYPE "short int"
#define INT_LEAST32_TYPE "int"
#ifdef __x86_64__
#define INT_LEAST64_TYPE "long int"
#else
#define INT_LEAST64_TYPE "long long int"
#endif

#define UINT_LEAST8_TYPE "unsigned char"
#define UINT_LEAST16_TYPE "short unsigned int"
#define UINT_LEAST32_TYPE "unsigned int"
#ifdef __x86_64__
#define UINT_LEAST64_TYPE "long unsigned int"
#else
#define UINT_LEAST64_TYPE "long long unsigned int"
#endif

/* Fastest minimum-width integer types */

#define INT_FAST8_TYPE "signed char"
#ifdef __x86_64__
#define INT_FAST16_TYPE "long int"
#define INT_FAST32_TYPE "long int"
#define INT_FAST64_TYPE "long int"
#else
#define INT_FAST16_TYPE "int"
#define INT_FAST32_TYPE "int"
#define INT_FAST64_TYPE "long long int"
#endif

#define UINT_FAST8_TYPE "unsigned char"
#ifdef __x86_64__
#define UINT_FAST16_TYPE "long unsigned int"
#define UINT_FAST32_TYPE "long unsigned int"
#define UINT_FAST64_TYPE "long unsigned int"
#else
#define UINT_FAST16_TYPE "unsigned int"
#define UINT_FAST32_TYPE "unsigned int"
#define UINT_FAST64_TYPE "long long unsigned int"
#endif

/* Integer types capable of holding object pointers */

#ifdef __x86_64__
#define INTPTR_TYPE "long int"
#define UINTPTR_TYPE "long unsigned int"
#else
#define INTPTR_TYPE "int"
#define UINTPTR_TYPE "unsigned int"
#endif
