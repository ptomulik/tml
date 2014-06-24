// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/sequence.hpp

/** // doc: tml/sequence.hpp {{{
 * \file tml/sequence.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_SEQUENCE_HPP
#define TML_SEQUENCE_HPP

#include <tml/sequence_fwd.hpp>
#include <tml/template_sequence/aux_/tag.hpp>

namespace tml {
/** // doc: sequence {{{
 * \ingroup SeqClassGroup
 * \struct sequence
 * \brief A \ref VariadicTemplateSeqConcept.
 *
 * \todo Write documentation for tml::sequence.
 *
 * \tparam Args Elements of the sequence.
 *
 * \par Synopsis
 *
 * TODO
 *
 * \par Description
 *
 * TODO
 *
 * \par Model of
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
 * \snippet tml/sequence.cpp Code
 *
 */ // }}}
template <class... Args>
  struct sequence
  {
    typedef sequence type;
    typedef aux::template_sequence_tag sequence_tag;
  };
/** // doc: sequence_c {{{
 * \ingroup SeqClassGroup
 * \struct sequence_c
 * \brief TODO: brief description
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
 * \snippet tml/sequence.cpp Code
 *
 */ // }}}
template <class T, T... Args>
  struct sequence_c
  {
    typedef sequence_c type;
    typedef T value_type;
    typedef aux::template_sequence_tag sequence_tag;
  };
} // end namespace tml

#include <tml/template_sequence/metafunctions.hpp>
#include <tml/template_sequence/aux_/iterator.hpp>

#endif /* TML_SEQUENCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
