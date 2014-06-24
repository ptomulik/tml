// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/int.cpp {{{
 * \file tml/int.cpp
 * \example tml/int.cpp
 * \brief Usage example for tml::int_
 */ // }}}

// [Code]
#include <tml/int.hpp>

using namespace tml;

typedef int_<8> eight;

#include <tml/is_same.hpp>
static_assert( is_same<eight::value_type, int>::value, "");
static_assert( is_same<eight::type, eight>::value, "");
static_assert( eight::value == 8, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
