// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/push_back_fwd.hpp

/** // doc: tml/push_back_fwd.hpp {{{
 * \file tml/push_back_fwd.hpp
 * \brief Forward declarations for tml/push_back.hpp
 */ // }}}
#ifndef TML_PUSH_BACK_FWD_HPP
#define TML_PUSH_BACK_FWD_HPP

namespace tml {
template <class Tag>
  struct push_back_impl
  {
    template<class Sequence, class T>
      struct apply;
  };
template <class Sequence, class T>
  struct push_back;
} // end namespace tml

#endif /* TML_PUSH_BACK_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
