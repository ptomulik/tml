// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/erase_front.hpp

/** // doc: tml/variadic/erase_front.hpp {{{
 * \file tml/variadic/erase_front.hpp
 * \brief Provides \ref tml::variadic::erase_front and
 *        \ref tml::variadic::erase_front_c
 */ // }}}
#ifndef TML_VARIADIC_ERASE_FRONT_HPP
#define TML_VARIADIC_ERASE_FRONT_HPP

#include <tml/variadic/erase_front_fwd.hpp>
#include <tml/long.hpp>

namespace tml { namespace variadic { namespace detail {
template <class F, long N>
  struct erase_front_impl
  {
    template<class... Args>
      struct apply;
  };
} } } // end namespace tml::variadic::detail

namespace tml { namespace variadic {
/** // doc: erase_front {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct erase_front
 * \brief Remove multiple arguments form the front of an argument pack
 *
 * \tparam F A \ref LambdaExprConcept to which the result of removal will be
 *          applied.
 * \tparam N Number of arguments to remove from the beginning of the argument
 *         pack `Args...`. An \ref IntConstConcept.
 * \tparam Args Argument pack from which the `N` first arguments will be removed.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template<
 *          class F
 *        , class N
 *      >
 *    struct erase_front
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
 * `erase_front` removes first `N` arguments from the argument pack `Args...`
 * with the guaranteed complexity O(1) and invokes `F` with the remaining
 * arguments.
 *
 * \par Expression semantics
 *
 * For an n-ary \ref LambdaExprConcept `f`, an \ref IntConstConcept `m` and any
 * types `a0,...,a{m+n}`
 * \code
 *  typedef variadic::erase_front<f,m>::apply<a0,...,a{m+n}>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef apply<f,am,...,a{m+n}>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/variadic/erase_front.cpp Code
 *
 */ // }}}
template <class F, class N>
  struct erase_front;
template <class F, class N>
  template<class... Args>
    struct erase_front<F,N>::apply
      : detail::erase_front_impl<F,static_cast<long>(N::value)>
          ::template apply<Args...>
    { };
/** // doc: erase_front_c {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct erase_front_c
 * \brief Remove multiple arguments form the front of an argument pack
 *
 * \tparam F A \ref LambdaExprConcept to which the result of removal will be
 *         applied.
 * \tparam N Number of arguments to remove from the beginning of the argument
 *         pack `Args...`. An integral constant.
 * \tparam Args Argument pack from which the `N` first arguments will be removed.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template<
 *          class F
 *        , long N
 *      >
 *    struct erase_front_c
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
 * `erase_front_c` removes first `N` arguments from the argument pack `Args...`
 * with the guaranteed complexity O(1) and invokes `F` with the remaining
 * arguments.
 *
 * \par Expression semantics
 *
 * For an n-ary \ref LambdaExprConcept `f`, an integral constant `m` and any
 * types `a0,...,a{m+n}`
 * \code
 *  typedef variadic::erase_front_c<f,m>::apply<a0,...,a{m+n}>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: equivalent to
 *   \code
 *    typedef erase_front<f,long_<m> >::apply<a0,...,a{m+n}>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/variadic/erase_front.cpp Code
 *
 */ // }}}
template <class F, long N>
  struct erase_front_c;
template <class F, long N>
  template<class... Args>
    struct erase_front_c<F,N>::apply
      : erase_front<F,long_<N> >::template apply<Args... >
    { };
} } // end namespace tml::variadic

#include <tml/variadic/aux_/erase_front.hpp>

#endif /* TML_VARIADIC_ERASE_FRONT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
