// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/variadic/at.cpp {{{
 * \file tml/variadic/at.cpp
 * \example tml/variadic/at.cpp
 * \brief Usage example for \ref tml::variadic::at
 */ // }}}

// [Code]
#include <tml/variadic/at.hpp>
#include <tml/int.hpp>

using namespace tml;

typedef variadic::at<int_<0> >::apply<char, short, int, float>::type t0;
typedef variadic::at<int_<1> >::apply<char, short, int, float>::type t1;
typedef variadic::at<int_<3> >::apply<char, short, int, float>::type t3;

typedef variadic::at_c<2>::apply<char, short, int, float>::type t2;

#include <tml/is_same.hpp>
static_assert(is_same<t0,char>::value, "");
static_assert(is_same<t1,short>::value, "");
static_assert(is_same<t2,int>::value, "");
static_assert(is_same<t3,float>::value, "");

static_assert(variadic::at_c<2>::apply<char, short, int_<3>, void>::value == 3, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
