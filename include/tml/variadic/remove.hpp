// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/remove.hpp

/** // doc: tml/variadic/remove.hpp {{{
 * \file tml/variadic/remove.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_VARIADIC_REMOVE_HPP
#define TML_VARIADIC_REMOVE_HPP

#include <tml/variadic/remove_fwd.hpp>
#include <tml/long.hpp>

namespace tml { namespace variadic { namespace detail {
template <class F, long N>
  struct remove_impl
  {
    template<class... Args>
      struct apply;
  };
} } } // end namespace tml::variadic::detail

namespace tml { namespace variadic {
/** // doc: remove {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct remove
 * \brief Remove single argument at position `N` from an argument pack
 *
 * \tparam F A \ref LambdaExprConcept to which the resultant argument pack will
 *         be applied.
 * \tparam N A position from the beginning of the argument to be removed.
 *         An \ref IntConstConcept.
 * \tparam Args An argument pack to remove the `N`-th argument from.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template<class F, class N>
 *    struct remove
 *    {
 *      template<Args...>
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
 * `remove` performs a removal of a single argument from the argument pack at
 * the position `N` with guaranteed O(1) complexity.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an n-ary \ref LambdaExprConcept `f`, an \ref IntConstConcept `i`, and
 * any types `a0,...,ai,...an`
 * \code
 *  typedef variadic::remove<f,i>::apply<a0,...,ai,...an>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: equivalent to
 *   \code
 *    typedef apply<f,a0,...,a{i-1},a{i+1},...a{n+1}>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/variadic/remove.cpp Code
 *
 */ // }}}
template <class F, class N>
    struct remove;
template <class F, class N>
  template<class... Args>
    struct remove<F,N>::apply
      : detail::remove_impl<F, static_cast<long>(N::value)>
          ::template apply<Args...>
    { };
/** // doc: remove_c {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct remove_c
 * \brief Remove single argument at position `N` from an argument pack
 *
 * \tparam F A \ref LambdaExprConcept to which the resultant argument pack will
 *         be applied.
 * \tparam N A position from the beginning of the argument to be removed.
 *         An \ref IntConstConcept.
 * \tparam Args An argument pack to remove the `N`-th argument from.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template<class F, long N>
 *    struct remove_c
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
 * `remove_c` performs a removal of a single argument from the argument pack at
 * the position `N` with guaranteed O(1) complexity.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an n-ary \ref LambdaExprConcept `f`, an integral constant `i`, and any
 * types `a0,...an`
 * \code
 *  typedef variadic::remove_c<f,i>::apply<a0,...,ai,...an>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: equivalent to
 *   \code
 *    typedef variadic::remove<f, long_<i> >::apply<a0, ...an>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/variadic/remove.cpp Code
 *
 */ // }}}
template <class F, long N>
  template <class... Args>
    struct remove_c<F,N>::apply
      : remove<F,long_<N> >::template apply<Args...>
    { };
} } // end namespace tml::variadic

#include <tml/variadic/aux_/remove.hpp>

#endif /* TML_VARIADIC_REMOVE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
