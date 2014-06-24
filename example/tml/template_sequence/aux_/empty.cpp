// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/template_sequence/aux_/empty.cpp {{{
 * \file tml/template_sequence/aux_/empty.cpp
 * \example tml/template_sequence/aux_/empty.cpp
 * \brief Usage example for tml::empty_impl<aux::template_sequence_tag>
 */ // }}}

// [Code]
#include <tml/empty.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/empty.hpp>

using namespace tml;

template <class...> struct seq { typedef aux::template_sequence_tag sequence_tag; };

typedef seq<char,short,int,float> s1;
typedef seq<> s2;

#include <tml/is_same.hpp>
static_assert(empty<s1>::value == false, "");
static_assert(empty<s2>::value == true, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
