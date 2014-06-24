// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/lambda.hpp

/** // doc: tml/lambda.hpp {{{
 * \file tml/lambda.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_LAMBDA_HPP
#define TML_LAMBDA_HPP

#include <tml/lambda_fwd.hpp>
#include <tml/is_placeholder_expr.hpp>
#include <tml/if.hpp>
#include <tml/protect.hpp>
#include <tml/bind.hpp>
#include <tml/quote.hpp>
#include <tml/void.hpp>

namespace tml {
/** // doc: lambda {{{
 * \ingroup MetafunComposeBind
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
 *  typedef lambda<x>::type f;
 * \endcode
 *
 * - **Return type**: \ref MetafunClassConcept.
 * - **Semantics**: If `x` is a \ref PlaceholderExprConcept in a general form
 *   `X<args...>`, where `X` si a class template and `args...` are arbitrary
 *   types, equivalent to
 *   \code
 *    typedef protect< bind<
 *          quote<X>
 *        , lambda<args>::type...
 *        > > f;
 *   \endcode
 *
 *   otherwise, `f` is identical to `x`.
 *
 * \code
 *  typedef lambda<x,tag>::type f;
 * \endcode
 *
 * - **Return type**: \ref MetafunClassConcept.
 * - **Semantics**: If `x` is a \ref PlaceholderExprConcept in a general form
 *   `X<args...>`, where `X` si a class template and `args...` are arbitrary
 *   types, equivalent to
 *   \code
 *    typedef protect< bind<
 *          quote<X,tag>
 *        , lambda<args,tag>::type...
 *        > > f;
 *   \endcode
 *
 *   otherwise, `f` is identical to `x`.
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
  {
  private:
    typedef Y<Args...> X;
  public:
    typedef typename if_<
        typename is_placeholder_expr<X>::type
      , protect<bind< quote<Y,Tag>, typename lambda<Args,Tag>::type... > >
      , X
    >::type type;
  };
template <template <class...> class Y, class... Args>
  struct lambda<Y<Args...>, void_>
  {
  private:
    typedef Y<Args...> X;
  public:
    typedef typename if_<
        typename is_placeholder_expr<X>::type
      , protect<bind< quote<Y>, typename lambda<Args>::type... > >
      , X
    >::type type;
  };
} // end namespace tml

#endif /* TML_LAMBDA_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
