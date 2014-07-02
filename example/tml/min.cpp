// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/min.cpp {{{
 * \file tml/min.cpp
 * \example tml/min.cpp
 * \brief Usage example for tml::min
 */ // }}}

// [Code]
#include <tml/min.hpp>
#include <tml/int.hpp>
#include <tml/long.hpp>

using namespace tml;

typedef min<int_<24>, long_<5> >::type r;

#include <tml/is_same.hpp>
static_assert(is_same<r, long_<5> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
