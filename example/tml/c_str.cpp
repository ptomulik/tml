// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/c_str.cpp {{{
 * \file tml/c_str.cpp
 * \example tml/c_str.cpp
 * \brief Usage example for \ref tml::c_str
 */ // }}}

// [Code]
#include <tml/c_str.hpp>
#include <tml/sequence.hpp>
#include <tml/integral_c.hpp>

using namespace tml;

typedef c_str<sequence_c<char,'a','b','c'> >::type s1;
typedef c_str<sequence_c<wchar_t,L'a',L'b',L'c'> >::type s2;
typedef c_str<sequence_c<char,'a','b','c'>, wchar_t>::type s3;
typedef c_str<sequence<integral_c<char,'a'>, integral_c<char,'b'> > >::type s4;
typedef c_str<sequence<integral_c<wchar_t,L'a'>, integral_c<wchar_t,L'b'> > >::type s5;

constexpr char const* r1 = s1::value;
constexpr wchar_t const* r2 = s2::value;

static_assert(r1[0] == 'a', "");
static_assert(r1[1] == 'b', "");
static_assert(r1[2] == 'c', "");
static_assert(r1[3] == '\x0', "");

static_assert(r2[0] == L'a', "");
static_assert(r2[1] == L'b', "");
static_assert(r2[2] == L'c', "");
static_assert(r2[3] == L'\x0', "");

#include <tml/is_same.hpp>
static_assert(is_same<s1::value_type, char const[4]>::value, "");
static_assert(is_same<s1::type, s1>::value, "");
static_assert(is_same<s2::value_type, wchar_t const[4]>::value, "");
static_assert(is_same<s2::type, s2>::value, "");
static_assert(is_same<s3::value_type, wchar_t const[4]>::value, "");
static_assert(is_same<s3::type, s3>::value, "");
static_assert(is_same<s4::value_type, char const[3]>::value, "");
static_assert(is_same<s4::type, s4>::value, "");
static_assert(is_same<s5::value_type, char const[3]>::value, "");
static_assert(is_same<s5::type, s5>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
