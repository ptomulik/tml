// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/equal_fwd.hpp

/** // doc: tml/equal_fwd.hpp {{{
 * \file tml/equal_fwd.hpp
 * \brief Forward declarations for tml/equal.hpp
 */ // }}}
#ifndef TML_EQUAL_FWD_HPP
#define TML_EQUAL_FWD_HPP

#include <tml/is_same_fwd.hpp>
#include <tml/placeholders.hpp>

namespace tml {
template <class Sequence1, class Sequence2, class Predicate = is_same<_1,_2> >
  struct equal;
} // end namespace tml

#endif /* TML_EQUAL_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
