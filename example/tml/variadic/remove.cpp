// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/variadic/remove.cpp {{{
 * \file tml/variadic/remove.cpp
 * \example tml/variadic/remove.cpp
 * \brief Usage example for \ref tml::variadic::remove
 */ // }}}

// [Code]
#include <tml/variadic/remove.hpp>
#include <tml/quote.hpp>
#include <tml/int.hpp>

using namespace tml;

template <class... Args> struct seq;

typedef variadic::remove<quote<seq>, int_<1> >::apply<char, short, int, float>::type s1;
typedef variadic::remove_c<quote<seq>, 2>::apply<char, short, int, float>::type s2;

#include <tml/is_same.hpp>
static_assert(is_same< s1, seq<char, int, float> >::value, "");
static_assert(is_same< s2, seq<char, short, float> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
