// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/variadic/erase.cpp {{{
 * \file tml/variadic/erase.cpp
 * \example tml/variadic/erase.cpp
 * \brief Usage example for tml::variadic::erase
 */ // }}}

// [Code]
#include <tml/variadic/erase.hpp>
#include <tml/quote.hpp>
#include <tml/int.hpp>

using namespace tml;

template <class... Args> struct seq;
typedef variadic::erase<quote<seq>, int_<1>, int_<3> >::apply<char, short, int, float>::type r1;
typedef variadic::erase_c<quote<seq>, 1, 3>::apply<char, short, int, float>::type r2;

#include <tml/is_same.hpp>
static_assert(is_same<r1,seq<char,float> >::value, "");
static_assert(is_same<r2,seq<char,float> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
