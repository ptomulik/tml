// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/template_sequence/aux_/apply_sequence.hpp

/** // doc: tml/template_sequence/aux_/apply_sequence.hpp {{{
 * \file tml/template_sequence/aux_/apply_sequence.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_TEMPLATE_SEQUENCE_AUX_APPLY_SEQUENCE_HPP
#define TML_TEMPLATE_SEQUENCE_AUX_APPLY_SEQUENCE_HPP

#include <tml/apply_sequence_fwd.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/apply.hpp>
#include <tml/integral_c.hpp>

namespace tml {
/** // doc: apply_sequence_impl<aux::template_sequence_tag> {{{
 * \struct apply_sequence
 * \par Specialization for Template Sequences
 *
 * For any \ref LambdaExprConcept `f` and \ref TemplateSeqConcept
 * `s<a1,...an>` of arbitrary types `a1,...an`:
 * \code
 *  typedef apply_sequence<f,s<a1,...an> >::type t;
 * \endcode
 *
 * - **Return type**: Unspecified
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef apply<f,a1,...an>::type t;
 *   \endcode
 *
 * For any \ref LambdaExprConcept `f`, integral type `t`, values `a1,...an` of
 * type `t` and a template `s`
 * \code
 *  typedef apply_sequence<f,s<t,a1,...an> >::type t;
 * \endcode
 *
 * - **Return type**: Unspecified
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef apply<f,integral_c<t,a1>,...integral_c<t,an> >::type t;
 *   \endcode
 */ // }}}
template <>
  struct apply_sequence_impl<aux::template_sequence_tag>
  {
    template <class F, class S>
      struct apply;
    // Sequence of types
    template <class F, template <class...> class S, class... Args>
      struct apply<F,S<Args...> >
        : tml::apply<F,Args...>
      { };
    // Integral sequence
    template <class F, template <class TT, TT...> class S, class T, T... Args>
      struct apply<F,S<T,Args...> >
        : tml::apply<F, integral_c<T,Args>...>
      { };
  };
} // end namespace tml::aux

#endif /* TML_TEMPLATE_SEQUENCE_AUX_APPLY_SEQUENCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
