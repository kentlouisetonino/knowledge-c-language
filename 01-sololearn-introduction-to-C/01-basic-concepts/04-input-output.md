### Input
#

> - Refer to `code-04.c` function `inputGetChar()`.

```plaintext
getchar()
    - A function that returns the value of next single character input.
```

> - Refer to `code-04.c` function `inputGets()`.

```plaintext
gets()
    - A function that reads the input as an ordered sequence of
      characters, also called as "string".

    string
        - Stored in char array.
```

> - Refer to `code-04.c` function `inputScanF()`.

```plaintext
scanf()
    - Scans input that matches format specifiers.
    - It stops reading as soon as it encounters a space.
    - If there is a space, then it is a two separate inputs.

&
    - An address operator.
    - It gives the address, or location in memory, of a variable.
    - This is needed, because Scanf places an input value at a
      variable address.
```

<br />
<br />



### Output
#

> - Refer to `code-04.c` function `outputPutChar()`.

```plaintext
putchar()
    - A function that outputs a single character.
```

> - Refer to `code-04.c` function `outputPuts()`.

```plaintext
puts()
    - A function used to display output of string.
```

```plaintext
scanf()
    - Scans input that matches format specifier.

      int a, b;
      scanf("%d %d", &a, &b);

    - scanf() stops reading as soon it encounters a space.
```

<br />
<br />



### Formatted Input
#

```plaintext
scanf()
    - A function scans input according to format specifiers that
      convert input as necessary.

    &
        - Must be used to access the variable address.
        - String will not use this, because string name acts as a pointer.

Format Specifier
    - Format specifiers begin with a percent sign and used to assign the values.
    - Blanks, tabs, and newlines are ignored.

    %[*][max_width]conversion_character
        - (Optional) The asterisk will skip the input field.
        - (Optional) The max_width gives the maximum number of characters to
          assign to input field.
        - Conversion character converts the argument: d (decimal), c (character),
          s (string), f (float), x (hexadecimal).
```
