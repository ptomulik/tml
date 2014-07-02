// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/not_equal_to.cpp {{{
 * \file tml/not_equal_to.cpp
 * \example tml/not_equal_to.cpp
 * \brief Usage example for tml::not_equal_to
 */ // }}}

// [Code]
#include <tml/not_equal_to.hpp>
#include <tml/int.hpp>
#include <tml/long.hpp>

using namespace tml;

typedef not_equal_to<int_<24>, int_<5> >::type r1;
typedef not_equal_to<int_<6>, long_<6> >::type r2;

static_assert(r1::value == true , "");
static_assert(r2::value == false, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
