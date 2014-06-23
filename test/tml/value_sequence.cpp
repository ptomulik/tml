// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
// 
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#define BOOST_TEST_MODULE test_tml_value_sequence
#include <boost/test/unit_test.hpp>

#include <tml/value_sequence.hpp>
#include <tml/sequence_tag.hpp>
#include <tml/as_sequence.hpp>
#include <tml/sequence.hpp>
#include <tml/value.hpp>

#include <type_traits>

struct X {};  // complete type
struct Y;     // incomplete type

using namespace tml;

// Should be a class
BOOST_AUTO_TEST_CASE(is_class1)
{
  BOOST_CHECK((std::is_class<value_sequence<int> >::value));
  BOOST_CHECK((std::is_class<value_sequence<int,1> >::value));
  BOOST_CHECK((std::is_class<value_sequence<char,'a','b'> >::value));
}

// sequence_tag<value_sequence<...> >::type
BOOST_AUTO_TEST_CASE(sequence_tag0)
{
  BOOST_CHECK((std::is_same<sequence_tag<value_sequence<int> >::type, value_sequence_tag<int> >::value));
  BOOST_CHECK((std::is_same<sequence_tag<value_sequence<int,1> >::type, value_sequence_tag<int> >::value));
  BOOST_CHECK((std::is_same<sequence_tag<value_sequence<char,'a','b'> >::type, value_sequence_tag<char> >::value));
}

// sequence<value_sequence_tag, T1, ..., Tn>::type
BOOST_AUTO_TEST_CASE(generate1)
{
  BOOST_CHECK((std::is_same< sequence<value_sequence_tag<int> >::type, value_sequence<int> >::value));
  BOOST_CHECK((std::is_same< sequence<value_sequence_tag<int>,value_<int,1> >::type, value_sequence<int,1> >::value));
  BOOST_CHECK((std::is_same< sequence<value_sequence_tag<char>,value_<char,'a'>,value_<char,'b'> >::type, value_sequence<char,'a','b'> >::value));
}

// as_sequence<value_sequence<T, v1, ..., vn> >::type
BOOST_AUTO_TEST_CASE(as_sequence1)
{
  BOOST_CHECK((std::is_same< sequence<value_sequence_tag<int> >, as_sequence<value_sequence<int> >::type>::value));
  BOOST_CHECK((std::is_same< sequence<value_sequence_tag<int>,value_<int,1> >, as_sequence<value_sequence<int,1> >::type>::value));
  BOOST_CHECK((std::is_same< sequence<value_sequence_tag<char>,value_<char,'a'>,value_<char,'b'> >, as_sequence<value_sequence<char,'a','b'> >::type >::value));
}

BOOST_AUTO_TEST_CASE(type1)
{
  BOOST_CHECK((std::is_same< value_sequence<int>::type, value_sequence<int> >::value));
  BOOST_CHECK((std::is_same< value_sequence<char,'a','b'>::type, value_sequence<char,'a','b'> >::value));
}

BOOST_AUTO_TEST_CASE(value_type1)
{
  BOOST_CHECK((std::is_same< value_sequence<int>::value_type, int>::value));
  BOOST_CHECK((std::is_same< value_sequence<char,'a','b'>::value_type, char>::value));
}
