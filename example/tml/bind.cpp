// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/bind.cpp {{{
 * \file tml/bind.cpp
 * \example tml/bind.cpp
 * \brief Usage example for \ref tml::bind
 */ // }}}

// [Code]
#include <tml/bind.hpp>
#include <tml/placeholders.hpp>

using namespace tml;

struct f1
{
  template< class T1 >
    struct apply
    {
      typedef T1 type;
    };
};

struct f5
{
  template< class T1, class T2, class T3, class T4, class T5 >
    struct apply
    {
      typedef T5 type;
    };
};

typedef apply_wrap<bind<f1,_1>, int>::type r11;
typedef apply_wrap<bind<f1,_5>, void, void, void, void, int>::type r12;
typedef apply_wrap<bind<f5,_1,_2,_3,_4,_5>, void, void, void, void, int>::type r51;
typedef apply_wrap<bind<f5,_5,_4,_3,_2,_1>, int, void, void, void, void>::type r52;

#include <tml/is_same.hpp>
static_assert(is_same<r11,int>::value, "");
static_assert(is_same<r12,int>::value, "");
static_assert(is_same<r51,int>::value, "");
static_assert(is_same<r52,int>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
