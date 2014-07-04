// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/num_to_string.cpp {{{
 * \file tml/num_to_string.cpp
 * \example tml/num_to_string.cpp
 * \brief Usage example for tml::num_to_string
 */ // }}}

// [Code]
#include <tml/num_to_string.hpp>
#include <tml/c_str.hpp>
#include <tml/equal.hpp>
#include <tml/sequence.hpp>

using namespace tml;

typedef num_to_string_c<int,123>::type n1;
typedef int_to_string<-123>::type n2;
typedef long_to_string<-0x1AFl, char, 16>::type n3;

static_assert(equal<n1,sequence_c<char,'1','2','3'> >::value, "");
static_assert(equal<n2,sequence_c<char,'-','1','2','3'> >::value, "");
static_assert(equal<n3,sequence_c<char,'-','1','A','F'> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
