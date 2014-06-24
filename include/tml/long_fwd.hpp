// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/long_fwd.hpp

/** // doc: tml/long_fwd.hpp {{{
 * \file tml/long_fwd.hpp
 * \brief Forward declarations for tml/long.hpp
 */ // }}}
#ifndef TML_LONG_FWD_HPP
#define TML_LONG_FWD_HPP

#include <tml/integral_c_fwd.hpp>

namespace tml {
template <long n>
  using long_ = integral_c<long, n>;
} // end namespace tml

#endif /* TML_LONG_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
