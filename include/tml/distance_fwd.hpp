// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/distance_fwd.hpp

/** // doc: tml/distance_fwd.hpp {{{
 * \file tml/distance_fwd.hpp
 * \brief Forward declarations for \ref tml/distance.hpp
 */ // }}}
#ifndef TML_DISTANCE_FWD_HPP
#define TML_DISTANCE_FWD_HPP

namespace tml {
template <class Tag>
  struct distance_impl
  {
    template<class First, class Last>
      struct apply;
  };
template <class First, class Last>
  struct distance;
} // end namespace tml

#endif /* TML_DISTANCE_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
