// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/less_equal.cpp {{{
 * \file tml/less_equal.cpp
 * \example tml/less_equal.cpp
 * \brief Usage example for tml::less_equal
 */ // }}}

// [Code]
#include <tml/less_equal.hpp>
#include <tml/int.hpp>
#include <tml/long.hpp>

using namespace tml;

typedef less_equal<int_<24>, long_<5> >::type r1;
typedef less_equal<int_<5>, long_<24> >::type r2;
typedef less_equal<int_<6>, int_<6> >::type r3;

static_assert(r1::value == false, "");
static_assert(r2::value == true, "");
static_assert(r3::value == true, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
