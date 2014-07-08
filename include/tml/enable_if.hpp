// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/enable_if.hpp

/** // doc: tml/enable_if.hpp {{{
 * \file tml/enable_if.hpp
 * \brief Provides \ref tml::enable_if
 */ // }}}
#ifndef TML_ENABLE_IF_HPP
#define TML_ENABLE_IF_HPP

#include <tml/enable_if_fwd.hpp>
#include <tml/if.hpp>
#include <tml/identity.hpp>
#include <tml/empty_base.hpp>
#include <tml/bool.hpp>

namespace tml {
/** // doc: enable_if {{{
 * \ingroup MetafunSfinaeGroup
 * \struct enable_if
 * \brief Return user defined type if a condition is true
 *
 * \tparam C A condition to check. An \ref IntConstConcept.
 * \tparam T A type to return.
 *
 * \par Synopsis
 *
 * \code
 *  template<class C, class T = void>
 *    struct enable_if
 *    {
 *      typedef T type;
 *    };
 * \endcode
 *
 * \par Description
 *
 * If `C` is an \ref IntConstConcept such that `C::value == true`, then
 * `enable_if<C,T>::type` is defined and is same as `T`. Otherwise, the
 * `enable_if<E,T>` has no nested type named `type`. This is useful to hide
 * signatures on compile time when a particular expression is invalid.
 *
 * \par Expression semantics
 *
 * For any \ref IntConstConcept `c` and a type `t`
 * \code
 *  enable_if<c,t>::type
 * \endcode
 *
 * - **Return type**: `t`
 * - **Semantics**: if `c::value == true`, equivalent to `t`, otherwise the
 *   expression is invalid
 *
 * \par Example
 * \snippet tml/enable_if.cpp Code
 *
 */ // }}}
template <class C, class T>
  struct enable_if
    : if_<C, identity<T>, empty_base>::type
  { };
/** // doc: enable_if_c {{{
 * \ingroup MetafunSfinaeGroup
 * \struct enable_if_c
 * \brief Return user defined type if a condition is true
 *
 * \tparam C A condition to check.
 * \tparam T A type to return.
 *
 * \par Synopsis
 *
 * \code
 *  template<bool C, class T = void>
 *    struct enable_if_c
 *    {
 *      typedef T type;
 *    };
 * \endcode
 *
 * \par Description
 *
 * If `C == true`, then `enable_if_c<C,T>::type` is defined and is same as `T`.
 * Otherwise, the `enable_if_c<E,T>` has no nested type named `type`. This is
 * useful to hide signatures on compile time when a particular expression is
 * invalid.
 *
 * \par Expression semantics
 *
 * For boolean value `c` and any type `t`
 * \code
 *  enable_if_c<c,t>::type
 * \endcode
 *
 * - **Return type**: `t`
 * - **Semantics**: equivalent to
 *   \code
 *   enable_if<bool_<c>,t>::type
 *   \endcode
 *
 * \par Example
 * \snippet tml/enable_if.cpp Code
 *
 */ // }}}
template <bool C, class T>
  struct enable_if_c
    : enable_if<bool_<C>,T>
  { };
} // end namespace tml

#endif /* TML_ENABLE_IF_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
