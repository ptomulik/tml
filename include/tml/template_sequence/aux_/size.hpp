// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/template_sequence/aux_/size.hpp

/** // doc: tml/template_sequence/aux_/size.hpp {{{
 * \file tml/template_sequence/aux_/size.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_TEMPLATE_SEQUENCE_AUX_SIZE_HPP
#define TML_TEMPLATE_SEQUENCE_AUX_SIZE_HPP

#include <tml/size_fwd.hpp>
#include <tml/size_t.hpp>
#include <tml/template_sequence/aux_/tag.hpp>

namespace tml {
template <>
  struct size_impl<aux::template_sequence_tag>
  {
    template<class Sequence>
      struct apply;
    template<template <class...> class X, class... Args>
      struct apply<X<Args...> >
        : size_t_<(sizeof...(Args))>
      { };
    template<template <class TT, TT...> class X, class T, T... Args>
      struct apply<X<T,Args...> >
        : size_t_<(sizeof...(Args))>
      { };
  };
} // end namespace tml

#endif /* TML_TEMPLATE_SEQUENCE_AUX_SIZE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
