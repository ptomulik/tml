// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/integral_c/aux_/num_op.hpp

/** // doc: tml/integral_c/aux_/num_op.hpp {{{
 * \file tml/integral_c/aux_/num_op.hpp
 * \todo Write documentation
 */ // }}}
#if !BOOST_PP_IS_ITERATING

# include <tml/integral_c_tag.hpp>
# include <tml/integral_c.hpp>

# include <tml/limits/variadic.hpp>
# include <boost/preprocessor/iteration/iterate.hpp>
# include <boost/preprocessor/repetition/enum.hpp>
# include <boost/preprocessor/repetition/enum_params.hpp>
# include <boost/preprocessor/repetition/repeat.hpp>
# include <boost/preprocessor/control/if.hpp>
# include <boost/preprocessor/comparison/greater.hpp>
# include <boost/preprocessor/cat.hpp>

# ifndef AUX862492_OP_FWD_HEADER
#   define AUX862492_OP_FWD_HEADER <tml/BOOST_PP_CAT(AUX862492_OP_NAME,_fwd).hpp>
# endif

# include AUX862492_OP_FWD_HEADER

# ifndef AUX862492_OP_ARITY_MIN
#   define AUX862492_OP_ARITY_MIN 2
# endif
# ifndef AUX862492_OP_ARITY_MAX
#   define AUX862492_OP_ARITY_MAX (TML_LIMIT_VARIADIC_SIZE-1)
# endif
# ifndef AUX862492_OP_IMPL_NAME
#   define AUX862492_OP_IMPL_NAME BOOST_PP_CAT(AUX862492_OP_NAME,_impl)
# endif

# define TML_PP_SAME(z, n, data) data
# define AUX862492_OP_DO(z, n, data) BOOST_PP_IF(BOOST_PP_GREATER(n,0),AUX862492_OP,) data##n::value

# define BOOST_PP_ITERATION_LIMITS (AUX862492_OP_ARITY_MIN,AUX862492_OP_ARITY_MAX)
# define BOOST_PP_FILENAME_1 <tml/integral_c/aux_/num_op.hpp>
# include BOOST_PP_ITERATE()

# undef TML_PP_SAME
# undef AUX862492_OP_DO
# undef TML_PP

# ifdef AUX862492_OP_FWD_HEADER
#   undef AUX862492_OP_FWD_HEADER
# endif
# ifdef AUX862492_OP
#   undef AUX862492_OP
# endif
# ifdef AUX862492_OP_ARITY_MIN
#   undef AUX862492_OP_ARITY_MIN
# endif
# ifdef AUX862492_OP_ARITY_MAX
#   undef AUX862492_OP_ARITY_MAX
# endif
# ifdef AUX862492_OP_NAME
#   undef AUX862492_OP_NAME
# endif
# ifdef AUX862492_OP_IMPL_NAME
#   undef AUX862492_OP_IMPL_NAME
# endif

#else /* BOOST_PP_IS_ITERATING */

namespace tml {
template <>
  struct AUX862492_OP_IMPL_NAME<BOOST_PP_ENUM(BOOST_PP_ITERATION(),TML_PP_SAME,integral_c_tag)>
  {
    template<BOOST_PP_ENUM_PARAMS(BOOST_PP_ITERATION(),class T)>
      struct apply
        : integral_c<
            decltype(BOOST_PP_REPEAT(BOOST_PP_ITERATION(),AUX862492_OP_DO,T))
          , (BOOST_PP_REPEAT(BOOST_PP_ITERATION(),AUX862492_OP_DO,T))
          >
      { };
  };
} // end namespace tml


#endif /* BOOST_PP_IS_ITERATING */

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
