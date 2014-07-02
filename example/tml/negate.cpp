// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/negate.cpp {{{
 * \file tml/negate.cpp
 * \example tml/negate.cpp
 * \brief Usage example for tml::negate
 */ // }}}

// [Code]
#include <tml/negate.hpp>
#include <tml/int.hpp>

using namespace tml;

typedef negate<int_<4> >::type r;

#include <tml/is_same.hpp>
static_assert(is_same<r, int_<-4> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
