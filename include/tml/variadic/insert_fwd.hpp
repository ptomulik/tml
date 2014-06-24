// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/insert_fwd.hpp

/** // doc: tml/variadic/insert_fwd.hpp {{{
 * \file tml/variadic/insert_fwd.hpp
 * \brief Forward declarations for tml/variadic/insert.hpp
 */ // }}}
#ifndef TML_VARIADIC_INSERT_FWD_HPP
#define TML_VARIADIC_INSERT_FWD_HPP

namespace tml { namespace variadic {
template <class F, class Pos, class T>
  struct insert
  {
    template <class...>
      struct apply;
  };
template <class F, long Pos, class T>
  struct insert_c
  {
    template <class...>
      struct apply;
  };
} } // end namespace tml::variadic

#endif /* TML_VARIADIC_INSERT_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
