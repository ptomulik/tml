// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/at.cpp {{{
 * \file tml/at.cpp
 * \example tml/at.cpp
 * \brief Usage example for tml::at
 */ // }}}

// [Code]
#include <tml/sequence.hpp>
#include <tml/at.hpp>
#include <tml/int.hpp>

using namespace tml;

typedef sequence<char,int_<5>,int,float> s1;

#include <tml/is_same.hpp>
static_assert(is_same< at_c<s1,1>::type, int_<5> >::value, "");
static_assert(is_same< at_c<s1,2>::type, int>::value, "");
static_assert(at<s1,int_<1> >::value == 5, "");

// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
