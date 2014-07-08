// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/template_sequence/aux_/join.cpp {{{
 * \file tml/template_sequence/aux_/join.cpp
 * \example tml/template_sequence/aux_/join.cpp
 * \brief Usage example for \ref tml::join_impl<aux::template_sequence_tag>
 */ // }}}

// [Code]
#include <tml/join.hpp>
#include <tml/int.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/join.hpp>

using namespace tml;

template <class...> struct seq1 { typedef aux::template_sequence_tag sequence_tag; };
template <class...> struct seq2 { typedef aux::template_sequence_tag sequence_tag; };

typedef seq1<char, short> s1;
typedef seq2<int, float> s2;

typedef join<s1,s2>::type r12;
typedef join<s2,s1>::type r21;

#include <tml/is_same.hpp>
static_assert(is_same<r12, seq1<char,short,int,float> >::value , "");
static_assert(is_same<r21, seq2<int,float,char,short> >::value , "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
