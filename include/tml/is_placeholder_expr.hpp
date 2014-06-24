// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/is_placeholder_expr.hpp

/** // doc: tml/is_placeholder_expr.hpp {{{
 * \file tml/is_placeholder_expr.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_IS_PLACEHOLDER_EXPR_HPP
#define TML_IS_PLACEHOLDER_EXPR_HPP

#include <tml/is_placeholder_expr_fwd.hpp>
#include <tml/is_placeholder.hpp>
#include <tml/variadic/any.hpp>
#include <tml/quote.hpp>

namespace tml {
/** // doc: is_placeholder_expr {{{
 * \ingroup MetafunMiscGroup
 * \struct is_placeholder_expr
 * \brief Tests if a type is a \ref PlaceholderExprConcept
 *
 * \tparam E The type to check.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class E
 *      >
 *  struct is_placeholder_expr
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Tests if `E` is a \ref PlaceholderExprConcept. Returns boolean
 * \ref IntConstConcept which equals true if and only if `E` is a
 * \ref PlaceholderExprConcept.
 *
 * \par Expression semantics
 *
 * For any type `e`
 * \code
 *  typedef is_placeholder_expr<e>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: `r` is an \ref IntConstConcept which equals `true` if `E`
 *   is a \ref PlaceholderExprConcept or `false` otherwise.
 *
 * \par Example
 * \snippet tml/is_placeholder_expr.cpp Code
 */ // }}}
template <class E>
  struct is_placeholder_expr
    : is_placeholder<E>
  {
  };
template <template <class...> class X, class... Args>
  struct is_placeholder_expr<X<Args...> >
    : variadic::any<quote<is_placeholder_expr> >::template apply<Args...>
  {
  };
} // end namespace tml

#endif /* TML_IS_PLACEHOLDER_EXPR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
