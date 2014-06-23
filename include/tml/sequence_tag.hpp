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
#ifndef TML_SEQUENCE_TAG_HPP
#define TML_SEQUENCE_TAG_HPP

#include <tml/fwd/sequence_tag.hpp>

namespace tml { namespace detail {
/** // doc: sequence_tag_impl {{{
 * \brief Implementation of the \ref sequence_tag metafunction
 *
 * \tparam Seq a sequence
 *
 * This template shall be used for specialization instead of specializing the
 * \ref sequence_tag directly.
 *
 * **Defaults to**: ``Seq::sequence_tag``
 */ // }}}
template <class Seq>
  struct sequence_tag_impl
  {
    typedef typename Seq::sequence_tag type;
  };
} } // end namesapce tml::detail

namespace tml {
/** // doc: sequence_tag {{{
 * \brief Return sequence tag for a given type 
 *
 * \tparam Seq a sequence
 *
 * Sequence tags are used to dispatch generation of custom sequences.
 *
 * \par Example
 * \snippet tml/sequence_tag.cpp Code
 *
 * \sa detail::sequence_tag_impl
 * \sa generate
 */ // }}}
template <class Seq>
  struct sequence_tag
    : detail::sequence_tag_impl<Seq>
  { };
} // end namespace tml

#endif /* TML_SEQUENCE_TAG_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
