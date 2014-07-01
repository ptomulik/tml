#if !BOOST_PP_IS_ITERATING

# ifndef TML_VARIADIC_AUX_BACK_HPP
# define TML_VARIADIC_AUX_BACK_HPP

#   include <tml/limits/variadic.hpp>
#   include <tml/ref.hpp>
#   include <boost/preprocessor/iteration/iterate.hpp>
#   include <boost/preprocessor/repetition/enum_params.hpp>
#   include <boost/preprocessor/arithmetic/dec.hpp>
#   include <boost/preprocessor/cat.hpp>

#   define BOOST_PP_ITERATION_LIMITS (1,TML_LIMIT_VARIADIC_SIZE)
#   define BOOST_PP_FILENAME_1 <tml/variadic/aux_/back.hpp>
#   include BOOST_PP_ITERATE()

# endif // TML_VARIADIC_AUX_BACK_HPP

#else // BOOST_PP_IS_ITERATING

namespace tml { namespace variadic {
template <BOOST_PP_ENUM_PARAMS(BOOST_PP_ITERATION(), class A)>
  struct back::apply<BOOST_PP_ENUM_PARAMS(BOOST_PP_ITERATION(), A)>
    : ref<BOOST_PP_CAT(A,BOOST_PP_DEC(BOOST_PP_ITERATION()))>
  { };
} } // end namespace tml::variadic

#endif // BOOST_PP_IS_ITERATING
