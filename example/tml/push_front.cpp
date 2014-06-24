// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/push_front.cpp {{{
 * \file tml/push_front.cpp
 * \example tml/push_front.cpp
 * \brief Usage example for tml::push_front
 */ // }}}

// [Code]
#include <tml/sequence.hpp>
#include <tml/push_front.hpp>

using namespace tml;

typedef sequence<short,int,float> s1;
typedef push_front<s1,char>::type r1;

#include <tml/is_same.hpp>
static_assert(is_same<r1, sequence<char,short,int,float> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
