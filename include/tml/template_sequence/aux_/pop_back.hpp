// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/template_sequence/aux_/pop_back.hpp

/** // doc: tml/template_sequence/aux_/pop_back.hpp {{{
 * \file tml/template_sequence/aux_/pop_back.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_TEMPLATE_SEQUENCE_AUX_POP_BACK_HPP
#define TML_TEMPLATE_SEQUENCE_AUX_POP_BACK_HPP

#include <tml/pop_back_fwd.hpp>
#include <tml/variadic/pop_back.hpp>
#include <tml/apply_sequence.hpp>
#include <tml/sequence_generator.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/apply_sequence.hpp>
#include <tml/template_sequence/aux_/sequence_generator.hpp>

namespace tml {
template <>
  struct pop_back_impl<aux::template_sequence_tag>
  {
    template<class Sequence>
      struct apply
        : apply_sequence<
            variadic::pop_back<typename sequence_generator<Sequence>::type>
          , Sequence
          >
      { };
  };
} // end namespace tml

#endif /* TML_TEMPLATE_SEQUENCE_AUX_POP_BACK_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
