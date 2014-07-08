// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/integral_c/aux_/not.hpp

/** // doc: tml/integral_c/aux_/not.hpp {{{
 * \file tml/integral_c/aux_/not.hpp
 * \brief Implements \ref tml::not_ for \ref IntConstConcept
 */ // }}}
#ifndef TML_INTEGRAL_C_AUX_NOT_HPP
#define TML_INTEGRAL_C_AUX_NOT_HPP

#include <tml/not_fwd.hpp>
#include <tml/integral_c_tag.hpp>
#include <tml/bool.hpp>

namespace tml {
template <>
  struct not_impl<integral_c_tag>
  {
    template<class F>
      struct apply
        : bool_<(!F::type::value)>
      { };
  };
} // end namespace tml

#endif /* TML_INTEGRAL_C_AUX_NOT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
