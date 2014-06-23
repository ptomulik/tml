// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/sequence.hpp

/** // doc: tml/sequence.hpp {{{
 * \file tml/sequence.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_SEQUENCE_HPP
#define TML_SEQUENCE_HPP

#include <tml/fwd/sequence.hpp>
namespace tml {
/** // doc: sequence {{{
 * \struct sequence
 * \brief Native representation of any sequence supported by tml
 *
 * \tparam Tag sequence tag,
 * \tparam Types types used to represent elements of the sequence.
 *
 * \sa detail::sequence_impl
 */ // }}}
template <class Tag, class... Types>
  struct sequence
    : detail::sequence_impl<Tag, Types...>
  {
    /// Sequence type, same as sequence<Tag,Types...>
    typedef sequence sequence_type;
  };
} // end namespace tml

#endif /* TML_SEQUENCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
