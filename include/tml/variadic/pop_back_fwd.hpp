// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/pop_back_fwd.hpp

/** // doc: tml/variadic/pop_back_fwd.hpp {{{
 * \file tml/variadic/pop_back_fwd.hpp
 * \brief Forward declarations for \ref tml/variadic/pop_back.hpp
 */ // }}}
#ifndef TML_VARIADIC_POP_BACK_FWD_HPP
#define TML_VARIADIC_POP_BACK_FWD_HPP

namespace tml { namespace variadic {
template <class F>
  struct pop_back
  {
    template<class... Args>
      struct apply;
  };
} } // end namespace tml::variadic

#endif /* TML_VARIADIC_POP_BACK_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
