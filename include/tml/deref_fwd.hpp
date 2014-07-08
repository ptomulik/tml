// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/deref_fwd.hpp

/** // doc: tml/deref_fwd.hpp {{{
 * \file tml/deref_fwd.hpp
 * \brief Forward declarations for \ref tml/deref.hpp
 */ // }}}
#ifndef TML_DEREF_FWD_HPP
#define TML_DEREF_FWD_HPP

namespace tml {
template <class Tag>
  struct deref_impl
  {
    template<class Iterator>
      struct apply;
  };
template <class Iterator>
  struct deref;
} // end namespace tml

#endif /* TML_DEREF_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
