// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/greater.hpp

/** // doc: tml/greater.hpp {{{
 * \file tml/greater.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_GREATER_HPP
#define TML_GREATER_HPP

#include <tml/greater_fwd.hpp>
#include <tml/numeric_tag.hpp>

namespace tml {
/** // doc: greater {{{
 * \ingroup MetafunComparisonsGroup
 * \struct greater
 * \brief Returns a true-values \ref IntConstConcept if `T1` is greater than `T2`
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
 *  struct greater
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns a true-values \ref IntConstConcept if `T1` is greater than `T2`
 *
 * \par Model of
 *
 * \ref NumericMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref IntConstConcept "Integral Constants" `c1,c2`
 * \code
 *  typedef greater<c1,c2>::type r;
 * \endcode
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef bool_<(c1::value > c2::value)> r;
 *   \endcode
 *
 * \code
 *  typedef greater<c1,c2> r;
 * \endcode
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : greater<c1,c2>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet tml/greater.cpp Code
 *
 */ // }}}
template <class T1, class T2>
  struct greater
    : greater_impl<
          typename numeric_tag<T1>::type
        , typename numeric_tag<T2>::type
      >::template apply<T1,T2>
  { };
} // end namespace tml

#include <tml/aux_/greater.hpp>

#endif /* TML_GREATER_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
