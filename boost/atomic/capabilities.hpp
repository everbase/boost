/*
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 *
 * Copyright (c) 2014 Andrey Semashev
 */
/*!
 * \file   atomic/capabilities.hpp
 *
 * This header defines feature capabilities macros.
 */

#ifndef BOOST_ATOMIC_CAPABILITIES_HPP_INCLUDED_
#define BOOST_ATOMIC_CAPABILITIES_HPP_INCLUDED_

#include <boost/atomic/detail/config.hpp>
#include <boost/atomic/detail/platform.hpp>
#include <boost/atomic/detail/int_sizes.hpp>

#if !defined(BOOST_ATOMIC_EMULATED)
#include BOOST_ATOMIC_DETAIL_HEADER(boost/atomic/detail/caps_)
#endif

#ifdef BOOST_HAS_PRAGMA_ONCE
#pragma once
#endif

#ifndef BOOST_ATOMIC_INT8_LOCK_FREE
#define BOOST_ATOMIC_INT8_LOCK_FREE 0
#endif

#ifndef BOOST_ATOMIC_INT16_LOCK_FREE
#define BOOST_ATOMIC_INT16_LOCK_FREE 0
#endif

#ifndef BOOST_ATOMIC_INT32_LOCK_FREE
#define BOOST_ATOMIC_INT32_LOCK_FREE 0
#endif

#ifndef BOOST_ATOMIC_INT64_LOCK_FREE
#define BOOST_ATOMIC_INT64_LOCK_FREE 0
#endif

#ifndef BOOST_ATOMIC_INT128_LOCK_FREE
#define BOOST_ATOMIC_INT128_LOCK_FREE 0
#endif


#ifndef BOOST_ATOMIC_CHAR_LOCK_FREE
#define BOOST_ATOMIC_CHAR_LOCK_FREE BOOST_ATOMIC_INT8_LOCK_FREE
#endif

#ifndef BOOST_ATOMIC_CHAR16_T_LOCK_FREE
#define BOOST_ATOMIC_CHAR16_T_LOCK_FREE BOOST_ATOMIC_INT16_LOCK_FREE
#endif

#ifndef BOOST_ATOMIC_CHAR32_T_LOCK_FREE
#define BOOST_ATOMIC_CHAR32_T_LOCK_FREE BOOST_ATOMIC_INT32_LOCK_FREE
#endif

#ifndef BOOST_ATOMIC_WCHAR_T_LOCK_FREE
#if BOOST_ATOMIC_DETAIL_SIZEOF_WCHAR_T == 1
#define BOOST_ATOMIC_WCHAR_T_LOCK_FREE BOOST_ATOMIC_INT8_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_WCHAR_T == 2
#define BOOST_ATOMIC_WCHAR_T_LOCK_FREE BOOST_ATOMIC_INT16_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_WCHAR_T == 4
#define BOOST_ATOMIC_WCHAR_T_LOCK_FREE BOOST_ATOMIC_INT32_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_WCHAR_T == 8
#define BOOST_ATOMIC_WCHAR_T_LOCK_FREE BOOST_ATOMIC_INT64_LOCK_FREE
#else
#define BOOST_ATOMIC_WCHAR_T_LOCK_FREE 0
#endif
#endif

#ifndef BOOST_ATOMIC_SHORT_LOCK_FREE
#if BOOST_ATOMIC_DETAIL_SIZEOF_SHORT == 1
#define BOOST_ATOMIC_SHORT_LOCK_FREE BOOST_ATOMIC_INT8_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_SHORT == 2
#define BOOST_ATOMIC_SHORT_LOCK_FREE BOOST_ATOMIC_INT16_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_SHORT == 4
#define BOOST_ATOMIC_SHORT_LOCK_FREE BOOST_ATOMIC_INT32_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_SHORT == 8
#define BOOST_ATOMIC_SHORT_LOCK_FREE BOOST_ATOMIC_INT64_LOCK_FREE
#else
#define BOOST_ATOMIC_SHORT_LOCK_FREE 0
#endif
#endif

#ifndef BOOST_ATOMIC_INT_LOCK_FREE
#if BOOST_ATOMIC_DETAIL_SIZEOF_INT == 1
#define BOOST_ATOMIC_INT_LOCK_FREE BOOST_ATOMIC_INT8_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_INT == 2
#define BOOST_ATOMIC_INT_LOCK_FREE BOOST_ATOMIC_INT16_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_INT == 4
#define BOOST_ATOMIC_INT_LOCK_FREE BOOST_ATOMIC_INT32_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_INT == 8
#define BOOST_ATOMIC_INT_LOCK_FREE BOOST_ATOMIC_INT64_LOCK_FREE
#else
#define BOOST_ATOMIC_INT_LOCK_FREE 0
#endif
#endif

#ifndef BOOST_ATOMIC_LONG_LOCK_FREE
#if BOOST_ATOMIC_DETAIL_SIZEOF_LONG == 1
#define BOOST_ATOMIC_LONG_LOCK_FREE BOOST_ATOMIC_INT8_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_LONG == 2
#define BOOST_ATOMIC_LONG_LOCK_FREE BOOST_ATOMIC_INT16_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_LONG == 4
#define BOOST_ATOMIC_LONG_LOCK_FREE BOOST_ATOMIC_INT32_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_LONG == 8
#define BOOST_ATOMIC_LONG_LOCK_FREE BOOST_ATOMIC_INT64_LOCK_FREE
#else
#define BOOST_ATOMIC_LONG_LOCK_FREE 0
#endif
#endif

#ifndef BOOST_ATOMIC_LLONG_LOCK_FREE
#if BOOST_ATOMIC_DETAIL_SIZEOF_LLONG == 1
#define BOOST_ATOMIC_LLONG_LOCK_FREE BOOST_ATOMIC_INT8_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_LLONG == 2
#define BOOST_ATOMIC_LLONG_LOCK_FREE BOOST_ATOMIC_INT16_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_LLONG == 4
#define BOOST_ATOMIC_LLONG_LOCK_FREE BOOST_ATOMIC_INT32_LOCK_FREE
#elif BOOST_ATOMIC_DETAIL_SIZEOF_LLONG == 8
#define BOOST_ATOMIC_LLONG_LOCK_FREE BOOST_ATOMIC_INT64_LOCK_FREE
#else
#define BOOST_ATOMIC_LLONG_LOCK_FREE 0
#endif
#endif

#ifndef BOOST_ATOMIC_POINTER_LOCK_FREE
#if (BOOST_ATOMIC_DETAIL_SIZEOF_POINTER + 0) == 8
#define BOOST_ATOMIC_POINTER_LOCK_FREE BOOST_ATOMIC_INT64_LOCK_FREE
#elif (BOOST_ATOMIC_DETAIL_SIZEOF_POINTER + 0) == 4
#define BOOST_ATOMIC_POINTER_LOCK_FREE BOOST_ATOMIC_INT32_LOCK_FREE
#else
#define BOOST_ATOMIC_POINTER_LOCK_FREE 0
#endif
#endif

#define BOOST_ATOMIC_ADDRESS_LOCK_FREE BOOST_ATOMIC_POINTER_LOCK_FREE

#ifndef BOOST_ATOMIC_BOOL_LOCK_FREE
#define BOOST_ATOMIC_BOOL_LOCK_FREE BOOST_ATOMIC_INT8_LOCK_FREE
#endif

#ifndef BOOST_ATOMIC_FLAG_LOCK_FREE
#define BOOST_ATOMIC_FLAG_LOCK_FREE BOOST_ATOMIC_BOOL_LOCK_FREE
#endif

#ifndef BOOST_ATOMIC_THREAD_FENCE
#define BOOST_ATOMIC_THREAD_FENCE 0
#endif

#ifndef BOOST_ATOMIC_SIGNAL_FENCE
#define BOOST_ATOMIC_SIGNAL_FENCE 0
#endif

#endif // BOOST_ATOMIC_CAPABILITIES_HPP_INCLUDED_
