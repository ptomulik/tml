// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/c_str_fwd.hpp

/** // doc: tml/c_str_fwd.hpp {{{
 * \file tml/c_str_fwd.hpp
 * \brief Forward declarations for tml/c_str.hpp
 */ // }}}
#ifndef TML_C_STR_FWD_HPP
#define TML_C_STR_FWD_HPP

namespace tml {
template <class Tag>
  struct c_str_impl
  {
    template<class Sequence, class CharT>
      struct apply;
  };
template <class Sequence, class CharT = char>
  struct c_str;
} // end namespace tml

#endif /* TML_C_STR_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
