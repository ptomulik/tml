// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
// 
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#define BOOST_TEST_MODULE test_tml_as_sequence
#include <boost/test/unit_test.hpp>

#include <tml/as_sequence.hpp>
#include <boost/mpl/list.hpp>
#include <type_traits>

template <class... >  struct seq;
struct seq0;
template <class> struct seq1;
template <class, class> struct seq2;

struct X {};  // complete type
struct Y;     // incomplete type
template <class...> struct V {};
template <class...> struct Z {};

using namespace tml;

BOOST_AUTO_TEST_CASE(variadic_sequence0)
{
  BOOST_CHECK((std::is_same<as_sequence<seq<> >::type, sequence<> >::value));
}

typedef boost::mpl::list<
  bool
, int
, char
, float
, X
, Z<>
, Z<X>
, Z<X,int>
> complete_types;
// Variadic, homogeneous sequences of complete types
BOOST_AUTO_TEST_CASE_TEMPLATE(variadic_sequence1, T, complete_types)
{
  BOOST_CHECK((std::is_same<typename as_sequence<seq<T> >::type, sequence<T> >::value));
  BOOST_CHECK((std::is_same<typename as_sequence<seq<T,T> >::type, sequence<T,T> >::value));
  BOOST_CHECK((std::is_same<typename as_sequence<seq<T,T,T> >::type, sequence<T,T,T> >::value));
}

// Variadic, homogeneous sequences of incomplete type
BOOST_AUTO_TEST_CASE(variadic_sequence2)
{
  BOOST_CHECK((std::is_same<as_sequence<seq<Y> >::type, sequence<Y> >::value));
  BOOST_CHECK((std::is_same<as_sequence<seq<Y,Y> >::type, sequence<Y,Y> >::value));
  BOOST_CHECK((std::is_same<as_sequence<seq<Y,Y,Y> >::type, sequence<Y,Y,Y> >::value));
}

namespace tml {
namespace detail {
  template<class... Types>
    struct as_sequence_impl<V<Types...> > { typedef Z<Types...> type; };
} // namespace detail
} // namespace tml

// Variadic, heterogeneous, sequence with customized implementation of
// the as_sequence<>
BOOST_AUTO_TEST_CASE(variadic_sequence3)
{
  BOOST_CHECK((std::is_same<as_sequence<V<Y> >::type, Z<Y> >::value));
  BOOST_CHECK((std::is_same<as_sequence<V<Y,int> >::type, Z<Y,int> >::value));
  BOOST_CHECK((std::is_same<as_sequence<V<float,Y,char> >::type, Z<float,Y,char> >::value));
}

namespace tml {
namespace detail {
  template<>
    struct as_sequence_impl<seq0> { typedef Z<> type; };
  template<class T>
    struct as_sequence_impl<seq1<T> > { typedef Z<T> type; };
  template<class T1, class T2>
    struct as_sequence_impl<seq2<T1,T2> > { typedef Z<T1,T2> type; };
} // namespace detail
} // namespace tml

// Fixed-size, empty sequence (non-template struct)
BOOST_AUTO_TEST_CASE_TEMPLATE(fixed_sequence0, T, complete_types)
{
  BOOST_CHECK((std::is_same<typename as_sequence<seq0>::type, Z<> >::value));
}

// Fixed-size, homogeneous sequences of complete types
BOOST_AUTO_TEST_CASE_TEMPLATE(fixed_sequence1, T, complete_types)
{
  BOOST_CHECK((std::is_same<typename as_sequence<seq1<T> >::type, Z<T> >::value));
  BOOST_CHECK((std::is_same<typename as_sequence<seq2<T,T> >::type, Z<T,T> >::value));
}
