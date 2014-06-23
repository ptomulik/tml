// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/value_sequence.cpp {{{
 * \file tml/value_sequence.cpp
 * \example tml/value_sequence.cpp
 * \brief Usage example for tml::value_sequence
 */ // }}}

// [Code]
#include <tml/value_sequence.hpp>
#include <tml/sequence_tag.hpp>
#include <tml/sequence.hpp>
#include <type_traits>

template <int I> using int_ = std::integral_constant<int, I>;
using namespace tml;

static_assert(std::is_same< sequence_tag< value_sequence<int,1,2> >::type, value_sequence_tag<int> >::value, "");
static_assert(std::is_same< sequence<value_sequence_tag<int>,int_<1>,int_<2> >::type, value_sequence<int,1,2> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
