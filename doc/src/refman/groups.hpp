// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
// 
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

namespace tml {
/**
 * \defgroup SeqGroup Sequences
 *
 * Compile-time sequences of types are one of the basic concepts of C++
 * template metaprogramming. Differences in types of objects being manipulated
 * is the most common point of variability of similar, but not identical
 * designs, and these are a direct target for metaprogramming. Templates were
 * originally designed to address this exact problem. However, without
 * predefined mechanisms for representing and manipulating sequences of types
 * as opposed to standalone template parameters, high-level template
 * metaprogramming is severely limited in its capabitilies.
 * 
 * The TML recognizes the importance of type sequences as a fundamental
 * building block of many higher-level metaprogramming designs by providing us
 * with a conceptual framework for formal reasoning and understanding of
 * sequence properties, guarantees and characteristics, as well as a
 * first-class implementation of that framework &mdash; a wealth of tools for
 * concise, convenient, conceptually precise and efficient sequence
 * manipulation.
 *
 * @{
 */

/**
 * \defgroup SeqConceptsGroup Concepts
 *
 * - \ref ForwardSeqConcept
 * - \ref BidirSeqConcept
 * - \ref RandomSeqConcept
 * - \ref ExtensibleSeqConcept
 * - \ref FrontExtensibleSeqConcept
 * - \ref BackExtensibleSeqConcept
 * - \ref VariadicSeqConcept
 * - \ref TemplateSeqConcept
 * - \ref VariadicTemplateSeqConcept
 */

/**
 * \defgroup SeqClassGroup Classes
 */

/**
 * \defgroup SeqViewsGroup Views
 */

/**
 * \defgroup SeqIntrGroup Intrinsic Metafunctions
 * @{
 */

/**
 * \defgroup SeqIntrVariadicGroup Variadic Metafunction Classes
 * 
 * Instead of operating on sequences these \ref MetafunClassConcept
 * "Metafunction Classes" take sequence elements as arguments.
 */

/** @} */

/**
 * \defgroup SeqMiscGroup Miscellaneous
 */

/** @} */

/**
 * \defgroup IterGroup Iterators
 *
 * Iterators are generic means of addressing a particular element or a range of
 * sequential elements in a sequence. They are also a mechanism that makes it
 * possible to decouple algorithms from concrete compile-time sequence
 * implementations. Under the hood, all TML sequence algorithms are implemented
 * in terms of iterators. In particular, that means that they will work on any
 * custom compile-time sequence, given that the appropriate iterator inteface
 * is provided.
 *
 * @{
 */

/**
 * \defgroup IterMetafunGroup Iterator Metafunctions
 */

/** @} */

/**
 * \defgroup AlgoGroup Algorithms
 *
 * The TML provides a broad range of fundamental algorithms aimed to satisfy
 * the majority of sequential compile-time data processing needs. The
 * algorithms include compile-time counterparts of many of the STL algorithms,
 * iteration algorithms borrowed from functional programming languages, and
 * more.
 * 
 * Unlike the algorithms in the C++ Standard Library, which operate on implict
 * iterator ranges, the majority of TML counterparts take and return sequences.
 * This derivation is not dictated by the functional nature of C++ compile-time
 * computations per se, but rather by a desire to improve general usability of
 * the library, making programming with compile-time data structures as
 * enjoyable as possible.
 * 
 * In the spirit of the STL, TML algorithms are generic, meaning that they are
 * not tied to particular sequence class implementations, and can operate on a
 * wide range of arguments as long as they satisfy the documented requirements.
 * The requirements are formulated in terms of concepts. Under the hood,
 * algorithms are decoupled from concrete sequence implementations by operating
 * on Iterators.
 * 
 * All TML algorithms can be sorted into three major categories: iteration
 * algorithms, querying algorithms, and transformation algorithms. The
 * transformation algorithms introduce an associated Inserter concept, a rough
 * equivalent for the notion of Output Iterator in the Standard Library.
 * Moreover, every transformation algorithm provides a reverse_ counterpart,
 * allowing for a wider range of efficient transformations — a common
 * functionality documented by the Reversible Algorithm concept.
 * @{
 */

/**
 * \defgroup AlgoInsertGroup Inserters
 */

/**
 * \defgroup AlgoIterGroup Iteration Algorithms
 */

/**
 * \defgroup AlgoQueryGroup Querying Algorithms
 */

/**
 * \defgroup AlgoTransfGroup Transformation Algorithms
 */

/**
 * \defgroup AlgoRTGroup Runtime Algorithms
 */

/** @} */

/**
 * \defgroup MetafunGroup Metafunctions
 *
 * The TML includes a number of predefined metafunctions that can be roughly
 * classified in two categories: general purpose metafunctions, dealing with
 * conditional type selection and higher-order metafunction invocation,
 * composition, and argument binding, and numeric metafunctions, incapsulating
 * built-in and user-defined arithmetic, comparison, logical, and bitwise
 * operations.
 * 
 * Given that it is possible to perform integer numeric computations at compile
 * time using the conventional operators notation, the need for the second
 * category might be not obvious, but it in fact plays a cental role in making
 * programming with TML seemingly effortless. In particular, there are at least
 * two contexts where built-in language facilities fall short:
 * 
 * 1. Passing a computation to an algorithm.
 * 2. Performing a computation on non-integer data.
 * 
 * The second use case deserves special attention. In contrast to the built-in,
 * strictly integer compile-time arithmetics, the TML numeric metafunctions are
 * polymorphic, with support for mixed-type arithmetics. This means that they
 * can operate on a variety of numeric types &mdash; for instance, rational,
 * fixed-point or complex numbers, &mdash; and that, in general, you are
 * allowed to freely intermix these types within a single expression. See
 * Numeric Metafunction concept for more details on the TML numeric
 * infrastructure.
 *
 * @{
 */

/**
 * \defgroup MetafunTypeSelGroup Type Selection
 */

/**
 * \defgroup MetafunInvocationGroup Invocation
 */

/**
 * \defgroup MetafunComposeBindGroup Composition and Argument Binding
 */

/**
 * \defgroup MetafunLogicOpsGroup Logical Operations
 */

/**
 * \defgroup MetafunSfinaeGroup SFINAE support
 */

/**
 * \defgroup MetafunMiscGroup Miscellaneous
 */

/** @} */

/**
 * \defgroup TypesGroup Data Types
 * @{
 */

/**
 * \defgroup TypesNumericGroup Numeric
 */

/**
 * \defgroup TypesMiscGroup Miscellaneous
 */

/** @} */

/**
 * \defgroup MacrosGroup Macros
 * @{
 */

/** @} */
}
