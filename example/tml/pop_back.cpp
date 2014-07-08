// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/pop_back.cpp {{{
 * \file tml/pop_back.cpp
 * \example tml/pop_back.cpp
 * \brief Usage example for \ref tml::pop_back
 */ // }}}

// [Code]
#include <tml/sequence.hpp>
#include <tml/pop_back.hpp>

using namespace tml;

typedef sequence<char,short,int,float> s1;
typedef pop_back<s1>::type r1;

#include <tml/is_same.hpp>
static_assert(is_same<r1,sequence<char,short,int> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
