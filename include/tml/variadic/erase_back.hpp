// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/erase_back.hpp

/** // doc: tml/variadic/erase_back.hpp {{{
 * \file tml/variadic/erase_back.hpp
 * \brief Provides \ref tml::variadic::erase_back and
 *        \ref tml::variadic::erase_back_c
 */ // }}}
#ifndef TML_VARIADIC_ERASE_BACK_HPP
#define TML_VARIADIC_ERASE_BACK_HPP

#include <tml/variadic/erase_back_fwd.hpp>
#include <tml/long.hpp>

namespace tml { namespace variadic { namespace detail {
template <class F, long N>
  struct erase_back_impl
  {
    template<class... Args>
      struct apply;
  };
} } } // end namespace tml::variadic::detail

namespace tml { namespace variadic { 
/** // doc: erase_back {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct erase_back
 * \brief Remove multiple arguments form the back of an argument pack
 *
 * \tparam F A \ref LambdaExprConcept to which the result of removal will be
 *         applied.
 * \tparam N Number of arguments from the front of the argument pack `Args...`
 *         that will remain after removal.
 * \tparam Args Argument pack from which the arguments will be removed.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template<
 *          class F
 *        , class N
 *      >
 *    struct erase_back
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
 * `variadic::erase_back` removes arguments from argument pack `Args...`
 * such that only the first `N` arguments is left. The guaranteed complexity is
 * O(1). After removal `F` is invoked with the arguments that are left.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an n-ary \ref LambdaExprConcept `f`, an \ref IntConstConcept `n` and any
 * types `a1,...,an,...`
 * \code
 *  typedef variadic::erase_back<f,n>::apply<a1,...,an,...>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef apply<f,a1,...,an>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/variadic/erase_back.cpp Code
 *
 */ // }}}
template <class F, class N>
  struct erase_back;
template <class F, class N>
  template<class... Args>
    struct erase_back<F,N>::apply
      : detail::erase_back_impl<F,static_cast<long>(N::value)>::template apply<Args...>
    { };
/** // doc: erase_back_c {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct erase_back_c
 * \brief Remove multiple arguments form the back of an argument pack
 *
 * \tparam F A \ref LambdaExprConcept to which the result of removal will be
 *         applied.
 * \tparam N Number of arguments from the front of the argument pack `Args...`
 *         that will remain after removal.
 * \tparam Args Argument pack from which the arguments will be removed.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template<
 *          class F
 *        , long N
 *      >
 *    struct erase_back_c
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
 * `variadic::erase_back_c` removes arguments from argument pack `Args...`
 * such that only the first `N` arguments is left. The guaranteed complexity is
 * O(1). After removal `F` is invoked with the arguments that are left.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an n-ary \ref LambdaExprConcept `f`, an integral constant `n` and any
 * types `a1,...,an,...`
 * \code
 *  typedef variadic::erase_back_c<f,n>::apply<a1,...,an,...>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef variadic::erase_back<f,long_<n> >::apply<a1,...,an,...>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/variadic/erase_back.cpp Code
 *
 */ // }}}
template <class F, long N>
  struct erase_back_c;
template <class F, long N>
  template<class... Args>
    struct erase_back_c<F,N>::apply
      : erase_back<F,long_<N> >::template apply<Args...>
    { };
} } // end namespace tml::variadic

#include <tml/variadic/aux_/erase_back.hpp>

#endif /* TML_VARIADIC_ERASE_BACK_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
