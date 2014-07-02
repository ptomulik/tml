// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/divides.hpp

/** // doc: tml/divides.hpp {{{
 * \file tml/divides.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_DIVIDES_HPP
#define TML_DIVIDES_HPP

#include <tml/divides_fwd.hpp>
#include <tml/numeric_tag.hpp>

namespace tml {
/** // doc: divides {{{
 * \ingroup MetafunArithmeticOpsGroup
 * \struct divides
 * \brief Returns the quotient of its arguments.
 *
 * \tparam T1 First argument.
 * \tparam T2 Second argument.
 * \tparam Ts Rest of arguments.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T1
 *      , class T2
 *      , class... Ts
 *      >
 *  struct divides
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the quotient of its arguments.
 *
 * \par Model of
 *
 * \ref NumericMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref IntConstConcept "Integral Constants" `c1,c2,...cn`
 * \code
 *  typedef divides<c1,c2,...cn>::type r;
 * \endcode
 * - **Return type**: \ref IntConstConcept.
 * - **Precondition**:
 *   \code
 *    c2::value != 0,... cn::value != 0
 *   \endcode
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef integral_c<
 *      decltype(c1::value + c2::value ... + cn::value)
 *            , (c1::value + c2::value ... + cn::value)
 *    > r;
 *   \endcode
 *
 * \code
 *  typedef divides<c1,...cn> r;
 * \endcode
 * - **Return type**: \ref IntConstConcept.
 * - **Precondition**:
 *   \code
 *    c2::value != 0,... cn::value != 0
 *   \endcode
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : divides<c1,...cn>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet tml/divides.cpp Code
 *
 */ // }}}
template <class T1, class T2, class... Ts>
  struct divides
    : divides_impl<
          typename numeric_tag<T1>::type
        , typename numeric_tag<T2>::type
        , typename numeric_tag<Ts>::type...
      >::template apply<T1,T2,Ts...>
  { };
} // end namespace tml

#include <tml/aux_/divides.hpp>

#endif /* TML_DIVIDES_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
