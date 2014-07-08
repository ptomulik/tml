// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/always_fwd.hpp

/** // doc: tml/always_fwd.hpp {{{
 * \file tml/always_fwd.hpp
 * \brief Forward declarations for \ref tml/always.hpp
 */ // }}}
#ifndef TML_ALWAYS_FWD_HPP
#define TML_ALWAYS_FWD_HPP

namespace tml {
template <class X>
  struct always
  {
    template <class...>
      struct apply;
  };
} // end namespace tml

#endif /* TML_ALWAYS_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
