// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/enable_if.cpp {{{
 * \file tml/enable_if.cpp
 * \example tml/enable_if.cpp
 * \brief Usage example for tml::enable_if
 */ // }}}

// [Code]
#include <tml/enable_if.hpp>

using namespace tml;

typedef char array[20];

// Use SFINAE to specialize foo for types having sizeof(T) > 10
template <class T, class Enable = void>
  struct foo
  {
    typedef char type;
  };
template <class T>
  struct foo<T, typename enable_if_c<(sizeof(T) > 10)>::type>
  {
    typedef int type;
  };

#include <tml/is_same.hpp>
static_assert(is_same<foo<int>::type, char>::value, "");
static_assert(is_same<foo<array>::type, int>::value, "");

// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
