// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/integral_c/aux_/negate.hpp

/** // doc: tml/integral_c/aux_/negate.hpp {{{
 * \file tml/integral_c/aux_/negate.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_INTEGRAL_C_AUX_NEGATE_HPP
#define TML_INTEGRAL_C_AUX_NEGATE_HPP

#include <tml/negate_fwd.hpp>
#include <tml/integral_c_tag.hpp>
#include <tml/integral_c.hpp>

namespace tml {
template <>
  struct negate_impl<integral_c_tag>
  {
    template<class A>
      struct apply
        : integral_c<typename A::value_type, (- A::value)>
      { };
  };
} // end namespace tml

#endif /* TML_INTEGRAL_C_AUX_NEGATE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
