TML
===

.. image:: https://travis-ci.org/ptomulik/tml.svg?branch=master
    :target: https://travis-ci.org/ptomulik/tml

Template Metaprogramming Library

Overview
--------

The TML library is a general-purpose C++ template metaprogramming library with
compile-time algorithms, sequences and metafunctions. It's inspired by
`Boost.MPL`_ and `tinympl`_. It tries to preserve the `Boost.MPL`_'s concepts
and interfaces while adding few new concepts and features. The implementation
of TML makes use of the C++11 features, resulting in smaller code base.

Status
------

It's just the beginning. Many things are missing or incomplete.

Features
--------


Sequences
^^^^^^^^^

The TML introduces new sequence classes called ``sequence`` and
``sequence_c``. The ``sequence`` class models what I call "Variadic Template 
Sequence". The concept of "Template Sequence" makes an explicit assumption,
that the sequence has form of instantiation ``X<a0,...a{n-1}>`` of some
template ``X`` and ``a0,...,a{n-1}`` are then the elements of the sequence.
A "Variadic Template Sequence" is a Template Sequence with ``X`` being a
variadic template.

At the moment I'm focussed on these "Variadic Template Sequences", so there
is no default implementation of the Intrinsic Methods, and no support for
well-known MPL sequences such as ``vector`` or ``list``.


Classes
```````

- [ ] vector
- [ ] list
- [ ] deque
- [ ] set
- [ ] map
- [ ] range_c
- [ ] vector_c
- [ ] list_c
- [ ] set_c
- [ ] string
- [x] sequence (new)

Views
`````

- [ ] empty_sequence
- [ ] filter_view
- [ ] iterator_range
- [ ] joint_view
- [ ] single_view
- [ ] transform_view
- [ ] zip_view

Intrinsic Metafunctions
```````````````````````

+--------------------+--------+------+-------+-----+-----+--------+----------+
|                    | vector | list | deque | set | map | string | sequence |
+====================+========+======+=======+=====+=====+========+==========+
| apply_sequence     |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| at                 |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| at_c               |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| back               |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| begin              |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| clear              |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| empty              |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| end                |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| erase              |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| erase_key          |        |      |       |     |     |        |          |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| front              |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| has_key            |        |      |       |     |     |        |          |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| insert             |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| insert_range       |        |      |       |     |     |        |          |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| is_sequence        |        |      |       |     |     |        |          |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| key_type           |        |      |       |     |     |        |          |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| order              |        |      |       |     |     |        |          |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| pop_back           |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| pop_front          |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| push_back          |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| push_front         |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| sequence_generator |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| sequence_tag       |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| size               |        |      |       |     |     |        |     Y    |
+--------------------+--------+------+-------+-----+-----+--------+----------+
| value_type         |        |      |       |     |     |        |          |
+--------------------+--------+------+-------+-----+-----+--------+----------+


Iterators
^^^^^^^^^

"Template Sequences" are accompanied with "Template Sequence Iterators". All
the iterator metafunctions are implemented for these iterators, that is:

- [x] advance,
- [x] distance,
- [x] next.
- [x] prior,
- [x] deref,
- [x] iterator_category.

Note that there is no support for other iterators, especially no default
implementation of the above metafunctions.

Algorithms
^^^^^^^^^^

Algorithms currently are missing. They will be added systematically.

Inserters
`````````

- [ ] back_inserter,
- [ ] front_inserter,
- [ ] inserter.

Iteration Algorighmts
`````````````````````

- [ ] fold,
- [ ] iter_fold,
- [ ] reverse_fold,
- [ ] reverse_iter_fold,
- [ ] accumulate.

Querying Algorithms
```````````````````

- [ ] find,
- [ ] find_if,
- [ ] contains,
- [ ] count,
- [ ] count_if,
- [ ] lower_bound,
- [ ] upper_bound,
- [ ] min_element,
- [ ] max_element,
- [ ] equal.

Transformation Algorithms
`````````````````````````

- [ ] copy,
- [ ] copy_if,
- [ ] transform,
- [ ] replace,
- [ ] replace_if,
- [ ] remove,
- [ ] remove_if,
- [ ] unique,
- [ ] partition,
- [ ] stable_partition,
- [ ] sort,
- [ ] reverse,
- [ ] reverse_copy,
- [ ] reverse_copy_if,
- [ ] reverse_transform,
- [ ] reverse_replace,
- [ ] reverse_replace_if,
- [ ] reverse_remove,
- [ ] reverse_remove_if,
- [ ] reverse_unique,
- [ ] reverse_partition,
- [ ] reverse_stable_partition.

Runtime Algorithms
``````````````````

- [ ] for_each.

Metafunctions
^^^^^^^^^^^^^

Note, TML does not define numbered metafunctions (for example ``apply1``). Only
the unnumbered ones are available.

Type Selection
``````````````

- [x] if\_
- [x] if_c
- [ ] eval_if
- [ ] eval_if_c

Invocation
``````````

- [x] apply,
- [x] apply_sequence (new),
- [x] apply_wrap,
- [ ] unpack_args.

Composing and Argument Binding
``````````````````````````````

- [x] Placeholders,
- [x] lambda,
- [x] bind,
- [x] quote,
- [x] arg,
- [x] protect

Arithmetic Operations
`````````````````````

- [ ] plus,
- [ ] minus,
- [ ] times,
- [ ] divides,
- [ ] modulus,
- [ ] negate.

Comparisons
```````````

- [ ] less,
- [ ] less_equal,
- [ ] greater,
- [ ] greater_equal,
- [ ] equal_to,
- [ ] not_equal_to.

Logical Operations
``````````````````

- [ ] and\_,
- [x] or\_,
- [ ] not\_.

Bitwise Operations
``````````````````

- [ ] bitand\_,
- [ ] bitor\_,
- [ ] bitxor\_,
- [ ] shift_left,
- [ ] shift_right.

Trivial
```````

- [ ] first,
- [ ] second,
- [ ] base.

String Operations
`````````````````

- [ ] c_str.

SFINAE support
``````````````

This is new content w.r.t MPL.

- [x] enable_if,
- [x] enable_if_c,
- [x] enable_if_type.

Miscellaneous
`````````````

- [x] identity,
- [ ] always,
- [ ] inherit,
- [ ] inherit_linearly,
- [ ] numeric_cast,
- [ ] min,
- [ ] max,
- [ ] sizeof\_.

Data Types
^^^^^^^^^^

Numeric
```````

- [x] bool\_,
- [x] int\_,
- [x] long\_,
- [x] size_t\_,
- [x] integral_c,
- [x] char\_.

Miscellaneous
`````````````

- [ ] pair,
- [x] empty_base,
- [x] void\_.

Supported compilers
-------------------

Currently supported compilers:

- gcc >= 4.7
- clang >= 3.4

I haven't tested with other compilers. Feedback is welcome.


Generating reference manual
---------------------------

.. code-block:: shell

    (cd doc/ && doxygen)

The generated documentation is written to ``doc/refman/html``.

Running tests
-------------

.. code-block:: shell

    bjam -a test example

Using specific compiler (e.g. clang):

.. code-block:: shell

    bjam toolset=clang -a test example

License
-------

Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>

Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
`http://www.boost.org/LICENSE_1_0.txt <http://www.boost.org/LICENSE_1_0.txt>`_)

.. _Boost.MPL: http://www.boost.org/libs/mpl/doc/
.. _tinympl: https://github.com/sbabbi/tinympl
