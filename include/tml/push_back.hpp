// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/push_back.hpp

/** // doc: tml/push_back.hpp {{{
 * \file tml/push_back.hpp
 * \brief Provides \ref tml::push_back
 */ // }}}
#ifndef TML_PUSH_BACK_HPP
#define TML_PUSH_BACK_HPP

#include <tml/push_back_fwd.hpp>
#include <tml/sequence_tag.hpp>

namespace tml {
/** // doc: push_back {{{
 * \ingroup SeqIntrGroup
 * \struct push_back
 * \brief Insert element at the end of sequence
 *
 * \tparam Sequence A sequence to insert to. \ref BackExtensibleSeqConcept.
 * \tparam T The element to be inserted
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class Sequence
 *      , class T
 *      >
 *  struct push_back
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `push_back` performs an insertion at the end of the sequence with guaranteed
 * `O(1)` complexity.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref BackExtensibleSeqConcept `s` and arbitrary type `x`:
 * \code
 *  typedef push_back<s,x>::type r;
 * \endcode
 *
 * - **Return type**: \ref BackExtensibleSeqConcept.
 * - **Semantics**: Equivalent to:
 *   \code
 *    typedef insert< s, end<s>::type, x >::type r;
 *   \endcode
 * - **Postcondition**:
 *   \code
 *    is_same<back<r>::type, x>::value == true
 *   \endcode
 *   \code
 *    size<r>::value == size<s>::value + 1
 *   \endcode
 *
 * \par Example
 * \snippet tml/push_back.cpp Code
 *
 */ // }}}
template <class Sequence, class T>
  struct push_back
    : push_back_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence,T>
  { };
} // end namespace tml

#endif /* TML_PUSH_BACK_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
