// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/sequence_generator.cpp {{{
 * \file tml/sequence_generator.cpp
 * \example tml/sequence_generator.cpp
 * \brief Usage example for tml::sequence_generator
 */ // }}}

// [Code]
#include <tml/sequence.hpp>
#include <tml/sequence_generator.hpp>
#include <tml/apply.hpp>

using namespace tml;

typedef sequence<char,short,int,float> s1;
typedef apply<sequence_generator<s1>::type, int, float, void>::type r1;

#include <tml/is_same.hpp>
static_assert(is_same<r1, sequence<int, float, void> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
