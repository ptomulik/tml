// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/not.cpp {{{
 * \file tml/not.cpp
 * \example tml/not.cpp
 * \brief Usage example for tml::not_
 */ // }}}

// [Code]
#include <tml/not.hpp>
#include <tml/bool.hpp>
#include <tml/integral_c_tag.hpp>

using namespace tml;

struct t { typedef true_ type; typedef integral_c_tag numeric_tag; };
struct f { typedef false_ type; typedef integral_c_tag numeric_tag; };

static_assert(not_<false_>::value == true, "");
static_assert(not_<true_>::value == false, "");
static_assert(not_<f>::value == true, "");
static_assert(not_<t>::value == false, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
