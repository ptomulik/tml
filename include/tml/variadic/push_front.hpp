// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/push_front.hpp

/** // doc: tml/variadic/push_front.hpp {{{
 * \file tml/variadic/push_front.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_VARIADIC_PUSH_FRONT_HPP
#define TML_VARIADIC_PUSH_FRONT_HPP

#include <tml/variadic/push_front_fwd.hpp>
#include <tml/apply.hpp>

namespace tml { namespace variadic {
/** // doc: push_front {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct push_front
 * \brief Prepend an argument to the beginning variadic argument pack
 *
 * \tparam F A \ref LambdaExprConcept to which the extended arguments will be
 *         applied.
 * \tparam A An argument to be prepended.
 * \tparam Args Arguments to perform the prepending on.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template <class F, class A>
 *    struct push_front
 *    {
 *      template<class... Args>
 *      struct apply
 *      {
 *        typedef unspecified type;
 *      };
 *    };
 *  }
 * \endcode
 *
 * \par Description
 *
 * variadic::push_front performs an insertion at the beginning of the variadic
 * argument pack `Args...` with guaranted O(1) complexity and applies the
 * result to `F`.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an n-ary \ref LambdaExprConcept `f` and any types `a1, ...an` and a type
 * `a0`
 * \code
 *  typedef variadic::push_front<f,a0>::apply<a1,...an>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef apply<f,a0,a1,...an>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/variadic/push_front.cpp Code
 *
 */ // }}}
template <class F, class A>
  struct push_front;
template <class F, class A>
  template<class... Args>
    struct push_front<F,A>::apply
      : tml::apply<F,A,Args...>
    { };
} } // end namespace tml::variadic

#endif /* TML_VARIADIC_PUSH_FRONT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
