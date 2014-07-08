// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/template_sequence/aux_/apply_sequence.cpp {{{
 * \file tml/template_sequence/aux_/apply_sequence.cpp
 * \example tml/template_sequence/aux_/apply_sequence.cpp
 * \brief Usage example for \ref tml::apply_sequence_impl<aux::template_sequence_tag>
 */ // }}}

// [Code]
#include <tml/apply_sequence.hpp>
#include <tml/quote.hpp>

#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/apply_sequence.hpp>

using namespace tml;

template <class... > struct seq { typedef aux::template_sequence_tag sequence_tag; };
template <class... > struct seq2 { typedef seq2 type; };

typedef seq<char,short,int,float> s1;
typedef apply_sequence<quote<seq2>,s1>::type r1;

#include <tml/is_same.hpp>
static_assert(is_same<r1, seq2<char,short,int,float> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
