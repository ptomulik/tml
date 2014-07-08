// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/template_sequence/aux_/insert.cpp {{{
 * \file tml/template_sequence/aux_/insert.cpp
 * \example tml/template_sequence/aux_/insert.cpp
 * \brief Usage example for \ref tml::insert_impl<aux::template_sequence_tag>
 */ // }}}

// [Code]
#include <tml/insert.hpp>
#include <tml/long.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/insert.hpp>

using namespace tml;

template <class ...> struct seq { typedef aux::template_sequence_tag sequence_tag; };
template <long N>
  struct iter
  {
    typedef long_<N> pos;
  };

typedef seq<char,int,float> s1;

typedef insert<s1,iter<1>,short>::type r1;

#include <tml/is_same.hpp>
static_assert(is_same<r1,seq<char,short,int,float> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
