// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/numeric_tag.hpp

/** // doc: tml/numeric_tag.hpp {{{
 * \file tml/numeric_tag.hpp
 * \brief Provides \ref tml::numeric_tag
 */ // }}}
#ifndef TML_NUMERIC_TAG_HPP
#define TML_NUMERIC_TAG_HPP

#include <tml/numeric_tag_fwd.hpp>

namespace tml {
/** // doc: numeric_tag {{{
 * \struct numeric_tag
 * \brief Returns a tag determining numeric type of the argument.
 *
 * \tparam T The argument to be described.
 *
 * \par Synopsis
 *
 * \code
 *  template< class T >
 *  struct numeric_tag
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns a tag determining numeric type of `T` (that is, the type of numbers
 * to which `T` belongs). For example `integral_c<int,4>` as well as
 * `integral_c<long,5>` belong to \ref IntConstConcept "Integral Constants" and
 * both have numeric tag identical to `integral_c_tag`. One may, however,
 * imagine other kind of numbers implemented via C++ templates, e.g. rational
 * numbers.
 *
 * Numeric tags are used to dispatch \ref NumericMetafunConcept "Numeric
 * Metafunctions" to appropriate implementations depending on their input
 * arguments.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For any type `x`
 * \code
 *  typedef numeric_tag<x>::type t;
 * \endcode
 *
 * - **Return type**: Any type.
 * - **Semantics**: `t` is an object determining the numeric type of `x`.
 *
 * \par Example
 * \snippet tml/numeric_tag.cpp Code
 *
 */ // }}}
template <class T>
  struct numeric_tag
  {
    typedef typename T::numeric_tag type;
  };
} // end namespace tml

#endif /* TML_NUMERIC_TAG_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
