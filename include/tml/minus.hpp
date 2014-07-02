// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/minus.hpp

/** // doc: tml/minus.hpp {{{
 * \file tml/minus.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_MINUS_HPP
#define TML_MINUS_HPP

#include <tml/minus_fwd.hpp>
#include <tml/numeric_tag.hpp>

namespace tml {
/** // doc: minus {{{
 * \ingroup MetafunArithmeticOpsGroup
 * \struct minus
 * \brief Returns the difference of its arguments.
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
 *  struct minus
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the difference of its arguments.
 *
 * \par Model of
 *
 * \ref NumericMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref IntConstConcept "Integral Constants" `c1,c2,...cn`
 * \code
 *  typedef minus<c1,c2,...cn>::type r;
 * \endcode
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef integral_c<
 *      decltype(c1::value - c2::value ... - cn::value)
 *            , (c1::value - c2::value ... - cn::value)
 *    > r;
 *   \endcode
 *
 * \code
 *  typedef minus<c1,...cn> r;
 * \endcode
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : minus<c1,...cn>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet tml/minus.cpp Code
 *
 */ // }}}
template <class T1, class T2, class... Ts>
  struct minus
    : minus_impl<
          typename numeric_tag<T1>::type
        , typename numeric_tag<T2>::type
        , typename numeric_tag<Ts>::type...
      >::template apply<T1,T2,Ts...>
  { };
} // end namespace tml

#include <tml/aux_/minus.hpp>

#endif /* TML_MINUS_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
