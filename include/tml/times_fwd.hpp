// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/times_fwd.hpp

/** // doc: tml/times_fwd.hpp {{{
 * \file tml/times_fwd.hpp
 * \brief Forward declarations for tml/times.hpp
 */ // }}}
#ifndef TML_TIMES_FWD_HPP
#define TML_TIMES_FWD_HPP

namespace tml {
template <class Tag1, class Tag2, class... Tags>
  struct times_impl
  {
    template<class T1, class T2, class... Ts>
      struct apply;
  };
template <class T1, class T2, class... Ts>
  struct times;
} // end namespace tml

#endif /* TML_TIMES_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
