// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/erase_fwd.hpp

/** // doc: tml/erase_fwd.hpp {{{
 * \file tml/erase_fwd.hpp
 * \brief Forward declarations for tml/erase.hpp
 */ // }}}
#ifndef TML_ERASE_FWD_HPP
#define TML_ERASE_FWD_HPP

namespace tml {
template <class Tag>
  struct erase_impl
  {
    template<class Sequence, class First, class Last>
      struct apply;
  };
template <class Sequence, class First, class Last>
  struct erase;
} // end namespace tml

#endif /* TML_ERASE_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
