// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/variadic/xxx.hpp

/** // doc: tml/variadic/xxx.hpp {{{
 * \file tml/variadic/xxx.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_VARIADIC_XXX_HPP
#define TML_VARIADIC_XXX_HPP

#include <tml/variadic/xxx_fwd.hpp>

namespace tml { namespace variadic {
/** // doc: xxx {{{
 * \ingroup TODO: GroupName
 * \struct xxx
 * \brief TODO: brief description
 *
 * \tparam T TODO parameter description
 *
 * \par Synopsis
 *
 * \code
 *  template< TODO >
 *    struct xxx
 *    {
 *      template< class... Args >
 *        struct apply
 *        {
 *          TODO
 *        };
 *    };
 * \endcode
 *
 * \par Description
 *
 * TODO
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * TODO
 * \code
 *  typedef xxx< TODO >::apply<a1,...an>::type r;
 * \endcode
 *
 * - **Return type**: TODO
 * - **Semantics**: TODO
 *
 * \par Example
 * \snippet tml/variadic/xxx.cpp Code
 *
 */ // }}}
template <class T/*TODO: args*/>
  struct xxx;
template <class T/* TODO: args*/>
  template <class... Args>
    struct xxx<T/*TODO: args*/>::apply
    { };
} } // end namespace tml::variadic

#endif /* TML_VARIADIC_XXX_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
