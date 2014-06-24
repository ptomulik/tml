// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/lambda.cpp {{{
 * \file tml/lambda.cpp
 * \example tml/lambda.cpp
 * \brief Usage example for tml::lambda
 */ // }}}

// [Code]
#include <tml/int.hpp>
#include <tml/placeholders.hpp>
#include <tml/lambda.hpp>
#include <tml/bind.hpp>
#include <tml/quote.hpp>

using namespace tml;

template< class N1, class N2 >
  struct int_plus
    : int_<( N1::value + N2::value )>
  { };

typedef lambda< int_plus<_1, int_<42> > >::type f1;
static_assert(f1::apply<int_<42> >::type::value == 84, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
