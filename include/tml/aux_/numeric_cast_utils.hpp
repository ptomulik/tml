// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/aux_/numeric_cast_utils.hpp

/** // doc: tml/aux_/numeric_cast_utils.hpp {{{
 * \file tml/aux_/numeric_cast_utils.hpp
 * \brief Utilities used by \ref tml/numeric_cast.hpp
 */ // }}}
#ifndef TML_AUX_NUMERIC_CAST_UTILS_HPP
#define TML_AUX_NUMERIC_CAST_UTILS_HPP

#include <tml/numeric_cast.hpp>
#include <tml/if.hpp>
#include <tml/identity.hpp>
#include <tml/apply_wrap.hpp>

namespace tml { namespace aux {
template <class Tag1, class Tag2, class T>
  struct cast1st
    : if_c<
        (Tag1::value >= Tag2::value)
      , identity<T>
      , apply_wrap<numeric_cast<Tag1,Tag2>,T>
      >::type
  { };
template <class Tag1, class Tag2, class T>
  struct cast2nd
    : if_c<
        (Tag1::value >= Tag2::value)
      , apply_wrap<numeric_cast<Tag2,Tag1>,T>
      , identity<T>
      >::type
  { };
template <class Tag, class T>
  struct cast1st<Tag,Tag,T>
    : identity<T>
  { };
template <class Tag, class T>
  struct cast2nd<Tag,Tag,T>
    : identity<T>
  { };
} } // end namespace tml::aux

#endif /* TML_AUX_NUMERIC_CAST_UTILS_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
