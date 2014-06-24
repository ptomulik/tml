// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/template_sequence/aux_/empty.hpp

/** // doc: tml/template_sequence/aux_/empty.hpp {{{
 * \file tml/template_sequence/aux_/empty.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_TEMPLATE_SEQUENCE_AUX_EMPTY_HPP
#define TML_TEMPLATE_SEQUENCE_AUX_EMPTY_HPP

#include <tml/empty_fwd.hpp>
#include <tml/variadic/empty.hpp>
#include <tml/apply_sequence.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/apply_sequence.hpp>

namespace tml {
template <>
  struct empty_impl<aux::template_sequence_tag>
  {
    template<class Sequence>
      struct apply
        : apply_sequence<variadic::empty, Sequence>
      { };
  };
} // end namespace tml::aux

#endif /* TML_TEMPLATE_SEQUENCE_AUX_EMPTY_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
