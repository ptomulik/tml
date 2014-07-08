// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/begin.hpp

/** // doc: tml/begin.hpp {{{
 * \file tml/begin.hpp
 * \brief Provides \ref tml::begin
 */ // }}}
#ifndef TML_BEGIN_HPP
#define TML_BEGIN_HPP

#include <tml/begin_fwd.hpp>
#include <tml/sequence_tag.hpp>

namespace tml {
/** // doc: begin {{{
 * \ingroup SeqIntrGroup
 * \struct begin
 * \brief Returns an iterator pointing to the first element of the sequence.
 *
 * \tparam Sequence A sequence whose begin iterator will be returned.
 *
 * \par Synopsis
 *
 * \code
 *  template< typename Sequence >
 *  struct begin
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns an iterator that points to the first element of the sequence.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For an arbitrary \ref ForwardSeqConcept `s`
 * \code
 *  typedef begin<s>::type first;
 * \endcode
 *
 * - **Return type**: \ref ForwardIterConcept
 * - **Semantics**: `first` is an iterator pointing to the first element of `s`
 * - **Postcondition**: `first` is either dereferenceable or past-the-end;
 *   it is past-the-end if and only if `size<s>:: value == 0`.
 *
 * \par Example
 * \snippet tml/begin.cpp Code
 *
 */ // }}}
template <class Sequence>
  struct begin
    : begin_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence>
  { };
} // end namespace tml

#endif /* TML_BEGIN_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
