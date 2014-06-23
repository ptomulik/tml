// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
// 
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#define BOOST_TEST_MODULE test_tml_type_sequence
#include <boost/test/unit_test.hpp>

#include <tml/type_sequence.hpp>
#include <tml/sequence_tag.hpp>
#include <tml/as_sequence.hpp>
#include <tml/sequence.hpp>

#include <type_traits>

struct X {};  // complete type
struct Y;     // incomplete type

using namespace tml;

// Should be a class
BOOST_AUTO_TEST_CASE(is_class1)
{
  BOOST_CHECK((std::is_class<type_sequence<> >::value));
  BOOST_CHECK((std::is_class<type_sequence<int,Y> >::value));
  BOOST_CHECK((std::is_class<type_sequence<int,X,Y> >::value));
  BOOST_CHECK((std::is_class<type_sequence<int,char,X,Y> >::value));
  BOOST_CHECK((std::is_class<type_sequence<int,char,double,X,Y> >::value));
}

// sequence_tag<type_sequence<...> >::type
BOOST_AUTO_TEST_CASE(sequence_tag0)
{
  BOOST_CHECK((std::is_same<sequence_tag<type_sequence<> >::type, type_sequence_tag>::value));
  BOOST_CHECK((std::is_same<sequence_tag<type_sequence<int> >::type, type_sequence_tag>::value));
  BOOST_CHECK((std::is_same<sequence_tag<type_sequence<void,int> >::type, type_sequence_tag>::value));
}

// sequence<type_sequence_tag, T1, ..., Tn>::type
BOOST_AUTO_TEST_CASE(generate1)
{
  BOOST_CHECK((std::is_same< sequence<type_sequence_tag>::type, type_sequence<> >::value));
  BOOST_CHECK((std::is_same< sequence<type_sequence_tag,int,Y>::type, type_sequence<int,Y> >::value));
  BOOST_CHECK((std::is_same< sequence<type_sequence_tag,int,X,Y>::type, type_sequence<int,X,Y> >::value));
  BOOST_CHECK((std::is_same< sequence<type_sequence_tag,int,char,double,X,Y>::type, type_sequence<int,char,double,X,Y> >::value));
}

// as_sequence<type_sequence<T1, ..., Tn> >::type
BOOST_AUTO_TEST_CASE(as_sequence1)
{
  BOOST_CHECK((std::is_same< sequence<type_sequence_tag>, as_sequence<type_sequence<> >::type>::value));
  BOOST_CHECK((std::is_same< sequence<type_sequence_tag,int>, as_sequence<type_sequence<int> >::type>::value));
  BOOST_CHECK((std::is_same< sequence<type_sequence_tag,int,X,Y>, as_sequence<type_sequence<int,X,Y> >::type >::value));
}

BOOST_AUTO_TEST_CASE(type1)
{
  BOOST_CHECK((std::is_same< type_sequence<>::type, type_sequence<> >::value));
  BOOST_CHECK((std::is_same< type_sequence<int>::type, type_sequence<int> >::value));
  BOOST_CHECK((std::is_same< type_sequence<int,X,Y>::type, type_sequence<int,X,Y> >::value));
}
