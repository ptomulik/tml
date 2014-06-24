// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/size_fwd.hpp

/** // doc: tml/size_fwd.hpp {{{
 * \file tml/size_fwd.hpp
 * \brief Forward declarations for tml/size.hpp
 */ // }}}
#ifndef TML_SIZE_FWD_HPP
#define TML_SIZE_FWD_HPP

namespace tml {
template <class Tag>
  struct size_impl
  {
    template<class Sequence>
      struct apply;
  };
template <class Sequence>
  struct size;
} // end namespace tml

#endif /* TML_SIZE_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
