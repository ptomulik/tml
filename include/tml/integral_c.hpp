// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/integral_c.hpp

/** // doc: tml/integral_c.hpp {{{
 * \file tml/integral_c.hpp
 * \brief Provies \ref tml::integral_c
 */ // }}}
#ifndef TML_INTEGRAL_C_HPP
#define TML_INTEGRAL_C_HPP

#include <tml/integral_c_fwd.hpp>
#include <tml/integral_c_tag.hpp>

namespace tml {
/** // doc: integral_c {{{
 * \ingroup TypesNumericGroup
 * \struct integral_c
 * \brief A general \ref IntConstConcept wrapper
 *
 * \tparam T Wrapper's value type. An integral type.
 * \tparam N A value to wrap. An integral constant.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T, T N
 *      >
 *  struct integral_c
 *  {
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * A generic \ref IntConstConcept wrapper.
 *
 * \par Model of
 *
 * \ref IntConstConcept
 *
 * \par Expression semantics
 *
 * The semantics of and expression are defined only where they differ from, or
 * are not defined in \ref IntConstConcept.
 *
 * For arbitrary integral type `t` and integral constant `n`:
 * \code
 *  typedef integral_c<t,n> x;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: `x` is an \ref IntConstConcept such that `x::value == n`
 *   and `x::value_type` is identical to `t`.
 *
 * \par Example
 * \snippet tml/integral_c.cpp Code
 *
 */ // }}}
template <class T, T N>
  struct integral_c
  {
    typedef T value_type;
    static constexpr value_type value = N;
    typedef integral_c type;
    constexpr value_type operator()() const noexcept { return value; }
    typedef integral_c_tag numeric_tag;
  };
} // end namespace tml

#endif /* TML_INTEGRAL_C_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
