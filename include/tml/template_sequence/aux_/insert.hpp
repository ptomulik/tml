// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/template_sequence/aux_/insert.hpp

/** // doc: tml/template_sequence/aux_/insert.hpp {{{
 * \file tml/template_sequence/aux_/insert.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_TEMPLATE_SEQUENCE_AUX_INSERT_HPP
#define TML_TEMPLATE_SEQUENCE_AUX_INSERT_HPP

#include <tml/insert_fwd.hpp>
#include <tml/apply_sequence.hpp>
#include <tml/sequence_generator.hpp>
#include <tml/variadic/insert.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/apply_sequence.hpp>
#include <tml/template_sequence/aux_/sequence_generator.hpp>

namespace tml {
template <>
  struct insert_impl<aux::template_sequence_tag>
  {
    template<class Sequence, class Pos, class T>
      struct apply
        : apply_sequence<
            variadic::insert<
              typename sequence_generator<Sequence>::type
            , typename Pos::pos
            , T
            >
          , Sequence
          >
      { };
  };
} // end namespace tml

#endif /* TML_TEMPLATE_SEQUENCE_AUX_INSERT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
