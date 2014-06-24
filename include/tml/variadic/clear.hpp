// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/clear.hpp

/** // doc: tml/variadic/clear.hpp {{{
 * \file tml/variadic/clear.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_VARIADIC_CLEAR_HPP
#define TML_VARIADIC_CLEAR_HPP

#include <tml/variadic/clear_fwd.hpp>
#include <tml/apply.hpp>

namespace tml { namespace variadic {
/** // doc: clear {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct clear
 * \brief Removes all elements from a variadic argument pack
 *
 * \tparam F A \ref LambdaExprConcept to be invoked with no arguments.
 * \tparam Args Ignored. Any types.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template <class F>
 *    struct clear
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
 * variadic::clear performs a removal of all the types from the variadic
 * argument pack `Args...` and applies the result to `F`. In other words,
 * it just invokes `F` with no arguments.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For a nullary \ref LambdaExprConcept `f` and any types `a1, ...an`
 * \code
 *  typedef variadic::clear<f>::apply<a1,...an>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef apply<f>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/variadic/clear.cpp Code
 *
 */ // }}}
template <class F>
  struct clear;
template <class F>
  template<class... Args>
    struct clear<F>::apply
      : tml::apply<F>
    { };
} } // end namespace tml::variadic

#endif /* TML_VARIADIC_CLEAR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
