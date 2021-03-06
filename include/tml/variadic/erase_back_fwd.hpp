// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/erase_back_fwd.hpp

/** // doc: tml/variadic/erase_back_fwd.hpp {{{
 * \file tml/variadic/erase_back_fwd.hpp
 * \brief Forward declarations for \ref tml/variadic/erase_back.hpp
 */ // }}}
#ifndef TML_VARIADIC_ERASE_BACK_FWD_HPP
#define TML_VARIADIC_ERASE_BACK_FWD_HPP

namespace tml { namespace variadic {
template <class F, class N>
  struct erase_back
  {
    template<class... Args>
      struct apply;
  };
template <class F, long N>
  struct erase_back_c
  {
    template<class... Args>
      struct apply;
  };
} } // end namespace tml::variadic

#endif /* TML_VARIADIC_ERASE_BACK_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
