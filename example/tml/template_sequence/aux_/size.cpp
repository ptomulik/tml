// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/template_sequence/aux_/size.cpp {{{
 * \file tml/template_sequence/aux_/size.cpp
 * \example tml/template_sequence/aux_/size.cpp
 * \brief Usage example for \ref tml::size_impl<aux::template_sequence_tag>
 */ // }}}

// [Code]
#include <tml/size.hpp>
#include <tml/size_t.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/size.hpp>

using namespace tml;

template <class...> struct seq { typedef aux::template_sequence_tag sequence_tag; };

typedef seq<char,short,int,float> s1;

#include <tml/is_same.hpp>
static_assert(is_same<size<s1>::type,size_t_<4ul> >::value, "");
static_assert(size<s1>::value == 4, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
