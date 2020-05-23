# bitmagic

this is a [build2]( https://build2.org ) package for [BitMagic]( http//bitmagic.io )

i took the liberty to modify the `bmrandom.h` header because of the usage of
`std::random_shuffle` which was removed since `c++17` and replacing it with
`std::shuffle`. an upstream pull-request has been filed.

## using the library

```cpp
#include <libbitmagic/bm.h>

...

```

## caveat

  - depending on you compile settings you might need to silcence some warnings
    before including the bitmagic headers.
  - the `tests/bench-tpch/driver` has a very long runtime
  - you have to supply compile directives like `-mavx2` yourself
      - please have a look at the `BitMagic` documentation

## references

  - [~tlk00/BitMagic]( https://github.com/tlk00/BitMagic )
