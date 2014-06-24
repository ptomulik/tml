// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/advance.hpp

/** // doc: tml/advance.hpp {{{
 * \file tml/advance.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_ADVANCE_HPP
#define TML_ADVANCE_HPP

#include <tml/advance_fwd.hpp>
#include <tml/iterator_tag.hpp>

namespace tml {
/** // doc: advance {{{
 * \ingroup IterMetafunGroup
 * \struct advance
 * \brief Moves `Iterator` by the distance `N`
 *
 * \tparam Iterator An iterator to advance. \ref ForwardIterConcept
 * \tparam N A distance. \ref IntConstConcept
 *
 * \par Synopsis
 *
 * \code
 *  template< 
 *        class Iterator
 *      , class N
 *      >
 *  struct advance
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Moves `Iterator` by the distance `N`. For \ref BidirIterConcept
 * "bidirectional" and \ref RandomIterConcept "random access" iterators, the
 * distance may be negative.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For a \ref ForwardIterConcept `iter` and arbitrary \ref IntConstConcept `n`
 * \code
 *  typedef advance<iter,n>::type j;
 * \endcode
 *
 * - **Return type**: \ref ForwardIterConcept
 * - **Precondition**: If `iter` is a \ref ForwardIterConcept, `n::value`
 *   must be nonnegative.
 * - **Semantics**: Equivalent to:
 *   \code
 *    typedef iter i0;
 *    typedef next<i0>::type i1;
 *    ...
 *    typedef next<i{n-1}>::type j;
 *   \endcode
 *   if `n::value > 0`, and
 *   \code
 *    typedef iter i0;
 *    typedef prior<i0>::type i1;
 *    ...
 *    typedef prior<i{n-1}>::type j;
 *   \endcode
 *   otherwise.
 * - **Postcondition**: `j` is dereferencable of past-the-end;
 *   \code
 *    distance<iter,j>::value == n::value
 *   \endcode
 *   if `n::value > 0`, and
 *   \code
 *    distance<j,iter>::value == n::value
 *   \endcode
 *   otherwise.
 *
 * \par Example
 * \snippet tml/advance.cpp Code
 *
 */ // }}}
template <class Iterator, class N>
  struct advance
    : advance_impl<typename iterator_tag<Iterator>::type>
        ::template apply<Iterator,N>
  { };
} // end namespace tml

#endif /* TML_ADVANCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
