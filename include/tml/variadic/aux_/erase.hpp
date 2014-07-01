#if !BOOST_PP_IS_ITERATING

# ifndef TML_VARIADIC_AUX_ERASE_HPP
# define TML_VARIADIC_AUX_ERASE_HPP

#   include <tml/limits/variadic.hpp>
#   include <boost/preprocessor/iteration/iterate.hpp>
#   include <boost/preprocessor/repetition/enum_params.hpp>
#   include <boost/preprocessor/repetition/enum_trailing_params.hpp>
#   include <boost/preprocessor/punctuation/comma_if.hpp>
#   include <boost/preprocessor/comparison/greater.hpp>
#   include <tml/variadic/erase_front.hpp>
#   include <tml/variadic/join.hpp>

#   define BOOST_PP_ITERATION_LIMITS (0,TML_LIMIT_VARIADIC_SIZE)
#   define BOOST_PP_FILENAME_1 <tml/variadic/aux_/erase.hpp>
#   include BOOST_PP_ITERATE()

# endif // TML_VARIADIC_AUX_ERASE_HPP

#else // BOOST_PP_IS_ITERATING

namespace tml { namespace variadic { namespace detail {
template <class F, long Last>
  struct erase_impl<F , BOOST_PP_ITERATION(), Last>
  {
    template <BOOST_PP_ENUM_PARAMS(BOOST_PP_ITERATION(), class A) BOOST_PP_COMMA_IF(BOOST_PP_GREATER(BOOST_PP_ITERATION(),0)) class... Tail>
      struct apply
        : erase_front_impl<join<F BOOST_PP_ENUM_TRAILING_PARAMS(BOOST_PP_ITERATION(),A)>, (Last-BOOST_PP_ITERATION()) >
            ::template apply<Tail...>
      { };
  };
} } } // end namespace tml::variadic::detail

#endif // BOOST_PP_IS_ITERATING
