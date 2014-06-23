// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// unit.hpp

/** // doc: unit.hpp {{{
 * \file unit.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_FWD_SEQUENCE_HPP
#define TML_FWD_SEQUENCE_HPP

namespace tml { namespace detail {
/** // doc: sequence_impl {{{
 * \struct sequence_impl
 * \brief implementation details for \ref sequence
 *
 * \tparam Tag sequence tag,
 * \tparam Types types used to represent elements of the sequence.
 */ // }}}
template<class Tag, class... Types>
  struct sequence_impl;
} } // end namespace tml::detail

namespace tml {
template <class Tag, class... Types>
  struct sequence;
} // end namespace tml

#endif /* TML_FWD_SEQUENCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
