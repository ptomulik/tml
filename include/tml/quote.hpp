// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/quote.hpp

/** // doc: tml/quote.hpp {{{
 * \file tml/quote.hpp
 * \brief Provides \ref tml::quote
 */ // }}}
#ifndef TML_QUOTE_HPP
#define TML_QUOTE_HPP

#include <tml/quote_fwd.hpp>
#include <tml/enable_if_type.hpp>

namespace tml {
/** // doc: quote {{{
 * \ingroup MetafunComposeBindGroup
 * \struct quote
 * \brief Wraps a \ref MetafunConcept to create a corresponding
 *        \ref MetafunClassConcept
 *
 * \tparam F A \ref MetafunClassConcept to wrap
 * \tparam Tag A tag determining wrap semantics. Any type.
 *
 * \par Synopsis
 * \code
 *  template<
 *        template< class... > class F
 *      , class Tag = unspecified
 *  >
 *  struct quote
 *  {
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * `quote` is a higher-order primitive that wraps a \ref MetafunConcept
 * to create a corresponding \ref MetafunClassConcept.
 * 
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For any \ref MetafunConcept `f` and arbitrary type `tag`:
 * \code
 *  typedef quote<f> g;
 *  typedef quote<f,tag> g;
 * \endcode
 *
 * - **Return type**: \ref MetafunClassConcept
 * - **Semantics**: Equivalent to:
 *   \code
 *    struct g
 *    {
 *      template< class... Args > struct apply
 *       : f<Args...>
 *      {
 *      };
 *    };
 *   \endcode
 *
 *   if `f<Args...>` has nested type member `::type`, and to
 *   \code
 *    struct g
 *    {
 *      template< class... Args > struct apply
 *      {
 *        typedef f<Args...> type;
 *      };
 *    };
 *   \endcode
 *
 *   otherwise.
 *
 * \par Example
 * \snippet tml/quote.cpp Code
 */ // }}}
template <template <class...> class F, class Tag>
  struct quote
  {
    // Use SFINAE to determine whether X::type is a valid type expression.
    template <class X, class Enable = void>
      struct apply_impl
      {
        typedef X type;
      };
    template <class X> 
      struct apply_impl<X, typename enable_if_type<typename X::type>::type>
        : X
      { };
    template <class... Args>
      struct apply
        : apply_impl<F<Args...> >
      { };
  };
} // end namespace tml

#endif /* TML_QUOTE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
