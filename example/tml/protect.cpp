// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/protect.cpp {{{
 * \file tml/protect.cpp
 * \example tml/protect.cpp
 * \brief Usage example for tml::protect
 */ // }}}

// [Code]
#include <tml/protect.hpp>
#include <tml/bind.hpp>
#include <tml/quote.hpp>
#include <tml/apply_wrap.hpp>
#include <tml/bool.hpp>
#include <tml/placeholders.hpp>

using namespace tml;

struct f
{
  template< class T1, class T2 > struct apply
  {
    typedef T2 type;
  };
};

typedef bind< quote<if_>,_1,_2,bind<f,_1,_2> > b1;
typedef bind< quote<if_>,_1,_2,protect< bind<f,_1,_2> > > b2;

typedef apply_wrap< b1,false_,char >::type r1;
typedef apply_wrap< b2,false_,char >::type r2;

#include <tml/is_same.hpp>
static_assert(is_same<r1,char>::value, "");
static_assert(is_same<r2,protect< bind<f,_1,_2> > >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
