#if !BOOST_PP_IS_ITERATING

# ifndef TML_VARIADIC_AUX_REMOVE_HPP
# define TML_VARIADIC_AUX_REMOVE_HPP

#   include <tml/limits/variadic.hpp>
#   include <tml/apply.hpp>
#   include <boost/preprocessor/iteration/iterate.hpp>
#   include <boost/preprocessor/repetition/enum_params.hpp>
#   include <boost/preprocessor/repetition/enum_trailing_params.hpp>
#   include <boost/preprocessor/arithmetic/inc.hpp>
#   include <boost/preprocessor/cat.hpp>

#   define BOOST_PP_ITERATION_LIMITS (0,(TML_LIMIT_VARIADIC_SIZE-1))
#   define BOOST_PP_FILENAME_1 <tml/variadic/aux_/remove.hpp>
#   include BOOST_PP_ITERATE()

# endif // TML_VARIADIC_AUX_REMOVE_HPP

#else // BOOST_PP_IS_ITERATING

namespace tml { namespace variadic { namespace detail {
template<class F>
  struct remove_impl<F , BOOST_PP_ITERATION()>
  {
    template <BOOST_PP_ENUM_PARAMS(BOOST_PP_INC(BOOST_PP_ITERATION()), class A), class... Args>
      struct apply
        : tml::apply<F BOOST_PP_ENUM_TRAILING_PARAMS(BOOST_PP_ITERATION(), A), Args...>
      { };
  };
} } } // end namespace tml::variadic

#endif // BOOST_PP_IS_ITERATING
