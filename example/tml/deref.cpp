// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/deref.cpp {{{
 * \file tml/deref.cpp
 * \example tml/deref.cpp
 * \brief Usage example for tml::deref
 */ // }}}

// [Code]
#include <tml/sequence.hpp>
#include <tml/deref.hpp>
#include <tml/begin.hpp>
#include <tml/advance.hpp>
#include <tml/long.hpp>

using namespace tml;

typedef sequence<char,short,int,float> s1;
typedef advance<begin<s1>::type, long_<2l> >::type i1;


#include <tml/is_same.hpp>
static_assert(is_same<deref<i1>::type,int>::value, "");

// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
