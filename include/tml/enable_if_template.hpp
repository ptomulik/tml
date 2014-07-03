// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/enable_if_template.hpp

/** // doc: tml/enable_if_template.hpp {{{
 * \file tml/enable_if_template.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_ENABLE_IF_TEMPLATE_HPP
#define TML_ENABLE_IF_TEMPLATE_HPP

namespace tml {
/** // doc: enable_if_template {{{
 * \ingroup MetafunSfinaeGroup
 * \struct enable_if_template
 * \brief Return `T` if an `E` is a type
 *
 * \tparam E Expression that may be a type
 * \tparam T A type to return
 *
 * \par Synopsis
 *
 * \code
 *  template<class E, class T = void>
 *    struct enable_if_template
 *    {
 *      typedef T type;
 *    };
 * \endcode
 *
 * \par Description
 *
 * If `E` is a type, then `enable_if_template<E,T>::type` returns `T`. Otherwise,
 * the `enable_if_template<E,T>::type` itself is an invalid expression. This is
 * useful to hide signatures on compile time when a particular expression is
 * invalid.
 *
 * \par Expression semantics
 *
 * For any types `e` and `t`
 * \code
 *  typedef enable_if_template<e,t>::type x;
 * \endcode
 *
 * - **Return type**: `t`
 * - **Semantics**: if `e` is a type, then `x` is equivalent to `t`; otherwise
 *   the expression is invalid
 *
 * \par Example
 * \snippet tml/enable_if_template.cpp Code
 *
 */ // }}}
template <template <class...> class E, class T = void>
  struct enable_if_template
  {
    typedef T type;
  };
} // end namespace tml

#endif /* TML_ENABLE_IF_TEMPLATE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
