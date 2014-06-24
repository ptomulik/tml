// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/or.hpp

/** // doc: tml/or.hpp {{{
 * \file tml/or.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_OR_HPP
#define TML_OR_HPP

#include <tml/or_fwd.hpp>
#include <tml/bool.hpp>

namespace tml {
/** // doc: or_ {{{
 * \ingroup MetafunLogicOpsGroup
 * \struct or_
 * \brief Logical or
 *
 * \tparam F1 First argument. Nullary \ref MetafunConcept.
 * \tparam F2 Second argument. Nullary \ref MetafunConcept.
 * \tparam Fs Other arguments (optional).
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class F1
 *      , class F2
 *      , class... Fs
 *      >
 *  struct or_
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the result of short-circuit logical or (||) operation on its
 * arguments.
 *
 * \par Expression semantics
 *
 * For arbitrary nullary \ref MetafunConcept f1, f2,... fn:
 * \code
 *  typedef or_<f1,f2,...,fn>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : or_<f1,f2,...,fn>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet tml/or.cpp Code
 *
 */ // }}}
template <class F1, class F2, class... Fs>
  struct or_
    : or_<typename or_<F1,F2>::type, Fs...>
  {
  };
template <class F1, class F2>
  struct or_<F1, F2>
    : bool_<static_cast<bool>(F1::value) || static_cast<bool>(F2::value)>
  {
  };
} // end namespace tml

#endif /* TML_OR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
