// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/as_sequence.hpp

/** // doc: tml/as_sequence.hpp {{{
 * \file tml/as_sequence.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_AS_SEQUENCE_HPP_INCLUDED
#define TML_AS_SEQUENCE_HPP_INCLUDED

#include <tml/sequence.hpp>

namespace tml {
namespace detail {

template <class T>
  struct as_sequence_impl;

template <template <class...> class Seq, class... Types>
  struct as_sequence_impl<Seq<Types...> >
  {
    typedef sequence<Types...> type;
  };

} // namespace detail
} // namespace tml


namespace tml {

template <class T>
  struct as_sequence 
    : detail::as_sequence_impl<T>
  {};

} // namespace tml

#endif /* TML_AS_SEQUENCE_HPP_INCLUDED */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
