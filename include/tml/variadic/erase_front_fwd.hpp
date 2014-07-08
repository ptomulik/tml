// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/erase_front_fwd.hpp

/** // doc: tml/variadic/erase_front_fwd.hpp {{{
 * \file tml/variadic/erase_front_fwd.hpp
 * \brief Forward declarations for \ref tml/variadic/erase_front.hpp
 */ // }}}
#ifndef TML_VARIADIC_ERASE_FRONT_FWD_HPP
#define TML_VARIADIC_ERASE_FRONT_FWD_HPP

namespace tml { namespace variadic {
template <class F, class N>
  struct erase_front
  {
    template<class... Args>
      struct apply;
  };
template <class F, long N>
  struct erase_front_c
  {
    template<class... Args>
      struct apply;
  };
} } // end namespace tml::variadic

#endif /* TML_VARIADIC_ERASE_FRONT_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
