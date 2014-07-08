// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/begin.cpp {{{
 * \file tml/begin.cpp
 * \example tml/begin.cpp
 * \brief Usage example for \ref tml::begin
 */ // }}}

// [Code]
#include <tml/sequence.hpp>
#include <tml/begin.hpp>
#include <tml/deref.hpp>

using namespace tml;

typedef sequence<char,short,int,float> s1;
typedef begin<s1>::type b1;

#include <tml/is_same.hpp>
static_assert(is_same<deref<b1>::type, char>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
