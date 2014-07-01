// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/integral_c.cpp {{{
 * \file tml/integral_c.cpp
 * \example tml/integral_c.cpp
 * \brief Usage example for tml::integral_c
 */ // }}}

// [Code]
#include <tml/integral_c.hpp>
#include <tml/integral_c_tag.hpp>

using namespace tml;

typedef integral_c<short,8> eight;

#include <tml/is_same.hpp>
static_assert( is_same<eight::value_type, short>::value, "");
static_assert( is_same<eight::type, eight>::value, "");
static_assert( eight::value == 8, "");
static_assert( is_same<eight::numeric_tag, integral_c_tag>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
