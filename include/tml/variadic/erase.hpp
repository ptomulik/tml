// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/erase.hpp

/** // doc: tml/variadic/erase.hpp {{{
 * \file tml/variadic/erase.hpp
 * \brief Provides \ref tml::variadic::erase and \ref tml::variadic::erase_c
 */ // }}}
#ifndef TML_VARIADIC_ERASE_HPP
#define TML_VARIADIC_ERASE_HPP

#include <tml/variadic/erase_fwd.hpp>
#include <tml/long.hpp>

namespace tml { namespace variadic { namespace detail {
template <class F, long First, long Last>
  struct erase_impl
  {
    template <class... Args>
      struct apply;
  };
} } } // end namespace tml::variadic::detail

namespace tml { namespace variadic {
/** // doc: erase {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct erase
 * \brief Remove one or more adjanced elements in the sequence.
 *
 * \tparam F A \ref LambdaExprConcept to which the result of removal will be
 *         applied.
 * \tparam First A position of the beginning of the range to be erased.
 * \tparam Last A position of the past-the-end of the range to be erased.
 * \tparam Args Argument pack from which the arguments will be removed.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template<
 *          class F
 *        , class First
 *        , class Last
 *      >
 *    struct erase
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
 * `erase` performs a removal of one or more adjacent elements in the
 * sequence with the guaranteed complexity O(1) and invokes `F` with the
 * remaining arguments.
 *
 * \par Expression semantics
 *
 * For any \ref LambdaExprConcept `f` with `arity >= Last::value - First::value`,
 * an \ref IntConstConcept "Integral Constants" `m1` and `m2` with
 * `m2::value >=0` and `m2::value > m1::value`, and any types `a0,...,a{n-1}`
 * (`n >= m2`)
 * \code
 *  typedef variadic::erase<f,m1,m2>::apply<a0,...,an>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: equivalent to
 *   \code
 *    typedef apply<f,a0,...a{m1-1},a{m2},...an>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/variadic/erase.cpp Code
 *
 */ // }}}
template <class F, class First, class Last>
  struct erase;
template <class F, class First, class Last>
  template <class... Args>
    struct erase<F,First,Last>::apply
      : detail::erase_impl<
          F
        , static_cast<long>(First::value)
        , static_cast<long>(Last::value)
        >::template apply<Args...>
    { };
/** // doc: erase_c {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct erase_c
 * \brief Remove one or more adjanced elements in the sequence.
 *
 * \tparam F A \ref LambdaExprConcept to which the result of removal will be
 *         applied.
 * \tparam First A position of the beginning of the range to be erased.
 * \tparam Last A position of the past-the-end of the range to be erased.
 * \tparam Args Argument pack from which the arguments will be removed.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template<
 *          class F
 *        , long First
 *        , long Last
 *      >
 *    struct erase_c
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
 * `erase_c` performs a removal of one or more adjacent elements in the
 * sequence with the guaranteed complexity O(1) and invokes `F` with the
 * remaining arguments.
 *
 * \par Expression semantics
 *
 * For any \ref LambdaExprConcept `f` with `arity >= Last-First`, an integral
 * constants `m1>=0` and `m2>m1` and any types `a0,...,a{n-1}` (`n >= m2`)
 * \code
 *  typedef variadic::erase_c<f,m1,m2>::apply<a0,...,an>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: equivalent to
 *   \code
 *    typedef erase<f,long_<m1>,long_<m2> >::apply<a0,...,a{n-1}>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/variadic/erase.cpp Code
 *
 */ // }}}
template <class F, long First, long Last>
  struct erase_c;
template <class F, long First, long Last>
  template<class... Args>
    struct erase_c<F,First,Last>::apply
      : erase<F,long_<First>,long_<Last> >::template apply<Args... >
    { };
} } // end namespace tml::variadic

#include <tml/variadic/aux_/erase.hpp>

#endif /* TML_VARIADIC_ERASE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
