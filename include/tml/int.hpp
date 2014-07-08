// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/int.hpp

/** // doc: tml/int.hpp {{{
 * \file tml/int.hpp
 * \brief Provides \ref tml::int_
 */ // }}}
#ifndef TML_INT_HPP
#define TML_INT_HPP

#include <tml/int_fwd.hpp>
#include <tml/integral_c.hpp>

namespace tml {
/** // doc: int_ {{{
 * \ingroup TypesNumericGroup
 * \brief An \ref IntConstConcept wrapper for int
 *
 * \tparam C A value to wrap. A int integral constant.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        int C
 *      >
 *  struct int_
 *  {
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * A int \ref IntConstConcept wrapper.
 *
 * \par Model of
 *
 * \ref IntConstConcept.
 *
 * \par Expression semantics
 *
 *  The semantics of an expression are defined only where they differ from, or
 *  are not defined in \ref IntConstConcept.
 *
 *  For arbitary integral constant c:
 *  \code
 *    int_<c>
 *  \endcode
 *
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: An \ref IntConstConcept `x` such that `x::value = c` and
 *   `x::value_type` is identical to int.
 *
 * \par Example
 * \snippet tml/int.cpp Code
 */ // }}}
template <int t>
  using int_ = integral_c<int, t>;
} // end namespace tml

#endif /* TML_INT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
