Sequence Generator {#SeqGeneratorConcept}
==================

Description
-----------

Sequence generator is a \ref LambdaExprConcept which returns sequence
with elements corresponding to arguments provided to generator. Single
generator returns concept-identical sequences for any arguments provided.

Expression requirements
-----------------------

- `G` is a model of \ref SeqGeneratorConcept,
- `T1,...Tn` are types that define elements of a sequence being generated,
- `n` is the size of sequence being generated,


|            Expression                   |                 Type                 |            Complexity            |
| --------------------------------------- | ------------------------------------ | -------------------------------- |
| `apply<G,T1,...Tn>:: type`              |  A [Sequence](\ref SequenceConcept)  |  Unspecified                     |


Expression semantics
--------------------

|            Expression                   |                                  Semantics                              |
| --------------------------------------- | ----------------------------------------------------------------------- |
| `xxx<T>::type`                          |  Blah blah blah                                                         |


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
