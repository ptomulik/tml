// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/is_placeholder.hpp

/** // doc: tml/is_placeholder.hpp {{{
 * \file tml/is_placeholder.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_IS_PLACEHOLDER_HPP
#define TML_IS_PLACEHOLDER_HPP

#include <tml/is_placeholder_fwd.hpp>
#include <tml/arg_fwd.hpp>
#include <tml/bool.hpp>

namespace tml {
/** // doc: is_placeholder {{{
 * \ingroup MetafunMiscGroup
 * \struct is_placeholder
 * \brief Tests if a type is a placeholder
 *
 * \tparam T The type to check. Any type.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T
 *      >
 *  struct is_placeholder
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Tests if `T` is a placeholder. Returns an \ref IntConstConcept which equals
 * `true` if and only if `T` is a placeholder.
 *
 * \par Expression semantics
 *
 * For any type `t`
 * \code
 *  typedef is_placeholder<T>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: `r` is an \ref IntConstConcept which equals `true` if `T`
 *   is a placeholder or `false` otherwise.
 *
 * \par Example
 * \snippet tml/is_placeholder.cpp Code
 */ // }}}
template <class T>
  struct is_placeholder
    : bool_<false>
  { };
template <int n>
  struct is_placeholder<arg<n> >
    : bool_<true>
  { };
} // end namespace tml

#endif /* TML_IS_PLACEHOLDER_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
