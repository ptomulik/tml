// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/enable_if_fwd.hpp

/** // doc: tml/enable_if_fwd.hpp {{{
 * \file tml/enable_if_fwd.hpp
 * \brief Forward declarations for tml/enable_if.hpp
 */ // }}}
#ifndef TML_ENABLE_IF_FWD_HPP
#define TML_ENABLE_IF_FWD_HPP

namespace tml {
template <class C, class T = void>
  struct enable_if;
template <bool C, class T = void>
  struct enable_if_c;
} // end namespace tml

#endif /* TML_ENABLE_IF_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
