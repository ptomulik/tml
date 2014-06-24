// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/clear_fwd.hpp

/** // doc: tml/clear_fwd.hpp {{{
 * \file tml/clear_fwd.hpp
 * \brief Forward declarations for tml/clear.hpp
 */ // }}}
#ifndef TML_CLEAR_FWD_HPP
#define TML_CLEAR_FWD_HPP

namespace tml {
template <class Tag>
  struct clear_impl
  {
    template<class Sequence>
      struct apply;
  };
template <class Sequence>
  struct clear;
} // end namespace tml

#endif /* TML_CLEAR_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
