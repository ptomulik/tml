// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/template_sequence/aux_/sequence_generator.cpp {{{
 * \file tml/template_sequence/aux_/sequence_generator.cpp
 * \example tml/template_sequence/aux_/sequence_generator.cpp
 * \brief Usage example for \ref tml::sequence_generator_impl<aux::template_sequence_tag>
 */ // }}}

// [Code]
#include <tml/sequence_generator.hpp>
#include <tml/apply.hpp>

#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/sequence_generator.hpp>

using namespace tml;

template <class ...> struct seq { typedef aux::template_sequence_tag sequence_tag; };

typedef seq<char,short,int,float> s1;

typedef apply<sequence_generator<s1>::type, int, float, void>::type r1;

#include <tml/is_same.hpp>
static_assert(is_same<r1, seq<int, float, void> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
