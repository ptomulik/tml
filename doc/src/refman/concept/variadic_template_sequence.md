Variadic Template Sequence {#VariadicTemplateSeqConcept}
==========================

Description
-----------

\ref VariadicTemplateSeqConcept `S` is a \ref TemplateSeqConcept which is an
instantiation of variadic template class `X` of the following form

\code
template <class...> struct X;
\endcode


Refinement of
-------------

\ref TemplateSeqConcept

Expression requirements
-----------------------


|            Expression                   |                 Type                 |            Complexity            |
| --------------------------------------- | ------------------------------------ | -------------------------------- |
| `xxx< S > :: type`                      |  Unknown                             |  Unspecified                     |


Expression semantics
--------------------

|            Expression                   |                                  Semantics                              |
| --------------------------------------- | ----------------------------------------------------------------------- |
| `xxx< S > :: type`                      |  Bla bla bla bla                                                        |


Invariants
----------

For any Xxx `X` the following invariants always hold:

- invariant 1
- invariant 2

Models
------

- model1
- model2


See also
--------
