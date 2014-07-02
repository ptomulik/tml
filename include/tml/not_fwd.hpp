// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/not_fwd.hpp

/** // doc: tml/not_fwd.hpp {{{
 * \file tml/not_fwd.hpp
 * \brief Forward declarations for tml/not.hpp
 */ // }}}
#ifndef TML_NOT_FWD_HPP
#define TML_NOT_FWD_HPP

namespace tml {
template <class Tag>
  struct not_impl
  {
    template <class F>
      struct apply;
  };
template <class F>
  struct not_;
} // end namespace tml

#endif /* TML_NOT_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
