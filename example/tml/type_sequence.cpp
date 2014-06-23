// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/type_sequence.cpp {{{
 * \file tml/type_sequence.cpp
 * \example tml/type_sequence.cpp
 * \brief Usage example for tml::type_sequence
 */ // }}}

// [Code]
#include <tml/type_sequence.hpp>
#include <tml/sequence_tag.hpp>
#include <tml/sequence.hpp>
#include <type_traits>

using namespace tml;
static_assert(std::is_same< sequence_tag< type_sequence<void, int> >::type, type_sequence_tag>::value, "");
static_assert(std::is_same< sequence<type_sequence_tag,void,int>::type, type_sequence<void, int> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
