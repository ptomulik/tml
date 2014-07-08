// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/variadic/any.cpp {{{
 * \file tml/variadic/any.cpp
 * \example tml/variadic/any.cpp
 * \brief Usage example for \ref tml::variadic::any
 */ // }}}

// [Code]
#include <tml/variadic/any.hpp>
#include <tml/int.hpp>
#include <tml/bool.hpp>

using namespace tml;

struct negative
  {
    template <class I>
      struct apply
        : bool_<(I::value < 0)>
      { };
  };

static_assert(!variadic::any<negative>::apply<>::value, "");
static_assert(!variadic::any<negative>::apply<int_<1> >::value, "");
static_assert(!variadic::any<negative>::apply<int_<1>, int_<2> >::value, "");

static_assert( variadic::any<negative>::apply<int_<1>, int_<-1>, int_<2> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
