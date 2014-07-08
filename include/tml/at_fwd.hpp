// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/at_fwd.hpp

/** // doc: tml/at_fwd.hpp {{{
 * \file tml/at_fwd.hpp
 * \brief Forward declarations for \ref tml/at.hpp
 */ // }}}
#ifndef TML_AT_FWD_HPP
#define TML_AT_FWD_HPP

namespace tml {
template <class Tag>
  struct at_impl
  {
    template<class Sequence, class N>
      struct apply;
  };
template <class Sequence, class N>
  struct at;
template <class Sequence, long N>
  struct at_c;
} // end namespace tml

#endif /* TML_AT_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
