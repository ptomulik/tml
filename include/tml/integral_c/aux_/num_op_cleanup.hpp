// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/integral_c/aux_/num_op_cleanup.hpp

/** // doc: tml/integral_c/aux_/num_op_cleanup.hpp {{{
 * \file tml/integral_c/aux_/num_op_cleanup.hpp
 * \brief Deletes temporary macros used by tml/integral_c/aux_/num_op.hpp
 */ // }}}

# ifdef AUX862492_SAME
#   undef AUX862492_SAME
# endif
# ifdef AUX862492_OP_APPLY
#   undef AUX862492_OP_APPLY
# endif

# ifdef AUX862492_OP_FWD_HEADER
#   undef AUX862492_OP_FWD_HEADER
# endif
# ifdef AUX862492_OP
#   undef AUX862492_OP
# endif
# ifdef AUX862492_OP_NAME
#   undef AUX862492_OP_NAME
# endif
# ifdef AUX862492_OP_IMPL_NAME
#   undef AUX862492_OP_IMPL_NAME
# endif
# ifdef AUX862492_OP_ARITY_MIN
#   undef AUX862492_OP_ARITY_MIN
# endif
# ifdef AUX862492_OP_ARITY_MAX
#   undef AUX862492_OP_ARITY_MAX
# endif
# ifdef AUX862492_OP_VALUE_TYPE
#   undef AUX862492_OP_VALUE_TYPE
# endif

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
