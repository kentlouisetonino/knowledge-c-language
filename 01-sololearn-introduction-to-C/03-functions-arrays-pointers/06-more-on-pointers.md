### Pointers and Arrays
#

> - With pointers, we can point to the first element and then use
    `address arithmetic` to traverse the array.

```plaintext
+   : Used to move forward to a memory location.
-   : Used to move backward to a memory location.
```

> - Refer to file `code-06.c` function `pointers_arrays`.

> - An important concept with arrays is that an `array name` acts as
    a pointer to the first element of the array.

> - Therefore, the statement `ptr = a` can be thought of as `ptr = &a[0]`.

> - Consider the following statement `printf("%d", *a)` to print the first
    element.

<br />
<br />



### More Address Arithmetic
#

> - Refer to file `code-06` function `more_address_arithmetic()`.

> - Address arithmetic can also be thought of as pointer arithmetic <br />
    the operations involve pointers.

> - Besides using `+` and `-` to refer to the next and previous <br />
    memory locations, you can use the assignment operators to change <br />
    the address the pointer contains.

> - When a pointer is incremented, the memory address increases by the <br />
    number of bytes being pointed to.

<br />
<br />



### Pointers and Functions
#

> - With pointer parameters, your functions can alter actual data <br />
    rather than a copy of data.

> - To change the actual values of variabls, the calling statement <br />
    passes addresses to pointer parameters in a function.
