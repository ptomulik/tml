// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/size_t.cpp {{{
 * \file tml/size_t.cpp
 * \example tml/size_t.cpp
 * \brief Usage example for \ref tml::size_t
 */ // }}}

// [Code]
#include <tml/size_t.hpp>

using namespace tml;

typedef size_t_<8ul> eight;

#include <tml/is_same.hpp>
static_assert( is_same<eight::value_type, std::size_t>::value, "");
static_assert( is_same<eight::type, eight>::value, "");
static_assert( eight::value == 8ul, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
