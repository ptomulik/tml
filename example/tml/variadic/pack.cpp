// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/variadic/pack.cpp {{{
 * \file tml/variadic/pack.cpp
 * \example tml/variadic/pack.cpp
 * \brief Usage example for tml::variadic::pack
 */ // }}}

// [Code]
#include <tml/variadic/pack.hpp>
#include <type_traits>

using namespace tml::variadic;
template <class ...> struct F;
static_assert(std::is_same<pack<F,int,char,void>::type, F<int,char,void> >::value,"");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
