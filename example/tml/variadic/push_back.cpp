// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/variadic/push_back.cpp {{{
 * \file tml/variadic/push_back.cpp
 * \example tml/variadic/push_back.cpp
 * \brief Usage example for tml::tml::variadic::push_back
 */ // }}}

// [Code]
#include <tml/variadic/push_back.hpp>
#include <tml/quote.hpp>

using namespace tml;

template <class... Args> struct seq;

typedef variadic::push_back<quote<seq>, int>::apply<char, short>::type s1;

#include <tml/is_same.hpp>
static_assert(is_same< s1, seq<char, short, int> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
