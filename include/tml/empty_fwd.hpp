// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/empty_fwd.hpp

/** // doc: tml/empty_fwd.hpp {{{
 * \file tml/empty_fwd.hpp
 * \brief Forward declarations for \ref tml/empty.hpp
 */ // }}}
#ifndef TML_EMPTY_FWD_HPP
#define TML_EMPTY_FWD_HPP

namespace tml {
template <class Tag>
  struct empty_impl
  {
    template<class Sequence>
      struct apply;
  };
template <class Sequence>
  struct empty;
} // end namespace tml

#endif /* TML_EMPTY_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
