// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/identity.cpp {{{
 * \file tml/identity.cpp
 * \example tml/identity.cpp
 * \brief Usage example for tml::identity
 */ // }}}

// [Code]
#include <tml/identity.hpp>
#include <tml/is_same.hpp>

using namespace tml;
static_assert(is_same<identity<int>::type,int>::value, "");
static_assert(is_same<identity<void>::type,void>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
