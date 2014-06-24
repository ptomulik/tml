// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/enable_if_type.cpp {{{
 * \file tml/enable_if_type.cpp
 * \example tml/enable_if_type.cpp
 * \brief Usage example for tml::enable_if_type
 */ // }}}

// [Code]
#include <tml/enable_if_type.hpp>
#include <tml/bool.hpp>

using namespace tml;

// Use SFINAE to detect whether T::type is a valid type.
template <class T, class Enable = void>
  struct has_type
    : false_
{ };
template <class T>
  struct has_type<T, typename enable_if_type<typename T::type>::type>
    : true_
{ };

struct V { typedef V type; };
struct X { };
struct Y;

static_assert( has_type<V>::value, "");
static_assert(!has_type<X>::value, "");
static_assert(!has_type<Y>::value, "");
static_assert(!has_type<int>::value, "");

// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
