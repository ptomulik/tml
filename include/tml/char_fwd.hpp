// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/char_fwd.hpp

/** // doc: tml/char_fwd.hpp {{{
 * \file tml/char_fwd.hpp
 * \brief Forward declarations for \ref tml/char.hpp
 */ // }}}
#ifndef TML_CHAR_FWD_HPP
#define TML_CHAR_FWD_HPP

#include <tml/integral_c_fwd.hpp>

namespace tml {
template <char c>
  using char_ = integral_c<char,c>;
} // end namespace tml

#endif /* TML_CHAR_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
