Template Sequence {#TemplateSeqConcept}
=================

Description
-----------

A \ref TemplateSeqConcept `S` is an instantiation of a template class `X`
which matches the following template parameter specification

\code
template<class ...> struct Y
\endcode

and for which the expression requirements listed below hold.

That said, any variadic and fixed-size template class with type template
parameters only may fulfil the requirements of \ref TemplateSeqConcept concept.

Refinement of
-------------

\ref RandomSeqConcept

Expression requirements
-----------------------

Assume that

- `S` is a model of \ref TemplateSeqConcept,
- `X` is a template class matching the following template parameter
  specification
  \code
      template<class...> struct Y
  \endcode
  and such that `X<T0,...T{n-1}>` is identical to `S` for some types
  `T0,...T{n-1}`,
- `i` is an \ref IntConstConcept (`0 <= i::value < n`), and
- `F` is a \ref LambdaExprConcept such that
  \code
    typedef apply<F,T0,...T{n-1}>::type R;
  \endcode
  has constant time complexity

Then the following expressions requirements must hold

|            Expression                   |                 Type                 |            Complexity            |
| --------------------------------------- | ------------------------------------ | -------------------------------- |
| `at< S, i > :: type`                    |  `Ti`                                |  Constant time                   |
| `front< S > :: type`                    |  `T0`                                |  Constant time                   |
| `back< S > :: type`                     |  `T{n-1}`                            |  Constant time                   |
| `size< S > :: type`                     |  \ref IntConstConcept                |  Constant time                   |
| `apply_sequence< F, S > :: type`        |  `R`                                 |  Constant time                   |


Expression semantics
--------------------

|            Expression                   |                                  Semantics                              |
| --------------------------------------- | ----------------------------------------------------------------------- |
| `apply_sequence< F, S > :: type`        |  Equivalent to `apply< F, T1, ...Tn> :: type`                           |


Invariants
----------

For any \ref TemplateSeqConcept `S` being an instantiation `X<T0,...T{n-1}>`
of some template `X` the following invariants always hold:

- `size < S > :: value == n`, 

Models
------

- model1
- model2

See also
--------
