// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/variadic/erase_front.cpp {{{
 * \file tml/variadic/erase_front.cpp
 * \example tml/variadic/erase_front.cpp
 * \brief Usage example for \ref tml::variadic::erase_front
 */ // }}}

// [Code]
#include <tml/variadic/erase_front.hpp>
#include <tml/quote.hpp>
#include <tml/int.hpp>

using namespace tml;

template <class... Args> struct seq;

typedef variadic::erase_front_c<quote<seq>, 2>::apply<char, short, int, float>::type r1;
typedef variadic::erase_front<quote<seq>, int_<2> >::apply<char, short, int, float>::type r2;

#include <tml/is_same.hpp>
static_assert(is_same<r1,seq<int,float> >::value, "");
static_assert(is_same<r2,seq<int,float> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
