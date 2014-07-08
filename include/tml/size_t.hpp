// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/size_t.hpp

/** // doc: tml/size_t.hpp {{{
 * \file tml/size_t.hpp
 * \brief Provides \ref tml::size_t_
 */ // }}}
#ifndef TML_SIZE_T_HPP
#define TML_SIZE_T_HPP

#include <tml/size_t_fwd.hpp>
#include <tml/integral_c.hpp>

namespace tml {
/** // doc: size_t_ {{{
 * \ingroup TypesNumericGroup
 * \brief An \ref IntConstConcept wrapper for std::size_t
 *
 * \tparam C A value to wrap. A std::size_t integral constant.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        std::size_t C
 *      >
 *  struct size_t_
 *  {
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * A std::size_t \ref IntConstConcept wrapper.
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
 *    size_t_<c>
 *  \endcode
 *
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: An \ref IntConstConcept `x` such that `x::value = c` and
 *   `x::value_type` is identical to std::size_t.
 *
 * \par Example
 * \snippet tml/size_t.cpp Code
 */ // }}}
template <std::size_t n>
  using size_t_ = integral_c<std::size_t, n>;
} // end namespace tml

#endif /* TML_SIZE_T_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
