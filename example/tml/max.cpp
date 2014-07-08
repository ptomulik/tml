// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/max.cpp {{{
 * \file tml/max.cpp
 * \example tml/max.cpp
 * \brief Usage example for \ref tml::max
 */ // }}}

// [Code]
#include <tml/max.hpp>
#include <tml/int.hpp>
#include <tml/long.hpp>

using namespace tml;

typedef max<int_<24>, long_<5> >::type r;

#include <tml/is_same.hpp>
static_assert(is_same<r, int_<24> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
