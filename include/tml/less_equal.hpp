// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/less_equal.hpp

/** // doc: tml/less_equal.hpp {{{
 * \file tml/less_equal.hpp
 * \brief Provides \ref tml::less_equal
 */ // }}}
#ifndef TML_LESS_EQUAL_HPP
#define TML_LESS_EQUAL_HPP

#include <tml/less_equal_fwd.hpp>
#include <tml/numeric_tag.hpp>

namespace tml {
/** // doc: less_equal {{{
 * \ingroup MetafunComparisonsGroup
 * \struct less_equal
 * \brief Returns a true-values \ref IntConstConcept if `T1` is less than of
 *        equal to `T2`
 *
 * \tparam T1 First argument. \ref IntConstConcept.
 * \tparam T2 Second argument. \ref IntConstConcept.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T1
 *      , class T2
 *      >
 *  struct less_equal
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns a true-values \ref IntConstConcept if `T1` is less than of equal to
 * `T2`.
 *
 * \par Model of
 *
 * \ref NumericMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref IntConstConcept "Integral Constants" `c1,c2`
 * \code
 *  typedef less_equal<c1,c2>::type r;
 * \endcode
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef bool_<(c1::value <= c2::value)> r;
 *   \endcode
 *
 * \code
 *  typedef less_equal<c1,c2> r;
 * \endcode
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : less_equal<c1,c2>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet tml/less_equal.cpp Code
 *
 */ // }}}
template <class T1, class T2>
  struct less_equal
    : less_equal_impl<
          typename numeric_tag<T1>::type
        , typename numeric_tag<T2>::type
      >::template apply<T1,T2>
  { };
} // end namespace tml

#include <tml/aux_/less_equal.hpp>

#endif /* TML_LESS_EQUAL_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
