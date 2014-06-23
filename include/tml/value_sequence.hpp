// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/value_sequence.hpp

/** // doc: tml/value_sequence.hpp {{{
 * \file tml/value_sequence.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_VALUE_SEQUENCE_HPP
#define TML_VALUE_SEQUENCE_HPP

#include <tml/fwd/sequence.hpp>
#include <tml/fwd/value.hpp>

namespace tml {
/** // doc: value_sequence_tag {{{
 * \brief A tag representing \ref value_sequence template.
 *
 * Actually its a ``value_sequence_tag<T>`` which represents all the sequences
 * ``value_sequence<T, v1, ..., vn>`` with value type ``T``.
 */ // }}}
template <class T> struct value_sequence_tag;
/** // doc: value_sequence {{{
 * \struct value_sequence
 * \brief Sequence of values of a given type
 * \tparam T type of values in sequence,
 * \tparam values... values that comprise the sequence
 */ // }}}
template <class T, T... values>
  struct value_sequence
  {
    typedef value_sequence type;
    typedef T value_type;
    typedef value_sequence_tag<T> sequence_tag;
    typedef sequence<value_sequence_tag<T>, value_<T,values>...> sequence_type;
  };
} // end namespace tml

namespace tml { namespace detail {
template <class T, class... Types>
  struct sequence_impl<value_sequence_tag<T>, Types...>
  {
    typedef value_sequence<T, Types::value...> type;
  };
} } // end namespace tml::detail

#endif /* TML_VALUE_SEQUENCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
