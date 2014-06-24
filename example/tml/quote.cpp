// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/quote.cpp {{{
 * \file tml/quote.cpp
 * \example tml/quote.cpp
 * \brief Usage example for tml::quote
 */ // }}}

// [Code]
#include <tml/quote.hpp>

using namespace tml;
template <class T>
  struct f1
  {
    typedef T type;
  };
template<class T1, class T2, class T3, class T4, class T5>
  struct f5
  {
    // no 'type' member!
  };

typedef quote<f1>::apply<int>::type t1;
typedef quote<f5>::apply<char,short,int,long,float>::type t5;

#include <tml/is_same.hpp>
static_assert(is_same<t1, int>::value, "");
static_assert(is_same<t5, f5<char,short,int,long,float> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
