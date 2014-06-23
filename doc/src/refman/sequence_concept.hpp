// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

namespace tml {
/**
 * \page SequenceConcept Sequence
 *
 * \par "Overview"
 *
 * A \ref SequenceConcept \c S is a type which represents a sequence of
 * *elements*. An *element* may be either a C++ type or a value.
 *
 * \par "Definitions"
 *
 * - ``S`` is a model of \ref SequenceConcept,
 * - ``Tag`` is a class identifying sequence generator for sequence ``S``,
 * - ``T1``, ..., ``Tn`` are types that represent sequence elements.
 *
 * \par "Valid expressions"
 *
 * |              Expression                                 |             Type                  |       Complexity        |
 * | ------------------------------------------------------- | --------------------------------- | ----------------------- |
 * | \ref sequence_tag "sequence_tag &lt;S&gt;::type"        | Tag                               | Unspecified             |
 * | \ref as_sequence "as_sequence &lt;S&gt;::type"          | sequence &lt;Tag, T1, ..., Tn&gt; | Unspecified             |
 * | \ref sequence "sequence &lt;Tag, T1, ..., Tn&gt;::type" | S                                 | Unspecified             |
 *
 * \par "Expression semantics"
 *
 * |              Expression                                 |                        Semantics                       |
 * | ------------------------------------------------------- | ------------------------------------------------------ |
 * | \ref sequence_tag "sequence_tag &lt;S&gt;::type"        | Returns the sequence tag for S                         |
 * | \ref as_sequence "as_sequence &lt;S&gt;::type"          | Returns the sequence generator for S                   |
 * | \ref sequence "sequence &lt;Tag, T1, ..., Tn&gt;::type" | Generates sequence from types T1, ..., Tn              |
 *
 * \par "Models"
 *
 * - \ref type_sequence
 * - \ref value_sequence
 *
 * \par "Remarks"
 *
 * - example of commonly used sequences include:
 *   - variadic sequences of types: ``template <class...> struct S``,
 *   - variadic sequences of values: ``template <class T, T...> struct S``,
 * - virtually any type may be adapted to be a model of \ref SequenceConcept,
 *   the concept is not limited to template classes.
 */
} // end namespace tml
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
