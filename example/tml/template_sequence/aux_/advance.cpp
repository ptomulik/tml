// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/template_sequence/aux_/advance.cpp {{{
 * \file tml/template_sequence/aux_/advance.cpp
 * \example tml/template_sequence/aux_/advance.cpp
 * \brief Usage example for tml::advance_impl<aux::template_sequence_tag>
 */ // }}}

// [Code]
#include <tml/advance.hpp>
#include <tml/long.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/advance.hpp>

using namespace tml;

template <long N>
struct iter
{
  template <long I>
    struct advance
    {
      typedef iter<N+I> type;
    };
  typedef aux::ts_iter_tag iterator_tag;
};

typedef iter<4> i1;
typedef advance<i1,long_<3l> >::type i2;

#include <tml/is_same.hpp>
static_assert(is_same<i2, iter<7> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
