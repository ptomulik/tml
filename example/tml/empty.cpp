// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/empty.cpp {{{
 * \file tml/empty.cpp
 * \example tml/empty.cpp
 * \brief Usage example for \ref tml::empty
 */ // }}}

// [Code]
#include <tml/sequence.hpp>
#include <tml/empty.hpp>

using namespace tml;

typedef sequence<char,short,int,float> s1;
typedef sequence<> s2;

static_assert(empty<s1>::value == false, "");
static_assert(empty<s2>::value == true, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
