### Using Memory
#

> - The `scanf` function places the value at the location, or
    `address`, of the variable.

> - A memory address is given as a hexadecimal number.

> - The address of a variable stays the same from the time it
    is declared until the end of its scope.

> - `Bitwise` operators perform operations on the available data
    at a bit level.

```c
// 123 (Decimal) = 1111011 (Binary)
int num = 123

// Bitwise left shift operator.
// Add 1 bit at the end.
// 11110110 (Binary) = 246 (Decimal)
num << 1

// Bitwise right shift operator.
// Remove 1 bit value at the end.
// 111101 (Binary) = 61
num >> 1
```

> - Refer to `code-05.c` file function `variable_address` for sample code.

<br />
<br />


### What is Pointer?
#

> - `Pointers` allows you to easily work with memory locations.

> - They are fundamental to arrays, strings, and other `data` structures
    and algorithms.

> - A `pointer` is a variable that contains the address of another
    variable or it points to the location assigned to a variable and can
    indirectly access the variable.

> - Pointers are declared using the `*` symbol.

```c
pointer_type *identifier
```

> - The `pointer_type` is the type of data the pointer will be pointing to.

> - The actual pointer data type is a hexadecimal number, but when declaring
    a pointer, you must indicate what type of data it will be pointing to.
