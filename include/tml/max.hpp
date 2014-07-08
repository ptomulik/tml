// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/max.hpp

/** // doc: tml/max.hpp {{{
 * \file tml/max.hpp
 * \brief Provides \ref tml::max
 */ // }}}
#ifndef TML_MAX_HPP
#define TML_MAX_HPP

#include <tml/max_fwd.hpp>
#include <tml/less.hpp>
#include <tml/if.hpp>

namespace tml {
/** // doc: max {{{
 * \ingroup MetafunMiscGroup
 * \struct max
 * \brief Returns the larger of its two arguments.
 *
 * \tparam N1 First argument.
 * \tparam N2 Second argument.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class N1
 *      , class N2
 *      >
 *  struct max
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the larger of its two arguments.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For arbitrary types `x` and `y`:
 * \code
 *  typedef max<x,y>::type r;
 * \endcode
 * - **Return type**: Any type.
 * - **Precondition**:
 *   \code
 *    less<x,y>::value
 *   \endcode
 *   is a well formed integral constant expression.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef if_< less<x,y>, y, x>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet tml/max.cpp Code
 *
 */ // }}}
template <class N1, class N2>
  struct max
    : if_<less<N1,N2>, N2, N1>
  { };
} // end namespace tml

#endif /* TML_MAX_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
