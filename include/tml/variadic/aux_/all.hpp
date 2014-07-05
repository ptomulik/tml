#if !BOOST_PP_IS_ITERATING

# ifndef TML_VARIADIC_AUX_ALL_HPP
# define TML_VARIADIC_AUX_ALL_HPP

#   include <tml/limits/variadic.hpp>
#   include <tml/ref.hpp>
#   include <boost/preprocessor/iteration/iterate.hpp>
#   include <boost/preprocessor/repetition/enum.hpp>

#   define AUX186518_TEXT(z, n, text) text
#   define BOOST_PP_ITERATION_LIMITS (1,TML_LIMIT_VARIADIC_SIZE)
#   define BOOST_PP_FILENAME_1 <tml/variadic/aux_/all.hpp>
#   include BOOST_PP_ITERATE()
#   undef AUX186518_TEXT

# endif // TML_VARIADIC_AUX_ALL_HPP

#else // BOOST_PP_IS_ITERATING

namespace tml { namespace variadic { namespace detail {
template<>
  struct all_impl<BOOST_PP_ENUM(BOOST_PP_ITERATION(), AUX186518_TEXT, true)>
    : true_
  { };
} } } // end namespace tml::variadic::detail

#endif // BOOST_PP_IS_ITERATING
