// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/template_sequence/aux_/at.hpp

/** // doc: tml/template_sequence/aux_/at.hpp {{{
 * \file tml/template_sequence/aux_/at.hpp
 * \brief Implements \ref tml::at for \ref TemplateSeqConcept
 */ // }}}
#ifndef TML_TEMPLATE_SEQUENCE_AUX_AT_HPP
#define TML_TEMPLATE_SEQUENCE_AUX_AT_HPP

#include <tml/at_fwd.hpp>
#include <tml/variadic/at.hpp>
#include <tml/apply_sequence.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/apply_sequence.hpp>

namespace tml {
template <>
  struct at_impl<aux::template_sequence_tag>
  {
    template<class Sequence, class N>
      struct apply
        : apply_sequence<variadic::at<N>, Sequence>
      { };
  };
} // end namespace tml

#endif /* TML_TEMPLATE_SEQUENCE_AUX_AT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
