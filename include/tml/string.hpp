// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/string.hpp

/** // doc: tml/string.hpp {{{
 * \file tml/string.hpp
 * \brief Provides \ref tml::basic_string, \ref tml::string and \ref tml::wstring
 */ // }}}
#ifndef TML_STRING_HPP
#define TML_STRING_HPP

#include <tml/string_fwd.hpp>
#include <tml/sequence.hpp>

namespace tml {
/** // doc: basic_string {{{
 * \ingroup TODO: GroupName
 * \struct basic_string
 * \brief TODO: brief description
 *
 * \tparam T TODO parameter description
 *
 * \par Synopsis
 *
 * \code
 *  template< TODO >
 *  struct basic_string
 *  {
 *    typedef TODO type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * TODO
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * TODO
 *
 * - **Return type**: TODO
 * - **Semantics**: TODO
 *
 * \par Example
 * \snippet tml/basic_string.cpp Code
 *
 */ // }}}
  template <class CharT, CharT... Chars>
    using basic_string = sequence_c<CharT, Chars...>;
/** // doc: string {{{
 * \ingroup TODO: GroupName
 * \struct string
 * \brief TODO: brief description
 *
 * \tparam T TODO parameter description
 *
 * \par Synopsis
 *
 * \code
 *  template< TODO >
 *  struct string
 *  {
 *    typedef TODO type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * TODO
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * TODO
 *
 * - **Return type**: TODO
 * - **Semantics**: TODO
 *
 * \par Example
 * \snippet tml/string.cpp Code
 *
 */ // }}}
  template <char... Chars>
    using string = basic_string<char, Chars...>;
/** // doc: wstring {{{
 * \ingroup TODO: GroupName
 * \struct wstring
 * \brief TODO: brief description
 *
 * \tparam T TODO parameter description
 *
 * \par Synopsis
 *
 * \code
 *  template< TODO >
 *  struct wstring
 *  {
 *    typedef TODO type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * TODO
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * TODO
 *
 * - **Return type**: TODO
 * - **Semantics**: TODO
 *
 * \par Example
 * \snippet tml/wstring.cpp Code
 *
 */ // }}}
  template <wchar_t... Chars>
    using wstring = basic_string<wchar_t, Chars...>;
} // end namespace tml

#endif /* TML_STRING_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
