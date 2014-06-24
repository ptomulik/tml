// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/insert_fwd.hpp

/** // doc: tml/insert_fwd.hpp {{{
 * \file tml/insert_fwd.hpp
 * \brief Forward declarations for tml/insert.hpp
 */ // }}}
#ifndef TML_INSERT_FWD_HPP
#define TML_INSERT_FWD_HPP

namespace tml {
template <class Tag>
  struct insert_impl
  {
    template<class Sequence, class Pos, class T>
      struct apply;
  };
template <class Sequence, class Pos, class T>
  struct insert;
} // end namespace tml

#endif /* TML_INSERT_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
