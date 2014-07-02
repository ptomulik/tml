// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/integral_c/aux_/or.hpp

/** // doc: tml/integral_c/aux_/or.hpp {{{
 * \file tml/integral_c/aux_/or.hpp
 * \todo Write documentation
 */ // }}}
# ifndef TML_INTEGRAL_C_AUX_OR_HPP
# define TML_INTEGRAL_C_AUX_OR_HPP

#define AUX862492_OP ||
#define AUX862492_OP_NAME or_
#define AUX862492_OP_IMPL_NAME or_impl
#define AUX862492_OP_FWD_HEADER <tml/or_fwd.hpp>
#define AUX862492_OP_VALUE_TYPE bool
#define AUX862492_OP_ARG_VALUE(arg) arg::type::value

#include <tml/integral_c/aux_/num_op.hpp>

#endif /* TML_INTEGRAL_C_AUX_OR_HPP */

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
