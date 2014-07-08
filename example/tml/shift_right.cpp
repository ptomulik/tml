// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/shift_right.cpp {{{
 * \file tml/shift_right.cpp
 * \example tml/shift_right.cpp
 * \brief Usage example for \ref tml::shift_right
 */ // }}}

// [Code]
#include <tml/shift_right.hpp>
#include <tml/integral_c.hpp>

using namespace tml;

typedef integral_c<unsigned,0> u0;
typedef integral_c<unsigned,1> u1;
typedef integral_c<unsigned,2> u2;
typedef integral_c<unsigned,8> u8;

static_assert(shift_right<u0,u0>::value == 0, "");
static_assert(shift_right<u1,u0>::value == 1, "");
static_assert(shift_right<u1,u1>::value == 0, "");
static_assert(shift_right<u2,u1>::value == 1, "");
static_assert(shift_right<u8,u1>::value == 4, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
