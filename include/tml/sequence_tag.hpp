// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/sequence_tag.hpp

/** // doc: tml/sequence_tag.hpp {{{
 * \file tml/sequence_tag.hpp
 * \brief Provides \ref tml::sequence_tag
 */ // }}}
#ifndef TML_SEQUENCE_TAG_HPP
#define TML_SEQUENCE_TAG_HPP

#include <tml/sequence_tag_fwd.hpp>

namespace tml {
/** // doc: sequence_tag {{{
 * \ingroup SeqIntrGroup
 * \struct sequence_tag
 * \brief Return sequence tag
 *
 * \tparam Sequence A sequence, for which the tag will be returned.
 *
 * \par Synopsis
 *
 * \code
 *  template< class Sequence >
 *  struct sequence_tag
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns a tag identifying given sequence. The returned tag is used by
 * \ref TagDispatchedMetafunConcept "Tag Dispatched Metafunctions" operating on
 * sequences to dispatch operation to an appropriate implementation.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For any type `s`
 * \code
 *  typedef sequence_tag<s>::type t;
 * \endcode
 *
 * - **Return type**: Unspecified
 * - **Semantics**: By default equivalent to
 *   \code
 *    typedef s::sequence_tag t;
 *   \endcode
 *   `t` is a type used to dispatch execution of \ref TagDispatchedMetafunConcept
 *   "Tag Dispatched Metafunctions" operating on sequences to appropriate
 *   implementations.
 *
 */ // }}}
template <class Sequence>
  struct sequence_tag
  { 
    typedef typename Sequence::sequence_tag type;
  };
} // end namespace tml

#endif /* TML_SEQUENCE_TAG_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
