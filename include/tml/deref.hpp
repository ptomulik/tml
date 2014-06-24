// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/deref.hpp

/** // doc: tml/deref.hpp {{{
 * \file tml/deref.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_DEREF_HPP
#define TML_DEREF_HPP

#include <tml/deref_fwd.hpp>
#include <tml/iterator_tag.hpp>

namespace tml {
/** // doc: deref {{{
 * \ingroup IterMetafunGroup
 * \struct deref
 * \brief Dereferences an interator
 *
 * \tparam Iterator The iterator to dereference. \ref ForwardIterConcept
 *
 * \par Synopsis
 *
 * \code
 *  template< class Iterator >
 *  struct deref
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Dereferences an iterator.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref ForwardIterConcept `iter`:
 * \code
 *  typedef deref<iter>::type t;
 * \endcode
 *
 * - **Return type**: A type.
 * - **Precondition**: `iter` is dereferenceable.
 * - **Semantics**: `t` is identical to the element referenced by `iter`.
 *
 * \par Example
 * \snippet tml/deref.cpp Code
 *
 */ // }}}
template <class Iterator>
  struct deref
    : deref_impl<typename iterator_tag<Iterator>::type>
        ::template apply<Iterator>
  { };
} // end namespace tml

#endif /* TML_DEREF_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
