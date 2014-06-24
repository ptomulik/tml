// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/front.hpp

/** // doc: tml/front.hpp {{{
 * \file tml/front.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_FRONT_HPP
#define TML_FRONT_HPP

#include <tml/front_fwd.hpp>
#include <tml/sequence_tag.hpp>

namespace tml {
/** // doc: front {{{
 * \ingroup SeqIntrGroup
 * \struct front
 * \brief Returns the first element in the sequence.
 *
 * \tparam Sequence A sequence to be examined.
 *
 * \par Synopsis
 *
 * \code
 *  template< class Sequence >
 *  struct front
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the first element in the sequence.
 *
 * \par Expression semantics
 *
 * For any \ref ForwardSeqConcept `s`:
 * \code
 *  typedef front<s>::type t;
 * \endcode
 *
 * - **Return type**: A type.
 * - **Precondition**:
 *   \code
 *    empty<s>::value == false
 *   \endcode
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef deref< begin<s>::type >::type t;
 *   \endcode
 *
 * \par Example
 * \snippet tml/front.cpp Code
 *
 */ // }}}
template <class Sequence>
  struct front
    : front_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence>
  { };
} // end namespace tml

#endif /* TML_FRONT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
