// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/variadic/pop_front.cpp {{{
 * \file tml/variadic/pop_front.cpp
 * \example tml/variadic/pop_front.cpp
 * \brief Usage example for tml::variadic::pop_front
 */ // }}}

// [Code]
#include <tml/variadic/pop_front.hpp>
#include <tml/quote.hpp>

using namespace tml;

template <class... Args> struct seq;

typedef variadic::pop_front<quote<seq> >::apply<char, short, int>::type s1;

#include <tml/is_same.hpp>
static_assert(is_same< s1, seq<short, int> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
