// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/bitxor_fwd.hpp

/** // doc: tml/bitxor_fwd.hpp {{{
 * \file tml/bitxor_fwd.hpp
 * \brief Forward declarations for \ref tml/bitxor.hpp
 */ // }}}
#ifndef TML_BITXOR_FWD_HPP
#define TML_BITXOR_FWD_HPP

namespace tml {
template <class Tag1, class Tag2, class... Tags>
  struct bitxor_impl
  {
    template <class T1, class T2, class... Ts>
      struct apply;
  };
template <class T1, class T2, class... Ts>
  struct bitxor_;
} // end namespace tml

#endif /* TML_BITXOR_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
