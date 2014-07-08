// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/variadic/erase_back.cpp {{{
 * \file tml/variadic/erase_back.cpp
 * \example tml/variadic/erase_back.cpp
 * \brief Usage example for \ref tml::variadic::erase_back
 */ // }}}

// [Code]
#include <tml/variadic/erase_back.hpp>
#include <tml/quote.hpp>
#include <tml/int.hpp>

using namespace tml;

template <class... Args> struct seq;

typedef variadic::erase_back_c<quote<seq>, 2>::apply<char, short, int, float>::type t2;
typedef variadic::erase_back<quote<seq>, int_<3> >::apply<char, short, int, float>::type t3;

#include <tml/is_same.hpp>
static_assert(is_same<t2,seq<char,short> >::value, "");
static_assert(is_same<t3,seq<char,short,int> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
