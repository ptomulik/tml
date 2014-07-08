// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/end.cpp {{{
 * \file tml/end.cpp
 * \example tml/end.cpp
 * \brief Usage example for \ref tml::end
 */ // }}}

// [Code]
#include <tml/sequence.hpp>
#include <tml/end.hpp>
#include <tml/deref.hpp>
#include <tml/prior.hpp>

using namespace tml;

typedef sequence<char,short,int,float> s1;
typedef end<s1>::type e1;
typedef deref<prior<e1>::type>::type last;

#include <tml/is_same.hpp>
static_assert(is_same<last, float>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
