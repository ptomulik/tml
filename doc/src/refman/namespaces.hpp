// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml {{{
 * \brief Main namespace for the entire library.
 */ // }}}
namespace tml {
/** // doc: detail {{{
 * \brief Implementation details for tml operations.
 */ // }}}
namespace detail {
} // end namespace tml::detail
/** // doc: variadic {{{
 * \brief Support for metafunctions operating on variadic templates (sequences).
 *
 *  Most of the templates defined here support operations on sequences defined
 *  in \ref tml. They usually accept a bare type packs as an argument which
 *  results from "unpacking" a sequence, variadic template class or such.
 *
 *  In other words, if we have ``tml::sort<class T>`` then its specialization 
 *  for ``T``'s being variadic templates will be supported by 
 *  ``tml::variadic::sort<class ... Types>``.
 */ // }}}
namespace variadic {
/** // doc: variadic {{{
 * \brief Implementation details for tml::variadic operations.
 */ // }}}
namespace detail {
} // end namespace tml::variadic::detail
} // end namespace tml::variadic
} // end namespace tml

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
