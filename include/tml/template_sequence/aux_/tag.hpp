// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// tml/template_sequence/aux_/tag.hpp

/** // doc: tml/template_sequence/aux_/tag.hpp {{{
 * \file tml/template_sequence/aux_/tag.hpp
 * \todo Write documentation
 */ // }}}
#ifndef TML_TEMPLATE_SEQUENCE_AUX_TAG_HPP
#define TML_TEMPLATE_SEQUENCE_AUX_TAG_HPP

namespace tml { namespace aux {
/** // doc: template_sequence_tag {{{
 * \ingroup SeqMiscGroup
 * \struct template_sequence_tag
 * \brief Identifies \ref TemplateSeqConcept "Template Sequences"
 *
 * \par Description
 *
 * This tag is used to identify sequences implemented as \ref TemplateSeqConcept.
 */ // }}}
struct template_sequence_tag;
/** // doc: ts_iter_tag {{{
 * \ingroup SeqMiscGroup
 * \struct ts_iter_tag
 * \brief Identifies iterators for \ref TemplateSeqConcept "Template Sequences"
 *
 * \par Description
 *
 * This tag is used to identify iterators for sequences implemented as
 * \ref TemplateSeqConcept.
 */ // }}}
struct ts_iter_tag;
} } // end namespace tml::aux

#endif /* TML_TEMPLATE_SEQUENCE_AUX_TAG_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
