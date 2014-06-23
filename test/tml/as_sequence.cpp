// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
// 
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#define BOOST_TEST_MODULE test_tml_unpack
#include <boost/test/unit_test.hpp>

#include <tml/as_sequence.hpp>
#include <type_traits>

template <int I> using int_ = std::integral_constant<int,I>;
template <char C> using char_ = std::integral_constant<char,C>;

template <class Tag, class... Types> struct useq;

struct seq_tag;
template <class... Types>
  struct seq { typedef useq<seq_tag, Types...> sequence_type; };

struct seq0_tag;
struct seq0 { typedef useq<seq0_tag> sequence_type; };

struct seq1_tag;
template <class T>
  struct seq1 { typedef useq<seq1_tag, T> sequence_type; };

struct seq2_tag;
template <class T1, class T2>
  struct seq2 { typedef useq<seq2_tag, T1, T2> sequence_type; };

struct seq3_tag;
template <class...> struct seq3;
namespace tml { namespace detail {
  template<class... Types>
    struct as_sequence_impl<seq3<Types...> > { typedef useq<seq3_tag, Types...> type; };
} } // end namespace tml::detail

struct seq4_tag;
template <class x1, int x2, char x3>
  struct seq4 { typedef useq<seq4_tag, x1, int_<x2>, char_<x3> > sequence_type; };

struct X {};  // complete type
struct Y;     // incomplete type
template <class...> struct Z {};

using namespace tml;

BOOST_AUTO_TEST_CASE(variadic_template1)
{
  BOOST_CHECK((std::is_same<as_sequence<seq<> >::type, useq<seq_tag> >::value));
  BOOST_CHECK((std::is_same<as_sequence<seq3<Y> >::type, useq<seq3_tag, Y> >::value));
  BOOST_CHECK((std::is_same<as_sequence<seq3<Y,int> >::type, useq<seq3_tag,Y,int> >::value));
  BOOST_CHECK((std::is_same<as_sequence<seq3<float,Y,char> >::type, useq<seq3_tag,float,Y,char> >::value));
}

BOOST_AUTO_TEST_CASE(fixed_size_template1)
{
  BOOST_CHECK((std::is_same<as_sequence<seq0>::type, useq<seq0_tag> >::value));
  BOOST_CHECK((std::is_same<as_sequence<seq1<Y> >::type, useq<seq1_tag, Y> >::value));
  BOOST_CHECK((std::is_same<as_sequence<seq2<Y,X> >::type, useq<seq2_tag, Y,X> >::value));
}

BOOST_AUTO_TEST_CASE(mixed_element_fixed_size_template1)
{
  BOOST_CHECK((std::is_same<as_sequence<seq4<void,3,'a'> >::type, useq<seq4_tag, void, int_<3>, char_<'a'> > >::value));
}
