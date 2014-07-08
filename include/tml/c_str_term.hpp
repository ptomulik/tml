// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/c_str_term.hpp

/** // doc: tml/c_str_term.hpp {{{
 * \file tml/c_str_term.hpp
 * \brief Provides \ref tml::c_str_term
 */ // }}}
#ifndef TML_C_STR_TERM_HPP
#define TML_C_STR_TERM_HPP

#include <tml/integral_c.hpp>
#include <cwchar>

namespace tml {
/** // doc: c_str_term {{{
 * \ingroup MetafunStringGroup
 * \struct c_str_term
 * \brief Returns a character terminating string.
 *
 * \par Synopsis
 *
 * \code
 *  template < class T >
 *    struct c_str_term
 *    {
 *      typedef unspecified type;
 *    };
 * \endcode
 *
 * \par Description
 *
 * `c_str_term` returns a character which is used as a string terminator by
 * `c_str`.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression Semantics
 *
 * For an integral constant type `t` (e.g. `char`, `wchar_t`)
 * \code
 *  typedef c_str_term<t>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: `r` is an \ref IntConstConcept representing string
 *   terminator for strings composed of characters of type `t`.
 */ // }}}
template<class T>
  struct c_str_term
    : integral_c<T, 0>
  { };
template<>
  struct c_str_term<char>
    : integral_c<char,'\x0'>
  { };
template<>
  struct c_str_term<wchar_t>
    : integral_c<wchar_t,L'\x0'>
  { };
} // end namespace tml

#endif /* TML_C_STR_TERM_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
