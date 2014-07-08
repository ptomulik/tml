// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/next.hpp

/** // doc: tml/next.hpp {{{
 * \file tml/next.hpp
 * \brief Provides \ref tml::next
 */ // }}}
#ifndef TML_NEXT_HPP
#define TML_NEXT_HPP

#include <tml/next_fwd.hpp>

namespace tml {
/** // doc: next {{{
 * \ingroup IterMetafunGroup
 * \struct next
 * \brief Returns the next iterator in the sequence.
 *
 * \tparam Iterator An iterator to increment. \ref ForwardIterConcept.
 *
 * \par Synopsis
 *
 * \code
 *  template< class Iterator >
 *  struct next
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the next iterator in the sequence.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref ForwardIterConcept `iter`:
 * \code
 *  typedef next<iter>::type j;
 * \endcode
 *
 * - **Return type**: \ref ForwardIterConcept.
 * - **Precondition**: `iter` is incrementable.
 * - **Semantics**: `j` is an iterator pointing to the next element in
 *   sequence, or is past-the-end.
 *
 * \par Example
 * \snippet tml/next.cpp Code
 *
 */ // }}}
template <class T>
  struct next
  {
    typedef typename T::next type;
  };
} // end namespace tml

#endif /* TML_NEXT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
