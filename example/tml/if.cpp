// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/if.cpp {{{
 * \file tml/if.cpp
 * \example tml/if.cpp
 * \brief Usage example for \ref tml::if_
 */ // }}}

// [Code]
#include <tml/if.hpp>
#include <tml/bool.hpp>
#include <tml/is_same.hpp>

using namespace tml;
static_assert(is_same<if_<true_,char,long>::type, char>::value, "");
static_assert(is_same<if_<false_,char,long>::type, long>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
