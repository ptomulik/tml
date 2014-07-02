// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/bitand.hpp

/** // doc: tml/bitand.hpp {{{
 * \file tml/bitand.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_BITAND_HPP
#define TML_BITAND_HPP

#include <tml/bitand_fwd.hpp>
#include <tml/numeric_tag.hpp>

namespace tml {
/** // doc: bitand_ {{{
 * \ingroup MetafunBitOpsGroup
 * \struct bitand_
 * \brief Bitwise and
 *
 * \tparam T1 First argument. \ref IntConstConcept.
 * \tparam T2 Second argument. \ref IntConstConcept.
 * \tparam Ts Other arguments (optional).
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T1
 *      , class T2
 *      , class... Ts
 *      >
 *  struct bitand_
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the result of bitwise and (&) operation on its arguments.
 *
 * \par Model of
 *
 * \ref NumericMetafunConcept
 *
 * \par Expression semantics
 *
 * For arbitrary \ref IntConstConcept "Integral Constants" t1, t2,... tn:
 * \code
 *  typedef bitand_<t1,t2,...tn>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to:
 *   \code
 *    typedef integral_c<
 *          decltype(c1::value & c2::value & ... cn::value)
 *        , (c1::value & c2::value & ... cn::value)
 *        > c;
 *   \endcode
 *
 * \code
 *  typedef bitand_<t1,t2,...tn> r;
 * \endcode
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : bitand_<t1,t2,...tn>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet tml/bitand.cpp Code
 *
 */ // }}}
template <class T1, class T2, class... Fs>
  struct bitand_
    : bitand_impl<
        typename numeric_tag<T1>::type
      , typename numeric_tag<T2>::type
      , typename numeric_tag<Fs>::type...
      >::template apply<T1,T2,Fs...>
  {
  };
} // end namespace tml

#include <tml/integral_c/aux_/bitand.hpp>

#endif /* TML_BITAND_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
