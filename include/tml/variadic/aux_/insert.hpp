#if !BOOST_PP_IS_ITERATING

# ifndef TML_VARIADIC_AUX_INSERT_HPP
# define TML_VARIADIC_AUX_INSERT_HPP

#   include <tml/limits/variadic.hpp>
#   include <tml/apply.hpp>
#   include <boost/preprocessor/iteration/iterate.hpp>
#   include <boost/preprocessor/repetition/enum_params.hpp>
#   include <boost/preprocessor/repetition/enum_trailing_params.hpp>
#   include <boost/preprocessor/punctuation/comma_if.hpp>
#   include <boost/preprocessor/comparison/greater.hpp>

#   define BOOST_PP_ITERATION_LIMITS (0,TML_LIMIT_VARIADIC_SIZE)
#   define BOOST_PP_FILENAME_1 <tml/variadic/aux_/insert.hpp>
#   include BOOST_PP_ITERATE()

# endif // TML_VARIADIC_AUX_INSERT_HPP

#else // BOOST_PP_IS_ITERATING

namespace tml { namespace variadic { namespace detail {
template <class F, class T>
  struct insert_impl<F,BOOST_PP_ITERATION(),T>
  {
    template<BOOST_PP_ENUM_PARAMS(BOOST_PP_ITERATION(), class A) BOOST_PP_COMMA_IF(BOOST_PP_GREATER(BOOST_PP_ITERATION(),0)) class... Tail >
      struct apply
        : tml::apply<F BOOST_PP_ENUM_TRAILING_PARAMS(BOOST_PP_ITERATION(),A), T , Tail...>
      { };
  };
} } } // end namespace tml::variadic::detail

#endif // BOOST_PP_IS_ITERATING
