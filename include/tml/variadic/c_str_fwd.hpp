// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/c_str_fwd.hpp

/** // doc: tml/variadic/c_str_fwd.hpp {{{
 * \file tml/variadic/c_str_fwd.hpp
 * \brief Forward declarations for tml/variadic/c_str.hpp
 */ // }}}
#ifndef TML_VARIADIC_C_STR_FWD_HPP
#define TML_VARIADIC_C_STR_FWD_HPP

namespace tml { namespace variadic {
template <class CharT = char>
  struct c_str
  {
    template <class...>
      struct apply;
  };
} } // end namespace tml::variadic

#endif /* TML_VARIADIC_C_STR_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
