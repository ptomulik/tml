// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: tml/numeric_cast.cpp {{{
 * \file tml/numeric_cast.cpp
 * \example tml/numeric_cast.cpp
 * \brief Usage example for tml::numeric_cast
 */ // }}}

// [Code]
#include <tml/numeric_cast.hpp>
#include <tml/int.hpp>
#include <tml/integral_c.hpp>
#include <tml/integral_c_tag.hpp>
#include <tml/plus.hpp>

using namespace tml;

struct complex_tag : int_<10> {};
template< class Re, class Im> struct complex_
{
  typedef complex_tag numeric_tag;
  typedef complex_ type;
  typedef Re real;
  typedef Im imag;
};

template <class C> struct real : C::real { };
template <class C> struct imag : C::imag { };

namespace tml {
template <>
  struct numeric_cast<integral_c_tag, complex_tag>
  {
    template < class N >
      struct apply
        :complex_<N, integral_c< typename N::value_type, 0> >
      { };
  };
  
template <>
  struct plus_impl<complex_tag, complex_tag>
  {
    template < class N1, class N2 >
      struct apply
        : complex_<
            plus< typename N1::real, typename N2::real >
          , plus< typename N1::imag, typename N2::imag >
          >
      { };
  };
} // end namespace tml

typedef int_<2> i;
typedef complex_< int_<5>, int_<-1> > c1;
typedef complex_< int_<-5>, int_<1> > c2;

typedef plus<c1,i> r4;
static_assert(real<r4>::value == 7, "");
static_assert(imag<r4>::value == -1, "");

typedef plus<i,c2> r5;
static_assert(real<r5>::value == -3, "");
static_assert(imag<r5>::value ==  1, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
