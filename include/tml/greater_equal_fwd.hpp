// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/greater_equal_fwd.hpp

/** // doc: tml/greater_equal_fwd.hpp {{{
 * \file tml/greater_equal_fwd.hpp
 * \brief Forward declarations for \ref tml/greater_equal.hpp
 */ // }}}
#ifndef TML_GREATER_EQUAL_FWD_HPP
#define TML_GREATER_EQUAL_FWD_HPP

namespace tml {
template <class Tag1, class Tag2>
  struct greater_equal_impl
  {
    template<class T1, class T2>
      struct apply;
  };
template <class T1, class T2>
  struct greater_equal;
} // end namespace tml

#endif /* TML_GREATER_EQUAL_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
