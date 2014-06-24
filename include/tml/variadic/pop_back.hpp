// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/pop_back.hpp

/** // doc: tml/variadic/pop_back.hpp {{{
 * \file tml/variadic/pop_back.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_VARIADIC_POP_BACK_HPP
#define TML_VARIADIC_POP_BACK_HPP

#include <tml/variadic/pop_back_fwd.hpp>

namespace tml { namespace variadic {
/** // doc: pop_back {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct pop_back
 * \brief Remove last argument from variadic argument pack
 *
 * \tparam F A \ref LambdaExprConcept to which the result of the removel will
 *         be applied.
 * \tparam Args Arguments to perform the removal on.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template <class F>
 *    struct pop_back
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
 * variadic::pop_back performs a removal at the end of the variadic
 * argument pack `Args...` with guaranted O(1) complexity and applies the
 * result to `F`.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an n-ary \ref LambdaExprConcept `f` and any types `a1, ..., an, a{n+1}`
 * \code
 *  typedef variadic::pop_back<f>::apply<a1,...,an,a{n+1}>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef apply<f,a1,...an>::type r;
 *   \endcode
 *
 * \par Note
 *
 * The maximum supported number of arguments in `Args...` is limited by
 * \ref TML_LIMIT_VARIADIC_SIZE.
 *
 * \par Example
 * \snippet tml/variadic/pop_back.cpp Code
 *
 */ // }}}
template <class F>
  struct pop_back;
} } // end namespace tml

#include <tml/variadic/aux_/pop_back.hpp>

#endif /* TML_VARIADIC_POP_BACK_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
