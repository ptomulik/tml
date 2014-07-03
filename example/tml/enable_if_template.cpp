// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/enable_if_template.cpp {{{
 * \file tml/enable_if_template.cpp
 * \example tml/enable_if_template.cpp
 * \brief Usage example for tml::enable_if_template
 */ // }}}

// [Code]
#include <tml/enable_if_template.hpp>
#include <tml/bool.hpp>

using namespace tml;

struct f0 { struct apply; };
struct f1 { template <class> struct apply; };
struct f2 { template <class,class> struct apply; };
struct fv { template <class...> struct apply; };

template <class T, class Enable = void>
  struct has_apply
    : false_
{ };
template <class T>
  struct has_apply<T, typename enable_if_template<T::template apply>::type>
    : true_
{ };

static_assert(has_apply<f0>::value == false, "");
static_assert(has_apply<f1>::value == true, "");
static_assert(has_apply<f2>::value == true, "");
static_assert(has_apply<fv>::value == true, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
