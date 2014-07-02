// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/negate.hpp

/** // doc: tml/negate.hpp {{{
 * \file tml/negate.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_NEGATE_HPP
#define TML_NEGATE_HPP

#include <tml/negate_fwd.hpp>
#include <tml/numeric_tag.hpp>

namespace tml {
/** // doc: negate {{{
 * \ingroup MetafunArithmeticOpsGroup
 * \struct negate
 * \brief Returns the negative (additive inverse) of its argument.
 *
 * \tparam T Operation's argument.
 *
 * \par Synopsis
 *
 * \code
 *  template< class T >
 *  struct negate
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the negative (additive inverse) of its argument.
 *
 * \par Model of
 *
 * \ref NumericMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref IntConstConcept `c`:
 * \code
 *  typedef negate<c>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef integral_c<c::value_type, ( -c::value ) > r;
 *   \endcode
 *
 * \code
 *  typedef negate<c> r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : negate<c>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet tml/negate.cpp Code
 *
 */ // }}}
template <class C>
  struct negate
    : negate_impl<typename numeric_tag<C>::type>
        ::template apply<C>
  { };
} // end namespace tml

#include <tml/integral_c/aux_/negate.hpp>

#endif /* TML_NEGATE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
