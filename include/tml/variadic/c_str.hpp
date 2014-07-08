// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/c_str.hpp

/** // doc: tml/variadic/c_str.hpp {{{
 * \file tml/variadic/c_str.hpp
 * \brief Provides \ref tml::variadic::c_str
 */ // }}}
#ifndef TML_VARIADIC_C_STR_HPP
#define TML_VARIADIC_C_STR_HPP

#include <tml/variadic/c_str_fwd.hpp>
#include <tml/c_str_term.hpp>

namespace tml { namespace variadic {
/** // doc: c_str {{{
 * \ingroup MetafunStringVariadicGroup
 * \struct c_str
 * \brief Creates a null-terminated string from characters.
 *
 * \tparam CharT Character type for the output string.
 * \tparam Chars Input string characters.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template< class CharT = char >
 *      struct c_str
 *      {
 *        template< class... Chars >
 *          struct apply
 *          {
 *            typedef unspecified value_type;
 *            static constexpr value_type value = unspecified;
 *          };
 *      };
 *  }
 * \endcode
 *
 * \par Description
 *
 * `variadic::c_str` creates a null-terminated string from `Chars...`.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For integral \ref IntConstConcept "Integral Constants" `chars...` with
 * values implicitly convertible to `char`
 * \code
 *  char const* r = c_str<>::apply<chars...>::value;
 * \endcode
 *
 * - **Return type**: pointer to string
 * - **Semantics**: `r` is a pointer to null-terminated string created from all
 *   the `chars...`
 *
 * For integral type `t` and \ref IntConstConcept "Integral Constants"
 * `chars...` with values implicitly convertible to `t`
 * \code
 *  t const* r = c_str<t>::apply<chars...>::value;
 * \endcode
 *
 * - **Return type**: pointer to string
 * - **Semantics**: `r` is a pointer to null-terminated string created from all
 *   the `chars...`
 *
 * \code
 *  typedef c_str<>::apply<chars...>::value_type v;
 *  typedef c_str<t>::apply<char...>::value_type v;
 * \endcode
 *
 * - **Return type**: A type.
 * - **Semantics**: `v` is a type representing array of characters with a size
 *   necessary to contain the string characters plus a string terminator.
 *
 * \par Example
 * \snippet tml/variadic/c_str.cpp Code
 *
 */ // }}}
template <class CharT>
  struct c_str;
template <class CharT>
  template <class... Chars>
    struct c_str<CharT>::apply
    {
      typedef CharT const value_type[sizeof...(Chars)+1];
      static constexpr value_type value = { Chars::value...,
                                            c_str_term<CharT>::value };
    };
template<class CharT>
  template<class... Chars>
    constexpr CharT const
      c_str<CharT>::apply<Chars...>::value[sizeof...(Chars)+1];
} } // end namespace tml::variadic

#endif /* TML_VARIADIC_C_STR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
