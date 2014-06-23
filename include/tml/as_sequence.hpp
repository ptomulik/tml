// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/as_sequence.hpp

/** // doc: tml/as_sequence.hpp {{{
 * \file tml/as_sequence.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_AS_SEQUENCE_HPP
#define TML_AS_SEQUENCE_HPP

#include <tml/fwd/as_sequence.hpp>

namespace tml { namespace detail {
/** // doc: as_sequence_impl {{{
 * \struct as_sequence_impl
 * \brief Unpack a \ref SequenceConcept
 *
 * \tparam Seq Sequence to be unpacked
 *
 * This template shall be used for specialization instead of specializing the
 * \ref as_sequence directly.
 *
 * **Defaults to**: ``Seq::sequence_type``
 */ // }}}
template <class Seq>
  struct as_sequence_impl
  {
    typedef typename Seq::sequence_type type;
  };
} } // end namespace tml::detail

namespace tml {
/** // doc: as_sequence {{{
 * \struct as_sequence
 * \brief Unpack a \ref SequenceConcept
 *
 * \tparam Seq a sequence to be unpacked.
 *
 * Unpacking is an act of converting a sequence to a form supported by tml
 * internal operations. Unpacking ``Seq`` shall yield a type ``U`` which
 * contains the sequence tag and a list of types representing sequence
 * arguments (whatever they were - types or values).
 *
 * \par Default implementation
 *
 * See \ref detail::as_sequence_impl.
 *
 * \par Invariants
 * 
 * - for any type ``Seq`` supported by \ref pack it must hold:
 *   \code
 *      is_same< pack< as_sequence<Seq>::type >::type, Seq > 
 *   \endcode
 *
 * \par Example
 * \snippet tml/as_sequence.cpp Code
 *
 * \sa detail::as_sequence_impl
 * \sa pack
 * \sa generate
 * \sa sequence_tag
 */ // }}}
template <class Seq>
  struct as_sequence 
    : detail::as_sequence_impl<Seq>
  {};
} // end namespace tml

#endif /* TML_AS_SEQUENCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
