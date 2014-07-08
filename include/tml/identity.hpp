// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/identity.hpp

/** // doc: tml/identity.hpp {{{
 * \file tml/identity.hpp
 * \brief Provides \ref tml::identity
 */ // }}}
#ifndef TML_IDENTITY_HPP
#define TML_IDENTITY_HPP

#include <tml/identity_fwd.hpp>

namespace tml {
/** // doc: identity {{{
 * \ingroup MetafunMiscGroup
 * \struct identity
 * \brief The identity metafunction
 *
 * \tparam T An argument to be returned. Any type.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T
 *      >
 *  struct identity
 *  {
 *    typedef T type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * The identity metafunction. Returns `T` unchanged.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For arbitrary type `t`
 * \code
 *  typedef identity<t>::type r;
 * \endcode
 *
 * - **Return type**: A type.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef x r;
 *   \endcode
 * - **Postcondition**: `is_same<r,x>::value == true`.
 *
 * \par Example
 * \snippet tml/identity.cpp Code
 */ // }}}
template <class T>
  struct identity
  {
    typedef T type;
  };
} // end namespace tml

#endif /* TML_IDENTITY_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
