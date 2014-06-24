// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/any.hpp

/** // doc: tml/variadic/any.hpp {{{
 * \file tml/variadic/any.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_VARIADIC_ANY_HPP
#define TML_VARIADIC_ANY_HPP

#include <tml/variadic/any_fwd.hpp>
#include <tml/if.hpp>
#include <tml/bool.hpp>
#include <tml/apply.hpp>

namespace tml { namespace variadic {
/** // doc: any {{{
 * \ingroup AlgoQueryGroup
 * \struct any
 * \brief Tests whether a predicate `F` holds for any argument from `Args`
 *
 * \tparam F Predicate. Unary \ref LambdaExprConcept.
 * \tparam Args Arguments to check. Any types. Any types.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template<class F>
 *    struct any
 *    {
 *      template<class... Args>
 *        struct apply
 *        {
 *          typedef unspecified type;
 *        };
 *    };
 *  }
 * \endcode
 *
 *
 * \par Description
 *
 * If the predicate `F` holds for any of the arguments from `Args...`, then
 * `variadic::any<F>::apply<Args...>::type` is `true`. Otherwise it's `false`.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an unary \ref LambdaExprConcept `f` and any types `args...`
 * \code
 *  typedef variadic::any<f>::apply<args...>::type r;
 * \endcode
 *
 * - **Return type**: Boolean \ref IntConstConcept
 * - **Semantics**: `r` is a boolean \ref IntConstConcept with
 *   `r::value == true` if and only if for any type `ai` from `args...` the
 *   expression `apply<f,ai>::type` is true.
 *   
 * \code
 *  typedef variadic::any<f>::apply<> t;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: `t` is a boolean \ref IntConstConcept with `r::value == false`
 *
 * \par Example
 * \snippet tml/variadic/any.cpp Code
 */ // }}}
template <class F>
  struct any;
template <class F>
  template <class... Args>
    struct any<F>::apply
      : false_
    { };
template <class F>
  template <class Head, class... Tail>
    struct any<F>::apply<Head,Tail...>
      : if_<
          typename tml::apply<F,Head>::type
        , true_
        , typename any<F>::template apply<Tail...>
        >::type
    { };
} } // end namespace tml::variadic

#endif /* TML_VARIADIC_ANY_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
