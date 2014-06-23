// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/value.hpp

/** // doc: tml/value.hpp {{{
 * \file tml/value.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_VALUE_HPP
#define TML_VALUE_HPP

#include <tml/fwd/value.hpp>

namespace tml {
/** // doc: value_ {{{
 * \struct value_
 * \brief Represents a value of a given type
 *
 * Used mainly to wrap value-elements of a sequence.
 *
 * \par Example
 * \snippet tml/value.cpp Code
 */ // }}}
 template <class T, T v> 
   struct value_
   {
     /// The wrapped value \c v
     static constexpr T value = v;
     /// The type \c T of the wrapped value \c v
     typedef T value_type;
     /// The type of this class, i.e. value_<T,v>
     typedef value_ type;
     /// Returns the value \c v at runtime
     constexpr operator value_type() const noexcept { return value; }
     /// Returns the value \c v at runtime
     constexpr value_type operator()() const noexcept { return value; }
   };
} // end namespace tml

#endif /* TML_VALUE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
