// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/unpack_args.cpp {{{
 * \file tml/unpack_args.cpp
 * \example tml/unpack_args.cpp
 * \brief Usage example for tml::unpack_args
 */ // }}}

// [Code]
#include <tml/unpack_args.hpp>
#include <tml/apply.hpp>
#include <tml/is_same.hpp>
#include <tml/placeholders.hpp>
#include <tml/sequence.hpp>

using namespace tml;

typedef is_same<_1,_2> f;
static_assert(apply< unpack_args<f>, sequence<int,int> >::type::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
