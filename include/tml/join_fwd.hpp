// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/join_fwd.hpp

/** // doc: tml/join_fwd.hpp {{{
 * \file tml/join_fwd.hpp
 * \brief Forward declarations for tml/join.hpp
 */ // }}}
#ifndef TML_JOIN_FWD_HPP
#define TML_JOIN_FWD_HPP

namespace tml {
template <class Tag1, class Tag2>
  struct join_impl
  {
    template <class Sequence1, class Sequence2>
      struct apply;
  };
template <class Sequence1, class Sequence2>
  struct join;
} // end namespace tml

#endif /* TML_JOIN_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
