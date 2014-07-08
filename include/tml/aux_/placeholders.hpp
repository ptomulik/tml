// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#if !BOOST_PP_IS_ITERATING

# ifndef TML_AUX_PLACEHOLDERS_HPP
# define TML_AUX_PLACEHOLDERS_HPP

#   include <tml/limits/arity.hpp>
#   include <boost/preprocessor/iteration/iterate.hpp>
#   include <boost/preprocessor/cat.hpp>

#   define BOOST_PP_ITERATION_LIMITS (1,TML_LIMIT_METAFUNCTION_ARITY)
#   define BOOST_PP_FILENAME_1 <tml/aux_/placeholders.hpp>
#   include BOOST_PP_ITERATE()

# endif // TML_AUX_PLACEHOLDERS_HPP

#else // BOOST_PP_IS_ITERATING

namespace tml { namespace placeholders { typedef arg<BOOST_PP_ITERATION()> BOOST_PP_CAT(_,BOOST_PP_ITERATION()); } } // end namespace tml::placeholders
namespace tml { using placeholders::BOOST_PP_CAT(_,BOOST_PP_ITERATION()); } // end namespace tml


#endif // BOOST_PP_IS_ITERATING
