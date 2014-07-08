// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/variadic/front.cpp {{{
 * \file tml/variadic/front.cpp
 * \example tml/variadic/front.cpp
 * \brief Usage example for \ref tml::variadic::front
 */ // }}}

// [Code]
#include <tml/variadic/front.hpp>
#include <tml/int.hpp>

using namespace tml;

typedef variadic::front::apply<char>::type t1;
typedef variadic::front::apply<char, short, int, float>::type t4;

#include <tml/is_same.hpp>
static_assert(is_same<t1,char>::value, "");
static_assert(is_same<t4,char>::value, "");

static_assert(variadic::front::apply<int_<2>,char,int>::value == 2, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
