// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/is_bind_expr.cpp {{{
 * \file tml/is_bind_expr.cpp
 * \example tml/is_bind_expr.cpp
 * \brief Usage example for tml::is_bind_expr
 */ // }}}

// [Code]
#include <tml/is_bind_expr.hpp>
#include <tml/bind.hpp>
#include <tml/placeholders.hpp>

template <class T>
  struct f
  {
    typedef T type;
  };

struct g
{
  template <class T>
    struct apply
    {
      typedef T type;
    };
};

using namespace tml;

typedef is_bind_expr<g>::type r1;
typedef is_bind_expr<f<_1> >::type r2;
typedef is_bind_expr<bind<g,_1> >::type r3;

static_assert(r1::value == false, "");
static_assert(r2::value == false, "");
static_assert(r3::value == true, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
