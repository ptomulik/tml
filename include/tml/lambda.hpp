// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/lambda.hpp

/** // doc: tml/lambda.hpp {{{
 * \file tml/lambda.hpp
 * \brief Provides \ref tml::lambda
 */ // }}}
#ifndef TML_LAMBDA_HPP
#define TML_LAMBDA_HPP

#include <tml/lambda_fwd.hpp>
#include <tml/if.hpp>
#include <tml/variadic/any.hpp>
#include <tml/quote.hpp>
#include <tml/is_placeholder.hpp>
#include <tml/protect.hpp>
#include <tml/bind.hpp>
#include <tml/void.hpp>

namespace tml {
/** // doc: lambda {{{
 * \ingroup MetafunComposeBindGroup
 * \struct lambda
 * \brief Transforms \ref PlaceholderExprConcept to \ref MetafunClassConcept
 *
 * \tparam X An expression to transform. Any type.
 * \tparam Tag A tag determining transform semantics.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class X
 *      , class Tag = unspecified
 *      >
 *  struct lambda
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * If `X` is a \ref PlaceholderExprConcept, transforms `X` into a corresponding
 * \ref MetafunClassConcept, otherwise `X` is returned unchanged.
 *
 * \par Expression semantics
 * 
 * For arbitrary types `x` and `tag`
 * \code
 *  typedef lambda<protect<x> >::type f;
 *  typedef lambda<protect<x>, tag >::type f;
 * \endcode
 *
 * - **Return type**: \ref MetafunClassConcept.
 * - **Semantics**: equivalent to
 *   \code
 *    typedef protect<x> f;
 *   \endcode
 *
 * \code
 *  typedef lambda<x>::type f;
 * \endcode
 *
 * - **Return type**: \ref MetafunClassConcept.
 * - **Semantics**: If `x` is a template class specialization in a general form
 *   `X<args...>`, where `args...` are arbitrary types
 *   \code
 *    typedef protect< bind<
 *          quote<X>
 *        , lambda<args>::type...
 *        > > f;
 *   \endcode
 *
 *   if one or more `args...` are placeholders, or
 *   \code
 *    typedef X<lambda<args>::type...> f;
 *   \endcode
 *
 *   if none of the `args...` are placeholders. If `x` is not a template
 *   specialization, euqivalent to
 *   \code
 *    typedef x r;
 *   \endcode
 *
 * \code
 *  typedef lambda<x,tag>::type f;
 * \endcode
 *
 * - **Return type**: \ref MetafunClassConcept.
 * - **Semantics**: If `x` is a template class specialization in a general form
 *   `X<args...>`, where `args...` are arbitrary types
 *   \code
 *    typedef protect< bind<
 *          quote<X,tag>
 *        , lambda<args,tag>::type...
 *        > > f;
 *   \endcode
 *
 *   if one or more `args...` are placeholders, or
 *   \code
 *    typedef X<lambda<args,tag>::type...> f;
 *   \endcode
 *
 *   if none of the `args...` are placeholders. If `x` is not a template
 *   instantiation, euqivalent to
 *   \code
 *    typedef x r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/lambda.cpp Code
 */ // }}}
template <class X, class Tag>
  struct lambda
  {
     typedef X type;
  };
template <template <class...> class Y, class Tag, class... Args>
  struct lambda<Y<Args...>, Tag>
    : if_<
        variadic::any<quote<is_placeholder> >::template apply<Args...>
      , protect<bind< quote<Y,Tag>, typename lambda<Args,Tag>::type... > >
      , Y<typename lambda<Args,Tag>::type...>
      >
  { };
template <template <class...> class Y, class... Args>
  struct lambda<Y<Args...>, void_>
    : if_<
        variadic::any<quote<is_placeholder> >::template apply<Args...>
      , protect<bind< quote<Y>, typename lambda<Args>::type... > >
      , Y<typename lambda<Args>::type...>
      >
  { };
// do not protect<> twice ...
template <class X, class Tag>
  struct lambda<protect<X>, Tag>
  {
    typedef protect<X> type;
  };
template <class X>
  struct lambda<protect<X>, void_>
  {
    typedef protect<X> type;
  };
} // end namespace tml

#endif /* TML_LAMBDA_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
