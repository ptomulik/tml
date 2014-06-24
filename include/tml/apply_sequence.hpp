// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/apply_sequence.hpp

/** // doc: tml/apply_sequence.hpp {{{
 * \file tml/apply_sequence.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_APPLY_SEQUENCE_HPP
#define TML_APPLY_SEQUENCE_HPP

#include <tml/apply_sequence_fwd.hpp>
#include <tml/sequence_tag.hpp>

namespace tml {
/** // doc: apply_sequence {{{
 * \ingroup MetafunInvocationGroup
 * \struct apply_sequence
 * \brief Invokes a \ref LambdaExprConcept with arguments taken from a sequence
 *
 * \tparam F A \ref LambdaExprConcept to be invoked.
 * \tparam Sequence A sequence that encapsulates invocation arguments.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class F
 *      , class Sequence
 *      >
 *  struct apply_sequence
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Invokes a \ref LambdaExprConcept `F` with arguments extracted from
 * `Sequence`.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref LambdaExprConcept `f`, and a sequence `s` of size `n`:
 * \code
 *  typedef apply_sequence<f,s>::type t;
 * \endcode
 *
 * - **Return type**: Unspecified
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef apply<f,at<s,0>::type,...at<s,n-1>::type>::type t;
 *   \endcode
 *
 * \par Example
 * \snippet tml/apply_sequence.cpp Code
 *
 */ // }}}
template <class F, class Sequence>
  struct apply_sequence
    : apply_sequence_impl<typename sequence_tag<Sequence>::type>
        ::template apply<F, Sequence>
  { };
} // end namespace tml

#endif /* TML_APPLY_SEQUENCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
