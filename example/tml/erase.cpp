// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/erase.cpp {{{
 * \file tml/erase.cpp
 * \example tml/erase.cpp
 * \brief Usage example for tml::erase
 */ // }}}

// [Code]
#include <tml/sequence.hpp>
#include <tml/erase.hpp>
#include <tml/begin.hpp>
#include <tml/end.hpp>
#include <tml/next.hpp>
#include <tml/prior.hpp>

using namespace tml;

typedef sequence<char,short,int,float> s1;
typedef next<begin<s1>::type>::type i1;
typedef prior<end<s1>::type>::type i3;
typedef erase<s1,i1,i3>::type s2;

#include <tml/is_same.hpp>
static_assert(is_same<s2, sequence<char,float> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
