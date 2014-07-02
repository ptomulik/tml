// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/times.cpp {{{
 * \file tml/times.cpp
 * \example tml/times.cpp
 * \brief Usage example for tml::times
 */ // }}}

// [Code]
#include <tml/times.hpp>
#include <tml/int.hpp>
#include <tml/long.hpp>

using namespace tml;

typedef times<int_<2>, long_<3>, int_<4> >::type r;

#include <tml/is_same.hpp>
static_assert(is_same<r, long_<24> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
