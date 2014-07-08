// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/aux_/num_op.hpp

/** // doc: tml/aux_/num_op.hpp {{{
 * \file tml/aux_/num_op.hpp
 * \brief Preprocessor iteration used to implement several numerical operations
 */ // }}}
#include <tml/limits/variadic.hpp>
#include <boost/preprocessor/iteration/iterate.hpp>
#include <boost/preprocessor/cat.hpp>

#ifndef AUX862492_OP_FWD_HEADER
# define AUX862492_OP_FWD_HEADER <tml/BOOST_PP_CAT(AUX862492_OP_NAME,_fwd).hpp>
#endif

#include AUX862492_OP_FWD_HEADER

#ifndef AUX862492_OP
# error "definition of AUX862492_OP is missing"
#endif
#ifndef AUX862492_OP_NAME
# error "definition of AUX862492_OP_NAME is missing"
#endif
#ifndef AUX862492_OP_IMPL_NAME
# define AUX862492_OP_IMPL_NAME BOOST_PP_CAT(AUX862492_OP_NAME,_impl)
#endif
#ifndef AUX862492_OP_ARITY_MIN
# define AUX862492_OP_ARITY_MIN 2
#endif
#ifndef AUX862492_OP_ARITY_MAX
# define AUX862492_OP_ARITY_MAX (TML_LIMIT_VARIADIC_SIZE-1)
#endif
#ifndef AUX862492_OP_ARG_VALUE
# define AUX862492_OP_ARG_VALUE(arg) arg::value
#endif

namespace tml {
#if AUX862492_OP_NOT_VARIADIC
# if ((AUX862492_OP_ARITY_MIN == 2) && (AUX862492_OP_ARITY_MAX == 2))
template <class Tag1, class Tag2>
  template <class T1, class T2>
    struct AUX862492_OP_IMPL_NAME<Tag1,Tag2>::apply
      : AUX862492_OP_NAME<
          typename aux::cast1st<Tag1,Tag2,T1>::type
        , typename aux::cast2nd<Tag1,Tag2,T2>::type
        >
    { };
# endif
#else
# if (AUX862492_OP_ARITY_MAX >= 2)
template <class Tag>
  struct AUX862492_OP_IMPL_NAME<Tag,Tag>
  {
    template <class T1, class T2>
      struct apply; // incomplete, intentionally!
  };
template <class Tag1, class Tag2>
  struct AUX862492_OP_IMPL_NAME<Tag1,Tag2>
  {
    template <class T1, class T2>
      struct apply
        : AUX862492_OP_NAME<
            typename aux::cast1st<Tag1,Tag2,T1>::type
          , typename aux::cast2nd<Tag1,Tag2,T2>::type
          >
      { };
  };
# endif
# if (AUX862492_OP_ARITY_MAX > 2)
template <class Tag1, class Tag2, class... Tags>
  template <class T1, class T2, class... Ts>
    struct AUX862492_OP_IMPL_NAME<Tag1,Tag2,Tags...>::apply
      : AUX862492_OP_NAME<typename AUX862492_OP_NAME<T1,T2>::type, Ts...>
    { };
# endif
#endif
} // end namespace tml

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
