// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/sequence_tag.cpp {{{
 * \file tml/sequence_tag.cpp
 * \example tml/sequence_tag.cpp
 * \brief Usage example for tml::sequence_tag
 */ // }}}

// [Code]
#include <tml/sequence_tag.hpp>
#include <type_traits>

template <class... Ts> struct types;
template <int... vs> struct ints;
struct types_tag;
struct ints_tag;

namespace tml { namespace detail {
template <class... Ts>
  struct sequence_tag_impl<types<Ts...> >
  {
    typedef types_tag type;
  };
template <int... vs>
  struct sequence_tag_impl<ints<vs...> >
  {
    typedef ints_tag type;
  };
} } // end namespace tml::detail

using namespace tml;
static_assert(std::is_same<sequence_tag<types<> >::type, types_tag>::value, "");
static_assert(std::is_same<sequence_tag<types<void,int> >::type, types_tag>::value, "");
static_assert(std::is_same<sequence_tag<ints<> >::type, ints_tag>::value, "");
static_assert(std::is_same<sequence_tag<ints<1,2> >::type, ints_tag>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
