// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/template_sequence/aux_/join.hpp

/** // doc: tml/template_sequence/aux_/join.hpp {{{
 * \file tml/template_sequence/aux_/join.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_TEMPLATE_SEQUENCE_AUX_JOIN_HPP
#define TML_TEMPLATE_SEQUENCE_AUX_JOIN_HPP

#include <tml/join_fwd.hpp>
#include <tml/quote.hpp>
#include <tml/variadic/join.hpp>
#include <tml/sequence_generator.hpp>
#include <tml/apply_sequence.hpp>
#include <tml/template_sequence/aux_/tag.hpp>
#include <tml/template_sequence/aux_/sequence_generator.hpp>
#include <tml/template_sequence/aux_/apply_sequence.hpp>

namespace tml {
template <>
  struct join_impl<aux::template_sequence_tag, aux::template_sequence_tag>
  {
  private:
      template<class F>
        struct join2
        {
          template <class...Args>
            struct apply
            {
              typedef variadic::join<F, Args...> type;
            };
        };
  public:
      template <class Sequence1, class Sequence2>
        struct apply
          : apply_sequence<
              typename apply_sequence<
                join2<typename sequence_generator<Sequence1>::type>
              , Sequence1
              >::type
            , Sequence2
            >
        { };
  };
} // end namespace tml

#endif /* TML_TEMPLATE_SEQUENCE_AUX_JOIN_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
