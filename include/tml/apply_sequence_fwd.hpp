// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/apply_sequence_fwd.hpp

/** // doc: tml/apply_sequence_fwd.hpp {{{
 * \file tml/apply_sequence_fwd.hpp
 * \brief Forward declarations for tml/apply_sequence.hpp
 */ // }}}
#ifndef TML_APPLY_SEQUENCE_FWD_HPP
#define TML_APPLY_SEQUENCE_FWD_HPP

namespace tml {
template <class Tag>
  struct apply_sequence_impl
  {
    template<class...>
      struct apply;
  };
template <class F, class Sequence>
  struct apply_sequence;
} // end namespace tml

#endif /* TML_APPLY_SEQUENCE_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
