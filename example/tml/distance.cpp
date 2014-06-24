// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/distance.cpp {{{
 * \file tml/distance.cpp
 * \example tml/distance.cpp
 * \brief Usage example for tml::class
 */ // }}}

// [Code]
#include <tml/sequence.hpp>
#include <tml/distance.hpp>
#include <tml/begin.hpp>
#include <tml/end.hpp>

using namespace tml;

typedef sequence<char,short,int,float> s1;
typedef begin<s1>::type b1;
typedef end<s1>::type e1;

static_assert(distance<b1,e1>::value == 4, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
