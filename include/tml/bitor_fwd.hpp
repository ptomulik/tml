// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/bitor_fwd.hpp

/** // doc: tml/bitor_fwd.hpp {{{
 * \file tml/bitor_fwd.hpp
 * \brief Forward declarations for \ref tml/bitor.hpp
 */ // }}}
#ifndef TML_BITOR_FWD_HPP
#define TML_BITOR_FWD_HPP

namespace tml {
template <class Tag1, class Tag2, class... Tags>
  struct bitor_impl
  {
    template <class T1, class T2, class... Ts>
      struct apply;
  };
template <class T1, class T2, class... Ts>
  struct bitor_;
} // end namespace tml

#endif /* TML_BITOR_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
