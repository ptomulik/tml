// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/minus.cpp {{{
 * \file tml/minus.cpp
 * \example tml/minus.cpp
 * \brief Usage example for tml::minus
 */ // }}}

// [Code]
#include <tml/minus.hpp>
#include <tml/int.hpp>
#include <tml/long.hpp>

using namespace tml;

typedef minus<int_<1>, long_<2>, int_<3> >::type r;

#include <tml/is_same.hpp>
static_assert(is_same<r, long_<-4> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
