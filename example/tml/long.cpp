// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/long.cpp {{{
 * \file tml/long.cpp
 * \example tml/long.cpp
 * \brief Usage example for \ref tml::long_
 */ // }}}

// [Code]
#include <tml/long.hpp>

using namespace tml;

typedef long_<8l> eight;

#include <tml/is_same.hpp>
static_assert( is_same<eight::value_type, long>::value, "");
static_assert( is_same<eight::type, eight>::value, "");
static_assert( eight::value == 8l, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
