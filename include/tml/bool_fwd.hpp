// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/bool_fwd.hpp

/** // doc: tml/bool_fwd.hpp {{{
 * \file tml/bool_fwd.hpp
 * \brief Forward declarations for tml/bool.hpp
 */ // }}}
#ifndef TML_BOOL_FWD_HPP
#define TML_BOOL_FWD_HPP

#include <tml/integral_c_fwd.hpp>

namespace tml {
template <bool C>
  using bool_ = integral_c<bool,C>;
using true_ = bool_<true>;
using false_ = bool_<false>;
} // end namespace tml

#endif /* TML_BOOL_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
