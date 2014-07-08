// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/template_sequence/aux_/begin.hpp

/** // doc: tml/template_sequence/aux_/begin.hpp {{{
 * \file tml/template_sequence/aux_/begin.hpp
 * \brief Implements \ref tml::begin for \ref TemplateSeqConcept
 */ // }}}
#ifndef TML_TEMPLATE_SEQUENCE_AUX_BEGIN_HPP
#define TML_TEMPLATE_SEQUENCE_AUX_BEGIN_HPP

#include <tml/begin_fwd.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/iterator.hpp>

namespace tml {
template <>
  struct begin_impl<aux::template_sequence_tag>
  {
    template<class Sequence>
      struct apply
      {
        typedef ts_iter<Sequence,0l> type;
      };
  };
} // begin namespace tml

#endif /* TML_TEMPLATE_SEQUENCE_AUX_BEGIN_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
