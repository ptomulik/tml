// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/template_sequence/aux_/sequence_generator.hpp

/** // doc: tml/template_sequence/aux_/sequence_generator.hpp {{{
 * \file tml/template_sequence/aux_/sequence_generator.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_TEMPLATE_SEQUENCE_AUX_SEQUENCE_GENERATOR_HPP
#define TML_TEMPLATE_SEQUENCE_AUX_SEQUENCE_GENERATOR_HPP

#include <tml/sequence_generator_fwd.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/quote.hpp>

namespace tml {
template <>
  struct sequence_generator_impl<aux::template_sequence_tag>
  {
  private:
    template <template <class TT, TT...> class X, class T>
      struct generator_c
      {
        template <class... Args>
          struct apply
          {
            typedef X<T,Args::value...> type;
          };
      };
  public:
    template<class Sequence>
      struct apply;
    template<template <class...> class S, class... Args>
      struct apply<S<Args...> >
      {
        typedef quote<S> type;
      };
    template<template <class TT, TT...> class X, class T, T... Args>
      struct apply<X<T,Args...> >
      {
        typedef generator_c<X,T> type;
      };
  };
} // end namespace tml

#endif /* TML_TEMPLATE_SEQUENCE_AUX_SEQUENCE_GENERATOR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
