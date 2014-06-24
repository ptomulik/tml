// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/if.hpp

/** // doc: tml/if.hpp {{{
 * \file tml/if.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_IF_HPP
#define TML_IF_HPP

#include <tml/if_fwd.hpp>

namespace tml {
/** // doc: if_ {{{
 * \ingroup MetafunTypeSelGroup
 * \struct if_
 * \brief Returns one of its two arguments depending on a condition.
 *
 * \tparam C A selection condition. \ref IntConstConcept.
 * \tparam T1 Type to select when `C` is true. Any type.
 * \tparam T2  Type to select when `C` is not true. Any type.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class C
 *      , class T1
 *      , class T2
 *      >
 *  struct if_
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns one of its two arguments `T1`, `T2`, dependieng on the value `C`.
 *
 * \par Expression semantics
 *
 * For any \ref IntConstConcept `c` and arbitrary types `t1` and `t2`:
 * \code
 *  typedef if_<c,t1,t2>::type t;
 * \endcode
 *
 * - **Return type**: Any type.
 * - **Semantics**: If `c::value == true`, `t` is identical to `t1`;
 *   otherwise `t` is identical to `t2`.
 *
 * \par Example
 * \snippet tml/if.cpp Code
 */ // }}}
template <class C, class T1, class T2>
  struct if_
  {
  private:
    template<bool c, class TT1, class TT2>
      struct impl
      {
        typedef TT2 type;
      };
    template<class TT1, class TT2>
      struct impl<true,TT1,TT2>
      {
        typedef TT1 type;
      };
  public:
    typedef typename impl<static_cast<bool>(C::value),T1,T2>::type type;
  };
} // end namespace tml

#include <tml/bool.hpp>
namespace tml {
/** // doc: if_c {{{
 * \ingroup MetafunTypeSelGroup
 * \brief Returns one of its two arguments depending on a condition.
 *
 * \tparam c A selection condition. \ref IntConstConcept.
 * \tparam T1 Type to select when `C` is true. Any type.
 * \tparam T2  Type to select when `C` is not true. Any type.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        bool c
 *      , class T1
 *      , class T2
 *      >
 *  struct if_c
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns one of its two arguments `T1`, `T2`, dependieng on the value of
 * integral constant `c`. `if_c<c,t2,t2>::type` is a shortcut notation for
 * `if_<bool_<c>,t1,t2>::type`.
 *
 * \par Expression semantics
 *
 * For any \ref IntConstConcept `c` and arbitrary types `t1` and `t2`:
 * \code
 *  typedef if_c<c,t1,t2>::type t;
 * \endcode
 *
 * - **Return type**: Any type.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef if_<bool_<c>,t1,t2>::type t;
 *   \endcode
 *
 * \par Example
 * \snippet tml/if.cpp Code
 */ // }}}
template <bool c, class T1, class T2>
  using if_c = if_<bool_<c>,T1,T2>;
} // end namespace tml

#endif /* TML_IF_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
