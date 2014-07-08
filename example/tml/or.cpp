// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/or.cpp {{{
 * \file tml/or.cpp
 * \example tml/or.cpp
 * \brief Usage example for \ref tml::or_
 */ // }}}

// [Code]
#include <tml/or.hpp>
#include <tml/bool.hpp>
#include <tml/integral_c_tag.hpp>

using namespace tml;

struct t { typedef true_ type; typedef integral_c_tag numeric_tag; };
struct f { typedef false_ type; typedef integral_c_tag numeric_tag; };

static_assert(or_<false_,false_>::value == false, "");
static_assert(or_<true_,false_>::value == true, "");
static_assert(or_<false_,true_>::value == true, "");
static_assert(or_<true_,true_>::value == true, "");
static_assert(or_<t,f>::value == true, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
