// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/at.hpp

/** // doc: tml/at.hpp {{{
 * \file tml/at.hpp
 * \brief Provides \ref tml::at
 */ // }}}
#ifndef TML_AT_HPP
#define TML_AT_HPP

#include <tml/at_fwd.hpp>
#include <tml/sequence_tag.hpp>
#include <tml/long.hpp>

namespace tml {
/** // doc: at {{{
 * \ingroup SeqIntrGroup
 * \struct at
 * \brief Returns an N-th element from the beginning of a sequence.
 *
 * \tparam Sequence A \ref ForwardSeqConcept to retrieve the element from.
 * \tparam N An offset from the beginning of the sequence specifying the
 *         element to be retrieved. \ref IntConstConcept.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class Sequence
 *      , class N
 *    >
 *  struct at
 *  {
 *    typedef unsecified type;
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * `at` returns N-th element from the beginning of the `Sequence`.
 *
 * \par Expression semantics
 *
 * For `s` being a sequence, `x` being its n-th element and an
 * \ref IntConstConcept `n`
 *
 * \code
 *  typedef at<s,n> r;
 * \endcode
 * - **Return type**: Unspecified
 * - **Semantics**: equivalent to
 *   \code
 *    typedef ref<x> r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/at.cpp Code
 *
 */ // }}}
template <class Sequence, class N>
  struct at
    : at_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence,N>
  { };
/** // doc: at_c {{{
 * \ingroup  SeqIntrGroup
 * \struct at_c
 * \brief Returns a type identical to
 *
 * \tparam T TODO parameter description
 *
 * \par Synopsis
 *
 * TODO
 *
 * \par Description
 *
 * TODO
 *
 * \par Expression semantics
 *
 * TODO
 *
 * - **Return type**: TODO
 * - **Semantics**: TODO
 *
 * \par Example
 * \snippet tml/at.cpp Code
 *
 */ // }}}
template <class Sequence, long N>
  struct at_c
    : at<Sequence, long_<N> >
  { };
} // end namespace tml

#endif /* TML_AT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
