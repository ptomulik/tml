// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/push_front.hpp

/** // doc: tml/push_front.hpp {{{
 * \file tml/push_front.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_PUSH_FRONT_HPP
#define TML_PUSH_FRONT_HPP

#include <tml/push_front_fwd.hpp>
#include <tml/sequence_tag.hpp>

namespace tml {
/** // doc: push_front {{{
 * \ingroup SeqIntrGroup
 * \struct push_front
 * \brief Insert element at the beginning of sequence.
 *
 * \tparam Sequence A sequence to insert into. \ref FrontExtensibleSeqConcept.
 * \tparam T The element to be inserted.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class Sequence
 *      , class T
 *      >
 *  struct push_front
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `push_front` performs an insertion at the beginning of the sequence with
 * guaranteed `O(1)` complexity.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref FrontExtensibleSeqConcept `s` and arbitrary type `x`:
 * \code
 *  typedef push_front<s,x>::type r;
 * \endcode
 *
 * - **Return type**: \ref FrontExtensibleSeqConcept.
 * - **Semantics**: Equivalent to:
 *   \code
 *    typedef insert< s, begin<s>::type, x>::type r;
 *   \endcode
 * - **Postcondition**:
 *    \code
 *      size<r>::value == size<s>::value + 1
 *    \endcode
 *    \code
 *      is_same<front<r>::type, x>::value == true
 *    \endcode
 *
 * \par Example
 * \snippet tml/push_front.cpp Code
 *
 */ // }}}
template <class Sequence, class T>
  struct push_front
    : push_front_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence,T>
  { };
} // end namespace tml

#endif /* TML_PUSH_FRONT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
