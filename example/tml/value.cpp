// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/value.cpp {{{
 * \file tml/value.cpp
 * \example tml/value.cpp
 * \brief Usage example for tml::value_
 */ // }}}

// [Code]
#include <tml/value.hpp>
#include <type_traits>

using namespace tml;
static_assert(std::is_same<value_<int,2>::value_type, int>::value, "");
static_assert(value_<int,2>::value == 2, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
