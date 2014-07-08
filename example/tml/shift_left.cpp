// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/shift_left.cpp {{{
 * \file tml/shift_left.cpp
 * \example tml/shift_left.cpp
 * \brief Usage example for \ref tml::shift_left
 */ // }}}

// [Code]
#include <tml/shift_left.hpp>
#include <tml/integral_c.hpp>

using namespace tml;

typedef integral_c<unsigned,0> u0;
typedef integral_c<unsigned,1> u1;
typedef integral_c<unsigned,2> u2;
typedef integral_c<unsigned,8> u8;

static_assert(shift_left<u0,u0>::value == 0, "");
static_assert(shift_left<u1,u0>::value == 1, "");
static_assert(shift_left<u1,u1>::value == 2, "");
static_assert(shift_left<u2,u1>::value == 4, "");
static_assert(shift_left<u8,u1>::value == 16, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
