// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/advance_fwd.hpp

/** // doc: tml/advance_fwd.hpp {{{
 * \file tml/advance_fwd.hpp
 * \brief Forward declarations for tml/advance.hpp
 */ // }}}
#ifndef TML_ADVANCE_FWD_HPP
#define TML_ADVANCE_FWD_HPP

namespace tml {
template <class Tag>
  struct advance_impl
  {
    template<class Iterator, class N>
      struct apply;
  };
template <class Iterator, class N>
  struct advance;
} // end namespace tml

#endif /* TML_ADVANCE_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
