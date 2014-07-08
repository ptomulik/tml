// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/or_fwd.hpp

/** // doc: tml/or_fwd.hpp {{{
 * \file tml/or_fwd.hpp
 * \brief Forward declarations for \ref tml/or.hpp
 */ // }}}
#ifndef TML_OR_FWD_HPP
#define TML_OR_FWD_HPP

namespace tml {
template <class Tag1, class Tag2, class... Tags>
  struct or_impl
  {
    template <class F1, class F2, class... Fs>
      struct apply;
  };
template <class F1, class F2, class... Fs>
  struct or_;
} // end namespace tml

#endif /* TML_OR_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
