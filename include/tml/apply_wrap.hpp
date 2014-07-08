// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/apply_wrap.hpp

/** // doc: tml/apply_wrap.hpp {{{
 * \file tml/apply_wrap.hpp
 * \brief Provides \ref tml::apply_wrap
 */ // }}}
#ifndef TML_APPLY_WRAP_HPP
#define TML_APPLY_WRAP_HPP

#include <tml/apply_wrap_fwd.hpp>
#include <tml/enable_if_type.hpp>

namespace tml { namespace detail {

} } // end namespace tml::detail

namespace tml {
/** // doc: apply_wrap {{{
 * \ingroup MetafunInvocationGroup
 * \struct apply_wrap
 * \brief Invokes a \ref MetafunClassConcept
 *
 * \tparam F A \ref MetafunClassConcept class to invoke.
 * \tparam Args Invocation arguments
 *
 * \par Synopsis
 *
 * \code
 *  template<class F, class... Args>
 *  struct apply_wrap
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Invokes a \ref MetafunConcept `F` with arguments `Args...`.
 *
 * In essence, `apply_wrap` forms are nothing more than a syntactic wrappers
 * around ``F::apply<Args...>::type``/``F::apply::type`` expressions (hence the
 * name). They provide a more concise notation and higher portability than
 * their underlaying constructs at the cost of an extra template instantiation.
 *
 * \par Expression semantics
 *
 * For any \ref MetafunClassConcept `f` and arbitrary types `a1, ..., an`:
 * \code
 *  typedef apply_wrap<f,a1,...,an>::type t;
 * \endcode
 *
 * - **Return type**: Any type.
 * - **Semantics**: if `n > 0`, equivalent to typedef
 *   ``f::apply<a1,...,an>::type t;`` otherwise equivalent to either ``typedef
 *   f::apply::type;`` or ``typedef f::apply<>::type t;`` depending on whether
 *   ``f::apply`` is a class or a class template.
 *
 * \par Example
 * \snippet tml/apply_wrap.cpp Code
 */ // }}}
template <class F, class... Args>
  struct apply_wrap
     : F::template apply<Args...>
  { };
// Invoke a nullary nested metafunction `apply' appropriatelly (as template or
// as a plain struct, depending on what she actually is). Use SFINAE to decide.
template <class F>
  struct apply_wrap0<F,typename enable_if_type<typename F::apply>::type>
    : F::apply
  { };
template <class F>
  struct apply_wrap0<F,typename enable_if_type<typename F::template apply<> >::type >
    : F::template apply<>
  { };
template <class F>
  struct apply_wrap<F>
    : apply_wrap0<F>
  { };
} // end namespace tml

#endif /* TML_APPLY_WRAP_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
