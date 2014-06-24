// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/prior.hpp

/** // doc: tml/prior.hpp {{{
 * \file tml/prior.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_PRIOR_HPP
#define TML_PRIOR_HPP

#include <tml/prior_fwd.hpp>

namespace tml {
/** // doc: prior {{{
 * \ingroup IterMetafunGroup
 * \struct prior
 * \brief Returns the previous iterator in the sequence.
 *
 * \tparam Iterator An iterator to decrement. \ref BidirIterConcept.
 *
 * \par Synopsis
 *
 * \code
 *  template< class Iterator >
 *  struct prior
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the previous iterator in the sequence.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref BidirIterConcept `iter`:
 * \code
 *  typedef prior<iter>::type j;
 * \endcode
 *
 * - **Return type**: \ref BidirIterConcept
 * - **Precondition**: `iter` is decrementable
 * - **Semantics**: `j` is an iterator pointing to the previous element in the
 *   sequence. 
 *
 * \par Example
 * \snippet tml/prior.cpp Code
 *
 */ // }}}
template <class T>
  struct prior
  {
    typedef typename T::prior type;
  };
} // end namespace tml

#endif /* TML_PRIOR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
