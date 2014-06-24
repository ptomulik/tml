// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/erase.hpp

/** // doc: tml/erase.hpp {{{
 * \file tml/erase.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_ERASE_HPP
#define TML_ERASE_HPP

#include <tml/erase_fwd.hpp>
#include <tml/sequence_tag.hpp>

namespace tml {
/** // doc: erase {{{
 * \ingroup SeqIntrGroup
 * \struct erase
 * \brief Removes one or more adjacent elements from a sequence
 *
 * \tparam Sequence A sequence to erase from. \ref ExtensibleSeqConcept.
 * \tparam First An iterator to the beginning of the range to be erased.
 * \tparam Last An iterator past-the-end of the range to be erased.
 *
 * \par Synopsis
 *
 * \code
 *  template< 
 *        class Sequence
 *      , class First
 *      , class Last
 *      >
 *  struct erase
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `erase` performs a removal of one or more adjacent elements in the sequence
 * starting from an arbitrary position.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref ExtensibleSeqConcept `s` and iterators `first` and `last` into
 * `s`:
 * \code
 *  typedef erase<s,first,last>::type r;
 * \endcode
 *
 * - **Return type**: \ref ExtensibleSeqConcept
 * - **Precondition**: `[first,last)` is a valid range in `s`.
 * - **Semantics**: `r` is a new sequence, concept-identical to `s`, of the
 *   following elements: `[begin<s> :: type, pos), [last, end<s>:: type)`
 * - **Postcondition**: The relative order of elements in `r` is the same as in
 *   `s`;
 *   \code
 *    size<r>::value == size<s>::value - distance<first,last>::value
 *   \endcode
 *
 * \par Example
 * \snippet tml/erase.cpp Code
 *
 */ // }}}
template <class Sequence, class First, class Last>
  struct erase
    : erase_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence, First, Last>
  { };
} // end namespace tml

#endif /* TML_ERASE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
