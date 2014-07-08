// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/aux_/equal_to.hpp

/** // doc: tml/aux_/equal_to.hpp {{{
 * \file tml/aux_/equal_to.hpp
 * \brief Implements \ref tml::equal_to
 */ // }}}
# ifndef TML_AUX_EQUAL_TO_HPP
# define TML_AUX_EQUAL_TO_HPP

#include <tml/aux_/num_op_includes.hpp>
#include <tml/integral_c/aux_/num_op_includes.hpp>

#define AUX862492_OP ==
#define AUX862492_OP_NAME equal_to
#define AUX862492_OP_ARITY_MIN 2
#define AUX862492_OP_ARITY_MAX 2
#define AUX862492_OP_VALUE_TYPE bool
#define AUX862492_OP_NOT_VARIADIC 1

#include <tml/aux_/num_op.hpp>
#include <tml/integral_c/aux_/num_op.hpp>

#include <tml/aux_/num_op_cleanup.hpp>
#include <tml/integral_c/aux_/num_op_cleanup.hpp>

#endif /* TML_AUX_EQUAL_TO_HPP */

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
