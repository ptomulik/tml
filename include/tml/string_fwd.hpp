// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/string_fwd.hpp

/** // doc: tml/string_fwd.hpp {{{
 * \file tml/string_fwd.hpp
 * \brief Forward declarations for \ref tml/string.hpp
 */ // }}}
#ifndef TML_STRING_FWD_HPP
#define TML_STRING_FWD_HPP

#include <tml/sequence_fwd.hpp>
#include <cwchar>

namespace tml {
template <class CharT, CharT... Chars>
  using basic_string = sequence_c<CharT,Chars...>;
template <char... Chars>
  using string = basic_string<char,Chars...>;
template <wchar_t... Chars>
  using wstring = basic_string<wchar_t,Chars...>;
} // end namespace tml

#endif /* TML_STRING_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
