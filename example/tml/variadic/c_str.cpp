// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/variadic/c_str.cpp {{{
 * \file tml/variadic/c_str.cpp
 * \example tml/variadic/c_str.cpp
 * \brief Usage example for \ref tml::variadic::c_str
 */ // }}}

// [Code]
#include <tml/variadic/c_str.hpp>
#include <tml/char.hpp>
#include <tml/int.hpp>
#include <tml/long.hpp>

using namespace tml;

typedef variadic::c_str<>::apply<char_<'a'>, int_<'b'>, long_<'c'> > s;
constexpr char const* r = s::value;

static_assert(r[0] == 'a', "");
static_assert(r[1] == 'b', "");
static_assert(r[2] == 'c', "");
static_assert(r[3] == '\x0', "");

#include <tml/is_same.hpp>
static_assert(is_same<s::value_type, char const[4]>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
