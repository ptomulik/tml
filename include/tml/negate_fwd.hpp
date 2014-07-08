// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/negate_fwd.hpp

/** // doc: tml/negate_fwd.hpp {{{
 * \file tml/negate_fwd.hpp
 * \brief Forward declarations for \ref tml/negate.hpp
 */ // }}}
#ifndef TML_NEGATE_FWD_HPP
#define TML_NEGATE_FWD_HPP

namespace tml {
template <class Tag>
  struct negate_impl
  {
    template<class C>
      struct apply;
  };
template <class C>
  struct negate;
} // end namespace tml

#endif /* TML_NEGATE_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
