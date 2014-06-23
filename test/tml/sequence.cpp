// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
// 
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#define BOOST_TEST_MODULE test_tml_unit
#include <boost/test/unit_test.hpp>

#include <tml/sequence.hpp>
#include <type_traits>

using namespace tml;

struct seq_tag;
template <class... Ts>
  struct seq
  {
  };
namespace tml { namespace detail {
template <class... Ts>
  struct sequence_impl<seq_tag,Ts...>
  {
    typedef seq<Ts...> type;
  };
} } // end namesapce tml::detail

// Heterogenous sequences
BOOST_AUTO_TEST_CASE(type1)
{
  BOOST_CHECK((std::is_same<sequence<seq_tag>::type, seq<> >::value));
  BOOST_CHECK((std::is_same<sequence<seq_tag,int>::type, seq<int> >::value));
  BOOST_CHECK((std::is_same<sequence<seq_tag,void,char>::type, seq<void,char> >::value));
}

// Heterogenous sequences
BOOST_AUTO_TEST_CASE(sequence_type1)
{
  BOOST_CHECK((std::is_same<sequence<seq_tag>::sequence_type, sequence<seq_tag> >::value));
  BOOST_CHECK((std::is_same<sequence<seq_tag,int>::sequence_type, sequence<seq_tag,int> >::value));
  BOOST_CHECK((std::is_same<sequence<seq_tag,void,char>::sequence_type, sequence<seq_tag,void,char> >::value));
}
