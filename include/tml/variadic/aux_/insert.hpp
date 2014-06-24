#if !BOOST_PP_IS_ITERATING

# ifndef TML_VARIADIC_AUX_INSERT_HPP
# define TML_VARIADIC_AUX_INSERT_HPP

#   include <tml/limits/variadic.hpp>
#   include <tml/apply.hpp>
#   include <tml/aux_/preprocessor/arguments.hpp>
#   include <boost/preprocessor/iteration/iterate.hpp>

#   define BOOST_PP_ITERATION_LIMITS (0,TML_LIMIT_VARIADIC_SIZE)
#   define BOOST_PP_FILENAME_1 <tml/variadic/aux_/insert.hpp>
#   include BOOST_PP_ITERATE()

# endif // TML_VARIADIC_AUX_INSERT_HPP

#else // BOOST_PP_IS_ITERATING

namespace tml { namespace variadic { namespace detail {
template <class F, class T>
  struct insert_impl<F,BOOST_PP_ITERATION(),T>
  {
    template<TML_PP_ARG_ENUM_APPEND(BOOST_PP_ITERATION(), class A, class... Tail) >
      struct apply
        : tml::apply<F,TML_PP_ARG_ENUM_APPEND(BOOST_PP_ITERATION(),A,T), Tail...>
      { };
  };
} } } // end namespace tml::variadic::detail

#endif // BOOST_PP_IS_ITERATING
