// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/iterator_tag.hpp

/** // doc: tml/iterator_tag.hpp {{{
 * \file tml/iterator_tag.hpp
 * \brief Provides \ref tml::iterator_tag
 */ // }}}
#ifndef TML_ITERATOR_TAG_HPP
#define TML_ITERATOR_TAG_HPP

#include <tml/iterator_tag_fwd.hpp>

namespace tml {
/** // doc: iterator_tag {{{
 * \ingroup SeqIntrGroup
 * \struct iterator_tag
 * \brief Return iterator tag
 *
 * \tparam Iterator A iterator, for which the tag will be returned.
 *
 * \par Synopsis
 *
 * \code
 *  template< class Iterator >
 *  struct iterator_tag
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns a tag identifying given iterator. The returned tag is used by
 * \ref TagDispatchedMetafunConcept "Tag Dispatched Metafunctions" operating on
 * iterators to dispatch operation to an appropriate implementation.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For any type `s`
 * \code
 *  typedef iterator_tag<s>::type t;
 * \endcode
 *
 * - **Return type**: Unspecified
 * - **Semantics**: By default equivalent to
 *   \code
 *    typedef s::iterator_tag t;
 *   \endcode
 *   `t` is a type used to dispatch execution of \ref TagDispatchedMetafunConcept
 *   "Tag Dispatched Metafunctions" operating on iterators to appropriate
 *   implementations.
 *
 */ // }}}
template <class Iterator>
  struct iterator_tag
  {
    typedef typename Iterator::iterator_tag type;
  };
} // end namespace tml

#endif /* TML_ITERATOR_TAG_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
