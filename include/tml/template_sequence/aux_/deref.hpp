// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/template_sequence/aux_/deref.hpp

/** // doc: tml/template_sequence/aux_/deref.hpp {{{
 * \file tml/template_sequence/aux_/deref.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_TEMPLATE_SEQUENCE_AUX_DEREF_HPP
#define TML_TEMPLATE_SEQUENCE_AUX_DEREF_HPP

#include <tml/deref_fwd.hpp>
#include <tml/at.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/at.hpp>

namespace tml {
template <>
  struct deref_impl<aux::ts_iter_tag>
  {
    template<class Iterator>
      struct apply
        : at<typename Iterator::sequence, typename Iterator::pos>
      { };
  };
} // end namespace tml::aux

#endif /* TML_TEMPLATE_SEQUENCE_AUX_DEREF_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
