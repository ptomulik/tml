// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/placeholders.hpp

/** // doc: tml/placeholders.hpp {{{
 * \file tml/placeholders.hpp
 * \brief Provides argument placeholders
 */ // }}}
#ifndef TML_PLACEHOLDERS_HPP
#define TML_PLACEHOLDERS_HPP

#include <tml/arg.hpp>

namespace tml { namespace placeholders {
typedef arg<-1> _;
} } // end namespace tml::placeholders

namespace tml {
using placeholders:: _;
} // end namespace tml

#include <tml/aux_/placeholders.hpp>

#endif /* TML_PLACEHOLDERS_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
