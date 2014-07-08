// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/template_sequence/aux_/distance.hpp

/** // doc: tml/template_sequence/aux_/distance.hpp {{{
 * \file tml/template_sequence/aux_/distance.hpp
 * \brief Implements \ref tml::distance for \ref TemplateSeqConcept iterator
 */ // }}}
#ifndef TML_TEMPLATE_SEQUENCE_AUX_DISTANCE_HPP
#define TML_TEMPLATE_SEQUENCE_AUX_DISTANCE_HPP

#include <tml/distance_fwd.hpp>
#include <tml/long.hpp>
#include <tml/template_sequence/aux_/tag.hpp>

namespace tml {
template <>
  struct distance_impl<aux::ts_iter_tag>
  {
    template<class First, class Last>
      struct apply
        : long_<(Last::pos::value - First::pos::value)>
      { };
  };
} // end namespace tml

#endif /* TML_TEMPLATE_SEQUENCE_AUX_DISTANCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
