// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/insert.hpp

/** // doc: tml/variadic/insert.hpp {{{
 * \file tml/variadic/insert.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_VARIADIC_INSERT_HPP
#define TML_VARIADIC_INSERT_HPP

#include <tml/variadic/insert_fwd.hpp>
#include <tml/long.hpp>

namespace tml { namespace variadic { namespace detail {
template <class F, long N, class T>
  struct insert_impl
  {
    template <class... Args>
      struct apply;
  };
} } } // end namespace tml::variadic::detail

namespace tml { namespace variadic {
/** // doc: insert {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct insert
 * \brief Insert an element into sequence.
 *
 * \tparam F An expression to be invoked with the resultant argument pack.
 *         \ref LambdaExprConcept.
 * \tparam Pos Insertion position. \ref IntConstConcept.
 * \tparam T The element to be inserted.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class F
 *      , class Pos
 *      , class T
 *      >
 *    struct insert
 *    {
 *      template< class... Args >
 *        struct apply
 *        {
 *          typedef unspecified type;
 *        };
 *    };
 * \endcode
 *
 * \par Description
 *
 * `variadic::insert` performs an insertion of type `T` at an arbitrary
 * position `Pos` in the argument pack `Args...` with guaranteed `O(1)`
 * complexity; the result of insertion is then applied to `F`.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an \ref LambdaExprConcept `f`, \ref IntConstConcept `i`, and any type
 * `x` and types `a0,...,a{n-1}`
 * \code
 *  typedef insert<f, i, x>::apply<a0,...a{n-1}>::type r;
 * \endcode
 *
 * - **Return type**: \ref ExtensibleSeqConcept.
 * - **Precondition**:
 *   \code
 *    0 <= i::value < n
 *   \endcode
 * - **Semantics**: Equivalent to:
 *   \code
 *    typedef apply<f,a0,...,a{i-1},x,ai,...,a{n-1}>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/variadic/insert.cpp Code
 *
 */ // }}}
template <class F, class Pos, class T>
  struct insert;
template <class F, class Pos, class T>
  template <class... Args>
    struct insert<F,Pos,T>::apply
      : detail::insert_impl<F,static_cast<long>(Pos::value),T>
          :: template apply<Args...>
    { };
/** // doc: insert_c {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct insert_c
 * \brief Insert an element into sequence.
 *
 * \tparam F An expression to be invoked with the resultant argument pack.
 *         \ref LambdaExprConcept.
 * \tparam Pos Insertion position. An integral constant.
 * \tparam T The element to be inserted.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class F
 *      , long Pos
 *      , class T
 *      >
 *    struct insert
 *    {
 *      template< class... Args >
 *        struct apply
 *        {
 *          typedef unspecified type;
 *        };
 *    };
 * \endcode
 *
 * \par Description
 *
 * `variadic::insert_c` performs an insertion of type `T` at an arbitrary
 * position `Pos` in the argument pack `Args...` with guaranteed `O(1)`
 * complexity; the result of insertion is then applied to `F`.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an \ref LambdaExprConcept `f`, integral contant  `i`, and any type
 * `x` and types `a0,...,a{n-1}`
 * \code
 *  typedef insert_c<f, i, x>::apply<a0,...a{n-1}>::type r;
 * \endcode
 *
 * - **Return type**: \ref ExtensibleSeqConcept.
 * - **Precondition**:
 *   \code
 *    0 <= i::value < n
 *   \endcode
 * - **Semantics**: Equivalent to:
 *   \code
 *    typedef insert_c<f, long_<i>, x>::apply<a1,...a{n-1}>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/variadic/insert.cpp Code
 */ // }}}
template <class F, long Pos, class T>
  struct insert_c;
template <class F, long Pos, class T>
  template <class... Args>
    struct insert_c<F,Pos,T>::apply
      : insert<F,long_<Pos>,T>
          :: template apply<Args...>
    { };
} } // end namespace tml::variadic

#include <tml/variadic/aux_/insert.hpp>

#endif /* TML_VARIADIC_INSERT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
