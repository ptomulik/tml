// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/insert.hpp

/** // doc: tml/insert.hpp {{{
 * \file tml/insert.hpp
 * \brief Provides \ref tml::insert
 */ // }}}
#ifndef TML_INSERT_HPP
#define TML_INSERT_HPP

#include <tml/insert_fwd.hpp>
#include <tml/sequence_tag.hpp>

namespace tml {
/** // doc: insert {{{
 * \ingroup SeqIntrGroup
 * \struct insert
 * \brief Insert an element into a sequence
 *
 * \tparam Sequence A sequence to insert into. \ref ExtensibleSeqConcept.
 * \tparam Pos An iterator in `Sequence` specifying the insertion position.
 *         \ref ForwardIterConcept.
 * \tparam T The element to be inserted.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class Sequence
 *      , class Pos
 *      , class T
 *      >
 *  struct insert
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `insert` performs an insertion of type `T` at an arbitrary position `Pos` in
 * `Sequence`.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref ExtensibleSeqConcept `s`, iterator `pos`, and arbitrary type
 * `x`
 * \code
 *  typedef insert<s,pos,x>::type r;
 * \endcode
 *
 * - **Return type**: \ref ExtensibleSeqConcept
 * - **Precondition**: `pos` is an iterator in `s`.
 * - **Semantics**: `r` is a sequence, concept-identical to `s`, of the
 *   following elements `[begin<s>::type,pos),x,[pos,end<x>::type)`
 * - **Postcondition**: the relative order of the elements in `r` is same
 *   as in `s`.
 *   \code
 *    at< r, distance< begin<s>::type, pos >::type >::type
 *   \endcode
 *   is identical to `x`;
 *   \code
 *    size<r>::value == size<s>::value + 1
 *   \endcode
 *
 * \par Example
 * \snippet tml/insert.cpp Code
 *
 */ // }}}
template <class Sequence, class Pos, class T>
  struct insert
    : insert_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence,Pos,T>
  { };
} // end namespace tml

#endif /* TML_INSERT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
