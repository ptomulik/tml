// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/c_str.cpp {{{
 * \file tml/c_str.cpp
 * \example tml/c_str.cpp
 * \brief Usage example for tml::c_str
 */ // }}}

// [Code]
#include <tml/c_str.hpp>
#include <tml/sequence.hpp>

using namespace tml;

typedef c_str<sequence_c<char,'a','b','c'> >::type s;
constexpr char const* r = s::value;

static_assert(r[0] == 'a', "");
static_assert(r[1] == 'b', "");
static_assert(r[2] == 'c', "");
static_assert(r[3] == '\x0', "");

#include <tml/is_same.hpp>
static_assert(is_same<s::value_type, char const[4]>::value, "");
static_assert(is_same<s::type, s>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
