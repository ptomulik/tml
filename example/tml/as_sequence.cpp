// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/as_sequence.cpp {{{
 * \file tml/as_sequence.cpp
 * \example tml/as_sequence.cpp
 * \brief Usage example for tml::as_sequence
 */ // }}}

// [Code]
#include <tml/as_sequence.hpp>
#include <tml/sequence.hpp>
#include <tml/value.hpp>
#include <type_traits>

using namespace tml;

struct seq_tag;
// fixed-size sequence with one type- and one value-element.
template <class T1, int v2>
  struct seq
  {
    typedef sequence<seq_tag, T1, value_<int, v2> > sequence_type;
  };

static_assert(std::is_same< as_sequence<seq<int,2> >::type, sequence<seq_tag,int,value_<int,2> > >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
