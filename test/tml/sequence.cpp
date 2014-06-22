// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
// 
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#define BOOST_TEST_MODULE test_tml_unit
#include <boost/test/unit_test.hpp>

#include <tml/sequence.hpp>

#include <type_traits>
#include <boost/mpl/list.hpp>

struct X {};
struct Y; // incomplete type

// test for these types
typedef boost::mpl::list<
  bool
, char
, int
, double
, X
> test_types;

// Empty sequence
BOOST_AUTO_TEST_CASE(is_class0)
{
  BOOST_CHECK((std::is_class<tml::sequence<> >::value));
}

// Homogenous sequences for complete types
BOOST_AUTO_TEST_CASE_TEMPLATE(is_class1, T, test_types)
{
  BOOST_CHECK((std::is_class<tml::sequence<T> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<T,T> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<T,T,T> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<T,T,T,T> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<T,T,T,T,T> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<T,T,T,T,T,T> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<T,T,T,T,T,T,T> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<T,T,T,T,T,T,T,T> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<T,T,T,T,T,T,T,T,T> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<T,T,T,T,T,T,T,T,T,T> >::value));
}

// Homogenous sequence for an incomplete type
BOOST_AUTO_TEST_CASE(is_class2)
{
  BOOST_CHECK((std::is_class<tml::sequence<Y> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<Y,Y> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<Y,Y,Y> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<Y,Y,Y,Y> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<Y,Y,Y,Y,Y> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<Y,Y,Y,Y,Y,Y> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<Y,Y,Y,Y,Y,Y,Y> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<Y,Y,Y,Y,Y,Y,Y,Y> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<Y,Y,Y,Y,Y,Y,Y,Y,Y> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<Y,Y,Y,Y,Y,Y,Y,Y,Y,Y> >::value));
}

// Heterogenous sequences
BOOST_AUTO_TEST_CASE(is_class4)
{
  BOOST_CHECK((std::is_class<tml::sequence<int,Y> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<int,X,Y> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<int,char,X,Y> >::value));
  BOOST_CHECK((std::is_class<tml::sequence<int,char,double,X,Y> >::value));
}
