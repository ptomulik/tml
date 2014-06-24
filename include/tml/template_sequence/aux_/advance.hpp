// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/template_sequence/aux_/advance.hpp

/** // doc: tml/template_sequence/aux_/advance.hpp {{{
 * \file tml/template_sequence/aux_/advance.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_TEMPLATE_SEQUENCE_AUX_ADVANCE_HPP
#define TML_TEMPLATE_SEQUENCE_AUX_ADVANCE_HPP

#include <tml/advance_fwd.hpp>
#include <tml/long.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/iterator.hpp>

namespace tml {
template <>
  struct advance_impl<aux::ts_iter_tag>
  {
    template<class Iterator, class N>
      struct apply
        : Iterator::template advance<N::value>
      { };
  };
} // end namespace tml::aux

#endif /* TML_TEMPLATE_SEQUENCE_AUX_ADVANCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
