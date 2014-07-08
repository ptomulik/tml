// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/pop_front.hpp

/** // doc: tml/variadic/pop_front.hpp {{{
 * \file tml/variadic/pop_front.hpp
 * \brief Provides \ref tml::variadic::pop_front
 */ // }}}
#ifndef TML_VARIADIC_POP_FRONT_HPP
#define TML_VARIADIC_POP_FRONT_HPP

#include <tml/variadic/pop_front_fwd.hpp>
#include <tml/apply.hpp>

namespace tml { namespace variadic {
/** // doc: pop_front {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct pop_front
 * \brief Remove first argument from variadic argument pack
 *
 * \tparam F A \ref LambdaExprConcept to which the result of removal will be
 *         applied.
 * \tparam Args Arguments to perform the removal on.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template <class F>
 *    struct pop_front
 *    {
 *      template<class A1, class... Tail>
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
 * variadic::pop_front performs a removal at the beginning of the variadic
 * argument pack `Args...` with guaranted O(1) complexity and applies the
 * result to `F`.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an n-ary \ref LambdaExprConcept `f` and any types `a0, a1, ...an`
 * \code
 *  typedef variadic::pop_front<f>::apply<a0,a1,...an>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef apply<f,a1,...an>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/variadic/pop_front.cpp Code
 *
 */ // }}}
template <class F>
  struct pop_front;
template <class F>
  template<class A1, class... Tail>
    struct pop_front<F>::apply
      : tml::apply<F,Tail...>
    { };
} } // end namespace tml::variadic

#endif /* TML_VARIADIC_POP_FRONT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
