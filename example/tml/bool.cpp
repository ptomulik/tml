// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/bool.cpp {{{
 * \file tml/bool.cpp
 * \example tml/bool.cpp
 * \brief Usage example for tml::bool_
 */ // }}}

// [Code]
#include <tml/bool.hpp>

using namespace tml;

typedef bool_<false> f;

#include <tml/is_same.hpp>
static_assert( is_same<f::value_type, bool>::value, "");
static_assert( is_same<f::type, f>::value, "");
static_assert( f::value == false, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
