// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/bitor.cpp {{{
 * \file tml/bitor.cpp
 * \example tml/bitor.cpp
 * \brief Usage example for tml::bitor_
 */ // }}}

// [Code]
#include <tml/bitor.hpp>
#include <tml/integral_c.hpp>

using namespace tml;

typedef integral_c<unsigned,0> u0;
typedef integral_c<unsigned,1> u1;
typedef integral_c<unsigned,8> u8;
typedef integral_c<unsigned,0xffffffffu> uffffffff;

static_assert(bitor_<u0,u0>::value == 0, "");
static_assert(bitor_<u1,u0>::value == 1, "");
static_assert(bitor_<u0,u1>::value == 1, "");
static_assert(bitor_<u0,uffffffff>::value == 0xffffffffu, "");
static_assert(bitor_<u1,uffffffff>::value == 0xffffffffu, "");
static_assert(bitor_<u8,uffffffff>::value == 0xffffffffu, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
