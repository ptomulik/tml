// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/unpack_args_fwd.hpp

/** // doc: tml/unpack_args_fwd.hpp {{{
 * \file tml/unpack_args_fwd.hpp
 * \brief Forward declarations for \ref tml/unpack_args.hpp
 */ // }}}
#ifndef TML_UNPACK_ARGS_FWD_HPP
#define TML_UNPACK_ARGS_FWD_HPP

namespace tml {
template <class F>
  struct unpack_args
  {
    template <class Sequence>
      struct apply;
  };
} // end namespace tml

#endif /* TML_UNPACK_ARGS_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
