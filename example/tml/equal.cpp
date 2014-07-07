// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/equal.cpp {{{
 * \file tml/equal.cpp
 * \example tml/equal.cpp
 * \brief Usage example for tml::equal
 */ // }}}

// [Code]
#include <tml/equal.hpp>
#include <tml/sequence.hpp>
#include <tml/equal_to.hpp>
#include <tml/placeholders.hpp>

using namespace tml;

// equal sequences
static_assert( equal<sequence<>,sequence<> >::value, "");
static_assert( equal<sequence<int>, sequence<int> >::value, "");
static_assert( equal<sequence<int,char>, sequence<int,char> >::value, "");

// different content
static_assert(!equal<sequence<int>, sequence<char> >::value, "");
static_assert(!equal<sequence<int,char>, sequence<char,int> >::value, "");
static_assert(!equal<sequence_c<int,1,2,3>, sequence_c<long,1,2,3> >::value, "");

// different size
static_assert(!equal<sequence<>, sequence<char> >::value, "");
static_assert(!equal<sequence<int>, sequence<> >::value, "");
static_assert(!equal<sequence<int,char>, sequence<int> >::value, "");
static_assert(!equal<sequence<int>, sequence<int,char> >::value, "");

// custom predicate
static_assert( equal<sequence_c<int>, sequence_c<long> >::value, "");
static_assert( equal<sequence_c<int,1,2,3>, sequence_c<long,1,2,3>, equal_to<_1,_2> >::value, "");
static_assert(!equal<sequence_c<int,1,2,3>, sequence_c<int,2,2,1>, equal_to<_1,_2> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
