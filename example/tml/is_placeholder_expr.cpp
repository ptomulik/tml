// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/is_placeholder_expr.cpp {{{
 * \file tml/is_placeholder_expr.cpp
 * \example tml/is_placeholder_expr.cpp
 * \brief Usage example for tml::is_placeholder_expr
 */ // }}}

// [Code]
#include <tml/is_placeholder_expr.hpp>
#include <tml/placeholders.hpp>

using namespace tml;

struct X {};
struct Y;

template<class, class, class> struct f3 { };
static_assert(!is_placeholder_expr<int>::value, "");
static_assert(!is_placeholder_expr<X>::value, "");
static_assert(!is_placeholder_expr<Y>::value, "");
static_assert(!is_placeholder_expr<f3<int,void,float> >::value, "");
static_assert( is_placeholder_expr<arg<1> >::value, "");
static_assert( is_placeholder_expr<_1>::value, "");
static_assert( is_placeholder_expr<_>::value, "");
static_assert( is_placeholder_expr<f3<int,_1,float> >::value, "");

// NOTE: our definition of Placeholder Expression differs from that in MPL
// documentation.
//
// MPL:
//  
// A Placeholder Expression is a type that is either a placeholder or a class
// template specialization with at least one argument that is a Placeholder
// Expression.
//
// TML:
//
// A Placeholder Expression is a type that is either a placeholder or a class
// template specialization with at least one argument that is a placeholder.
//
// As you see, we don't go recursivelly with placeholder search.
// 
// With the concept of Placeholder Exception defined as in MPL our lambdas
// didn't work. Either MPL's Placeholder Expression definition is wrong or
// the MPL's definition of metafunction lambda<> is wrong.
static_assert(!is_placeholder_expr<f3<int,void,f3<_1,_2,_3> > >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
