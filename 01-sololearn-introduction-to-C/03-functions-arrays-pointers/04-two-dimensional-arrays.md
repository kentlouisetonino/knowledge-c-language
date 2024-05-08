### Two Dimensional Arrays
#

> - A `two dimensional array` is an array of arrays and can be thought of
    as a table.

```c
// First square bracket is rows.
// Second square bracket is columns.
int a[2][3];
```

```c
// Declaration with initialization.
int a[2][3] = {
    { 3, 2, 6 },
    { 4, 5, 20 }
}
```

> - An array can have more than two dimensions.

> - Refer to file `code-04.c` function `two_dimensional_array`.

<br />
<br />



### Accessing Two-Dimensional Arrays
#

> - To access an element, both the row and column index are required.

```c
int a[2][3] = {
    { 1, 2, 3 },
    { 4, 5, 6 }
};

// Will return 1.
a[0][0];

// Replace the value.
a[0][0] = 7;
```
