// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/template_sequence/aux_/at.cpp {{{
 * \file tml/template_sequence/aux_/at.cpp
 * \example tml/template_sequence/aux_/at.cpp
 * \brief Usage example for \ref tml::at_impl<aux::template_sequence_tag>
 */ // }}}

// [Code]
#include <tml/at.hpp>
#include <tml/int.hpp>

#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/at.hpp>

using namespace tml;

template <class ...> struct seq { typedef aux::template_sequence_tag sequence_tag; };

typedef seq<char,int_<5>,int,float> s1;

#include <tml/is_same.hpp>
static_assert(is_same< at_c<s1,1>::type, int_<5> >::value, "");
static_assert(is_same< at_c<s1,2>::type, int>::value, "");
static_assert(at<s1,int_<1> >::value == 5, "");

// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
