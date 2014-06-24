// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/apply.hpp

/** // doc: tml/apply.hpp {{{
 * \file tml/apply.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_APPLY_HPP
#define TML_APPLY_HPP

#include <tml/apply_fwd.hpp>
#include <tml/apply_wrap.hpp>
#include <tml/lambda.hpp>

namespace tml {
/** // doc: apply {{{
 * \ingroup MetafunInvocationGroup
 * \struct apply
 * \brief Invokes a \ref MetafunClassConcept or a \ref LambdaExprConcept
 *
 * \tparam F An expression to invoke. Must be a \ref LambdaExprConcept.
 * \tparam Args Invocation arguments.
 *
 * \par Synopsis
 *
 * \code
 *  template <class F, class... Args>
 *    struct apply
 *    {
 *      typedef unspecified type;
 *    };
 * \endcode
 *
 * \par Description
 *
 * Invokes a \ref MetafunClassConcept or a \ref LambdaExprConcept with
 * arguments ``Args``.
 *
 * \par Expression symantics
 *
 * \code
 * typedef apply<f, a1, ..., an>::type t;
 * \endcode
 *
 * - **Return type**: Any type
 * - **Semantics**: Equivalent to 
 *   \code
 *    typedef apply_wrap<lambda<F>::type,a1,...,an>::type t;
 *   \endcode
 *
 * \par Example
 * \snippet tml/apply.cpp Code
 */ // }}}
template <class F, class... Args>
  struct apply
    : apply_wrap<typename lambda<F>::type, Args...>
  { };
} // end namespace tml

#endif /* TML_APPLY_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
