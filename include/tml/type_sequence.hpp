// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/type_sequence.hpp

/** // doc: tml/type_sequence.hpp {{{
 * \file tml/type_sequence.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_TYPE_SEQUENCE_HPP
#define TML_TYPE_SEQUENCE_HPP

#include <tml/fwd/sequence.hpp>

namespace tml {
/** // doc: type_sequence_tag {{{
 * \struct type_sequence_tag
 * \brief A tag representing type_sequence template.
 */ // }}}
struct type_sequence_tag;
/** // doc: type_sequence {{{
 * \struct type_sequence
 * \brief Sequence of types
 * \tparam Types... types that comprise the sequence
 *
 * \par Example
 * \snippet tml/type_sequence.cpp Code
 */ // }}}
template <class... Types>
  struct type_sequence
  {
    typedef type_sequence type;
    typedef type_sequence_tag sequence_tag;
    typedef sequence<type_sequence_tag, Types...> sequence_type;
  };
} // end namespace tml

namespace tml { namespace detail {
template <class... Types>
  struct sequence_impl<type_sequence_tag, Types...>
  {
    typedef type_sequence<Types...> type;
  };
} } // end namespace tml::detail

#endif /* TML_TYPE_SEQUENCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
