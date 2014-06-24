// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/aux_/preprocessor/arguments.hpp

/** // doc: tml/aux_/preprocessor/arguments.hpp {{{
 * \file tml/aux_/preprocessor/arguments.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_AUX_PREPROCESSOR_ARGUMENTS_HPP
#define TML_AUX_PREPROCESSOR_ARGUMENTS_HPP

#include <boost/preprocessor/repetition/repeat.hpp>
#include <boost/preprocessor/repetition/enum.hpp>

#define TML_PP_ARG_N(z, n, prefix) prefix ## n
#define TML_PP_COMMA_ARG_N(z, n, prefix) , TML_PP_ARG_N(z, n, prefix)
#define TML_PP_ARG_N_COMMA(z, n, prefix) TML_PP_ARG_N(z, n, prefix),

#define TML_PP_ARG_ENUM(n, prefix) BOOST_PP_ENUM(n, TML_PP_ARG_N, prefix)
#define TML_PP_ARG_PREPEND_ENUM(arg0, n, prefix) arg0 BOOST_PP_REPEAT(n, TML_PP_COMMA_ARG_N, prefix)
#define TML_PP_ARG_ENUM_APPEND(n, prefix, argn) BOOST_PP_REPEAT(n, TML_PP_ARG_N_COMMA, prefix) argn

#endif /* TML_AUX_PREPROCESSOR_ARGUMENTS_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
