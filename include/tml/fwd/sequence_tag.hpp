// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/sequence_tag.hpp

/** // doc: tml/sequence_tag.hpp {{{
 * \file tml/sequence_tag.hpp
 * \brief Defines the tml::sequence_tag metafunction.
 */ // }}}
#ifndef TML_FWD_SEQUENCE_TAG_HPP
#define TML_FWD_SEQUENCE_TAG_HPP

namespace tml { namespace detail {
template <class S> struct sequence_tag_impl;
} } // end namespace tml::detail

namespace tml {
template <class S>
  struct sequence_tag;
} // end namespace tml

#endif /* TML_FWD_SEQUENCE_TAG_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
