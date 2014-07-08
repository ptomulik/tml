// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/bitxor.cpp {{{
 * \file tml/bitxor.cpp
 * \example tml/bitxor.cpp
 * \brief Usage example for \ref tml::bitxor_
 */ // }}}

// [Code]
#include <tml/bitxor.hpp>
#include <tml/integral_c.hpp>

using namespace tml;

typedef integral_c<unsigned,0> u0;
typedef integral_c<unsigned,1> u1;
typedef integral_c<unsigned,8> u8;
typedef integral_c<unsigned,0xffffffffu> uffffffff;

static_assert(bitxor_<u0,u0>::value == 0, "");
static_assert(bitxor_<u1,u0>::value == 1, "");
static_assert(bitxor_<u0,u1>::value == 1, "");
static_assert(bitxor_<u0,uffffffff>::value == (0xffffffffu ^ 0), "");
static_assert(bitxor_<u1,uffffffff>::value == (0xffffffffu ^ 1), "");
static_assert(bitxor_<u8,uffffffff>::value == (0xffffffffu ^ 8), "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
