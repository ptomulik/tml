// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/xxx.hpp

/** // doc: tml/xxx.hpp {{{
 * \file tml/xxx.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_XXX_HPP
#define TML_XXX_HPP

#include <tml/xxx_fwd.hpp>
#include <tml/sequence_tag.hpp>

namespace tml {
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
 *  struct xxx
 *  {
 *    typedef TODO type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * TODO
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * TODO
 *
 * - **Return type**: TODO
 * - **Semantics**: TODO
 *
 * \par Example
 * \snippet tml/xxx.cpp Code
 *
 */ // }}}
template <class Sequence>
  struct xxx
    : xxx_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence>
  { };
} // end namespace tml

#endif /* TML_XXX_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
