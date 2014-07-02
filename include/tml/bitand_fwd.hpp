// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/bitand_fwd.hpp

/** // doc: tml/bitand_fwd.hpp {{{
 * \file tml/bitand_fwd.hpp
 * \brief Forward declarations for tml/bitand.hpp
 */ // }}}
#ifndef TML_BITAND_FWD_HPP
#define TML_BITAND_FWD_HPP

namespace tml {
template <class Tag1, class Tag2, class... Tags>
  struct bitand_impl
  {
    template <class T1, class T2, class... Ts>
      struct apply;
  };
template <class T1, class T2, class... Ts>
  struct bitand_;
} // end namespace tml

#endif /* TML_BITAND_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
