// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/is_bind_expr.hpp

/** // doc: tml/is_bind_expr.hpp {{{
 * \file tml/is_bind_expr.hpp
 * \brief Provides \ref tml::is_bind_expr
 */ // }}}
#ifndef TML_IS_BIND_EXPR_HPP
#define TML_IS_BIND_EXPR_HPP

#include <tml/is_bind_expr_fwd.hpp>
#include <tml/bind_fwd.hpp>
#include <tml/quote_fwd.hpp>
#include <tml/bool.hpp>

namespace tml {
/** // doc: is_bind_expr {{{
 * \ingroup MetafunMiscGroup
 * \struct is_bind_expr
 * \brief Tests if a type is a bind expression
 *
 * \tparam F A type to be checked. Any type.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class F
 *      >
 *  struct is_bind_expr
 *  {
 *    typedef unspecified type;
 *  };
 *
 * \endcode
 *
 * \par Description
 *
 * Tests if `F` is a bind expression. Returns boolean \ref IntConstConcept, 
 * which equals `true` if and only if `F` is a bind expression.
 *
 * \par Expression semantics
 *
 * For any type `f`
 * \code
 *  typedef is_bind_expr<f>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: `r` is an \ref IntConstConcept which equals `true` if `f`
 *   is a bind expression, or `false` otherwise.
 *
 * \par Example
 * \snippet tml/is_bind_expr.cpp Code
 *
 */ // }}}
template <class F>
  struct is_bind_expr
    : false_
  { };
template <class F, class... Args>
  struct is_bind_expr<bind<F,Args...> >
    : true_
  { };
} // end namespace tml

#endif /* TML_IS_BIND_EXPR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
