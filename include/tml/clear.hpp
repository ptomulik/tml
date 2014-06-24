// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/clear.hpp

/** // doc: tml/clear.hpp {{{
 * \file tml/clear.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_CLEAR_HPP
#define TML_CLEAR_HPP

#include <tml/clear_fwd.hpp>
#include <tml/sequence_tag.hpp>

namespace tml {
/** // doc: clear {{{
 * \ingroup SeqIntrGroup
 * \struct clear
 * \brief Returns an empty sequence concept-identical to `Sequence`
 *
 * \tparam Sequence A sequence to get an empty "copy" of. An
 *         \ref ExtensibleSeqConcept.
 *
 * \par Synopsis
 *
 * \code
 *  template< class Sequence >
 *  struct clear
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns an empty sequence concept-identical to `Sequence`.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref ExtensibleSeqConcept `s`:
 *
 * \code
 *  typedef clear<s>::type t;
 * \endcode
 *
 * - **Return type**: \ref ExtensibleSeqConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef erase< s, begin<s>::type, end<s>::type>::type t;
 *   \endcode
 * - **Postcondition**: `empty< s > :: value == true`
 *
 * \par Complexity
 *
 * Amortized constant time
 *
 * \par Example
 * \snippet tml/clear.cpp Code
 *
 */ // }}}
template <class Sequence>
  struct clear
    : clear_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence>
  { };
} // end namespace tml

#endif /* TML_CLEAR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
