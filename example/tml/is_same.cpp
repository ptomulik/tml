// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/is_same.cpp {{{
 * \file tml/is_same.cpp
 * \example tml/is_same.cpp
 * \brief Usage example for \ref tml::class
 */ // }}}

// [Code]
#include <tml/is_same.hpp>

using namespace tml;

struct s;

static_assert(is_same<int,int>::value == true, "");
static_assert(is_same<s,s>::value == true, "");
static_assert(is_same<s,int>::value == false, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
