// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/variadic/clear.cpp {{{
 * \file tml/variadic/clear.cpp
 * \example tml/variadic/clear.cpp
 * \brief Usage example for tml::variadic::clear
 */ // }}}

// [Code]
#include <tml/variadic/clear.hpp>
#include <tml/quote.hpp>

using namespace tml;

template <class... Args> struct seq;

typedef variadic::clear<quote<seq> >::apply<char, short, int>::type s1;

#include <tml/is_same.hpp>
static_assert(is_same< s1, seq<> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
