// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/shift_left_fwd.hpp

/** // doc: tml/shift_left_fwd.hpp {{{
 * \file tml/shift_left_fwd.hpp
 * \brief Forward declarations for \ref tml/shift_left.hpp
 */ // }}}
#ifndef TML_SHIFT_LEFT_FWD_HPP
#define TML_SHIFT_LEFT_FWD_HPP

namespace tml {
template <class Tag1, class Tag2>
  struct shift_left_impl
  {
    template <class F1, class Shift>
      struct apply;
  };
template <class F1, class Shift>
  struct shift_left;
} // end namespace tml

#endif /* TML_SHIFT_LEFT_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
