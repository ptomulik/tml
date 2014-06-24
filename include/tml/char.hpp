// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/char.hpp

/** // doc: tml/char.hpp {{{
 * \file tml/char.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_CHAR_HPP
#define TML_CHAR_HPP

#include <tml/char_fwd.hpp>
#include <tml/integral_c.hpp>

namespace tml {
/** // doc: char_ {{{
 * \ingroup TypesNumericGroup
 * \brief An \ref IntConstConcept wrapper for char
 *
 * \tparam C A value to wrap. A char integral constant.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        char C
 *      >
 *  struct char_
 *  {
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * A char \ref IntConstConcept wrapper.
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
 *    char_<c>
 *  \endcode
 *
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: An \ref IntConstConcept `x` such that `x::value = c` and
 *   `x::value_type` is identical to char.
 *
 * \par Example
 * \snippet tml/char.cpp Code
 */ // }}}
template <char c>
  using char_ = integral_c<char, c>;
} // end namespace tml

#endif /* TML_CHAR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
