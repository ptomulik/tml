// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/variadic/join.cpp {{{
 * \file tml/variadic/join.cpp
 * \example tml/variadic/join.cpp
 * \brief Usage example for \ref tml::variadic::join
 */ // }}}

// [Code]
#include <tml/variadic/join.hpp>
#include <tml/quote.hpp>

using namespace tml;

template<class...> struct seq;
typedef variadic::join<quote<seq>, char,short>::apply<int,float>::type r;

#include <tml/is_same.hpp>
static_assert(is_same<r, seq<char,short,int,float> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
