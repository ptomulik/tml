// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/int_fwd.hpp

/** // doc: tml/int_fwd.hpp {{{
 * \file tml/int_fwd.hpp
 * \brief Forward declarations for \ref tml/int.hpp
 */ // }}}
#ifndef TML_INT_FWD_HPP
#define TML_INT_FWD_HPP

#include <tml/integral_c_fwd.hpp>

namespace tml {
template <int n>
  using int_ = integral_c<int,n>;
} // end namespace tml

#endif /* TML_INT_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
