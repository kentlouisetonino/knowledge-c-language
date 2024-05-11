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
