#if !BOOST_PP_IS_ITERATING

# ifndef TML_VARIADIC_AUX_POP_BACK_HPP
# define TML_VARIADIC_AUX_POP_BACK_HPP

#   include <tml/limits/variadic.hpp>
#   include <tml/apply.hpp>
#   include <boost/preprocessor/iteration/iterate.hpp>
#   include <boost/preprocessor/repetition/enum_params.hpp>
#   include <boost/preprocessor/repetition/enum_trailing_params.hpp>
#   include <boost/preprocessor/arithmetic/dec.hpp>

#   define BOOST_PP_ITERATION_LIMITS (1,TML_LIMIT_VARIADIC_SIZE)
#   define BOOST_PP_FILENAME_1 <tml/variadic/aux_/pop_back.hpp>
#   include BOOST_PP_ITERATE()

# endif // TML_VARIADIC_AUX_POP_BACK_HPP

#else // BOOST_PP_IS_ITERATING

namespace tml { namespace variadic {
template <class F>
  template<BOOST_PP_ENUM_PARAMS(BOOST_PP_ITERATION(), class A)>
    struct pop_back<F>::apply<BOOST_PP_ENUM_PARAMS(BOOST_PP_ITERATION(), A)>
      : tml::apply<F BOOST_PP_ENUM_TRAILING_PARAMS(BOOST_PP_DEC(BOOST_PP_ITERATION()), A)>
    { };
} } // end namespace tml::variadic

#endif // BOOST_PP_IS_ITERATING
