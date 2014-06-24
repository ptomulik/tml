// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/char.cpp {{{
 * \file tml/char.cpp
 * \example tml/char.cpp
 * \brief Usage example for tml::char_
 */ // }}}

// [Code]
#include <tml/char.hpp>

using namespace tml;

typedef char_<'8'> eight;

#include <tml/is_same.hpp>
static_assert( is_same<eight::value_type, char>::value, "");
static_assert( is_same<eight::type, eight>::value, "");
static_assert( eight::value == '8', "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
