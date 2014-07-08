// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/string.cpp {{{
 * \file tml/string.cpp
 * \example tml/string.cpp
 * \brief Usage example for \ref tml::string and \ref tml::wstring
 */ // }}}

// [Code]
#include <tml/string.hpp>

using namespace tml;

typedef string<'a','b'> s1;
typedef wstring<L'a',L'b'> s2;

#include <tml/is_same.hpp>
static_assert(is_same<s1,basic_string<char,'a','b'> >::value, "");
static_assert(is_same<s2,basic_string<wchar_t,L'a',L'b'> >::value, "");

// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
