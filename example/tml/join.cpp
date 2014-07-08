// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/join.cpp {{{
 * \file tml/join.cpp
 * \example tml/join.cpp
 * \brief Usage example for \ref tml::join
 */ // }}}

// [Code]
#include <tml/sequence.hpp>
#include <tml/join.hpp>

using namespace tml;

typedef sequence<char,short> s1;
typedef sequence<int,float> s2;
typedef join<s1,s2>::type r12;
typedef join<s2,s1>::type r21;

#include <tml/is_same.hpp>
static_assert(is_same<r12, sequence<char,short,int,float> >::value , "");
static_assert(is_same<r21, sequence<int,float,char,short> >::value , "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
