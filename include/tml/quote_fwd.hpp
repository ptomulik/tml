// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/quote_fwd.hpp

/** // doc: tml/quote_fwd.hpp {{{
 * \file tml/quote_fwd.hpp
 * \brief Forward declarations for \ref tml/quote.hpp
 */ // }}}
#ifndef TML_QUOTE_FWD_HPP
#define TML_QUOTE_FWD_HPP

#include <tml/void.hpp>

namespace tml {
template <template <class...> class F, class Tag = void_>
  struct quote;
} // end namespace tml

#endif /* TML_QUOTE_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
