// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/not_equal_to.hpp

/** // doc: tml/not_equal_to.hpp {{{
 * \file tml/not_equal_to.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_NOT_EQUAL_TO_HPP
#define TML_NOT_EQUAL_TO_HPP

#include <tml/not_equal_to_fwd.hpp>
#include <tml/numeric_tag.hpp>

namespace tml {
/** // doc: not_equal_to {{{
 * \ingroup MetafunComparisonsGroup
 * \struct not_equal_to
 * \brief Returns a true-values \ref IntConstConcept if `T1` is not equal to `T2`
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
 *  struct not_equal_to
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns a true-values \ref IntConstConcept if `T1` is not equal to `T2`
 *
 * \par Model of
 *
 * \ref NumericMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref IntConstConcept "Integral Constants" `c1,c2`
 * \code
 *  typedef not_equal_to<c1,c2>::type r;
 * \endcode
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef bool_<(c1::value != c2::value)> r;
 *   \endcode
 *
 * \code
 *  typedef not_equal_to<c1,c2> r;
 * \endcode
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : not_equal_to<c1,c2>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet tml/not_equal_to.cpp Code
 *
 */ // }}}
template <class T1, class T2>
  struct not_equal_to
    : not_equal_to_impl<
          typename numeric_tag<T1>::type
        , typename numeric_tag<T2>::type
      >::template apply<T1,T2>
  { };
} // end namespace tml

#include <tml/aux_/not_equal_to.hpp>

#endif /* TML_NOT_EQUAL_TO_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
