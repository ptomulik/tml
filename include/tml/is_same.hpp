// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/is_same.hpp

/** // doc: tml/is_same.hpp {{{
 * \file tml/is_same.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_IS_SAME_HPP
#define TML_IS_SAME_HPP

#include <tml/is_same_fwd.hpp>
#include <tml/bool.hpp>

namespace tml {
/** // doc: is_same {{{
 * \struct is_same
 * \brief Checks whether two types are identical
 *
 * \tparam T1 First type
 * \tparam T2 Second type
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T1
 *      , class T2
 *      >
 *  struct is_same
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `is_same` checks whether two types are identical. Tha is it returns a
 * boolean \ref IntConstConcept `r` such that `r::value == true` if and only if
 * `T1` and `T2` are identical.
 *
 * \par Expression semantics
 *
 * For any types `t1` and `t2`:
 * \code
 *  typdef is_same<t1,t2>::type r;
 * \endcode
 *
 * - **Return type**: A boolean \ref IntConstConcept.
 * - **Semantics**: `r::value == true`  if `t1` is same as `t2`; otherwise
 *   `r::value == false`.
 *
 * \par Example
 * \snippet tml/is_same.cpp Code
 *
 */ // }}}
template <class T1, class T2>
  struct is_same
    : false_
  { };
template <class T>
  struct is_same<T,T>
    : true_
  { };
} // end namespace tml

#endif /* TML_IS_SAME_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
