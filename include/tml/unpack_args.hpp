// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/unpack_args.hpp

/** // doc: tml/unpack_args.hpp {{{
 * \file tml/unpack_args.hpp
 * \brief Provides \ref tml::unpack_args
 */ // }}}
#ifndef TML_UNPACK_ARGS_HPP
#define TML_UNPACK_ARGS_HPP

#include <tml/unpack_args_fwd.hpp>
#include <tml/apply_sequence.hpp>

namespace tml {
/** // doc: unpack_args {{{
 * \ingroup MetafunInvocationGroup
 * \struct unpack_args
 * \brief Transform n-ary \ref LambdaExprConcept into an unary
 *        \ref MetafunClassConcept accepting a single sequence of *n* elements
 *
 * \tparam F A lambda expression o adopt. \ref LambdaExprConcept.
 *
 * \par Synopsis
 *
 * \code
 *  template< class F >
 *  struct unpack_args
 *  {
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * A higher-order primitive transforming an n-ary \ref LambdaExprConcept into
 * an unary \ref MetafunClassConcept `g` accepting a single sequence of *n*
 * arguments.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an arbitrary \ref LambdaExprConcept `f`, and arbitrary types `a1,...an`,
 * and template `x` such that `x<a1,...an>` is a \ref TemplateSeqConcept:
 * \code
 *  typedef unpack_args<f> g;
 * \endcode
 *
 * - **Return type**: \ref MetafunClassConcept
 * - **Semantics**: `g` is a unary \ref MetafunClassConcept such that
 *   \code
 *    apply_wrap< g, x<a1,...an> >::type
 *   \endcode
 *   is identical to
 *   \code
 *    apply<F,a1,...an>::type
 *   \endcode
 *
 * \par Example
 * \snippet tml/unpack_args.cpp Code
 *
 */ // }}}
template <class F>
  struct unpack_args;
template <class F>
  template <class Sequence>
    struct unpack_args<F>::apply
      : apply_sequence<F,Sequence>
    { };
} // end namespace tml

#endif /* TML_UNPACK_ARGS_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
