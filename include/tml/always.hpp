// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/always.hpp

/** // doc: tml/always.hpp {{{
 * \file tml/always.hpp
 * \brief Provides \ref tml::always
 */ // }}}
#ifndef TML_ALWAYS_HPP
#define TML_ALWAYS_HPP

#include <tml/always_fwd.hpp>
#include <tml/identity.hpp>

namespace tml {
/** // doc: always {{{
 * \ingroup MetafunMiscGroup
 * \struct always
 * \brief \ref MetafunClassConcept which always returns same type 
 *
 * \tparam X A type to be returned.
 *
 * \par Synopsis
 *
 * \code
 *  template< class X >
 *  struct always
 *  {
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * `always<X>` specialization is a variadic \ref MetafunClassConcept always
 * returning the same type, `X`, regardless of the number and types of passed
 * arguments.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an arbitrary type `x`:
 * \code
 *  typedef always<x> f;
 * \endcode
 *
 * - **Return type**: \ref MetafunClassConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    struct f : bind< identity<_1>, x > {};
 *   \endcode
 *
 * \par Example
 * \snippet tml/always.cpp Code
 *
 */ // }}}
template <class X>
  template <class...>
    struct always<X>::apply
      : identity<X>
    { };
} // end namespace tml

#endif /* TML_ALWAYS_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
