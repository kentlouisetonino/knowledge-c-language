## $\textnormal{Data \ Types}$

> - Refer to the code `code-03.c` function `dataTypes()`.

```plaintext
%ld
    - Format specifier.
    - The %ld format specifier refers to "long decimal" or "long integer".

Format Specifier
    - Are also called as conversion specifier.
```

> - C supports the following basic data types.

```plaintext
int     : Integer, a whole number.
float   : Floating point, a number with a fractional part.
double  : Double-precision floating point value.
char    : Single character.
```

> - The `sizeof` operator gives the memory requirements for
    a particular data type.

```bash
MEMORY REQUIREMENTS
# 4 byte || 32 bits
int: 4
# 4 byte || 32 bits
float: 4
# 8 byte || 64 bits
double: 8
# 1 byte || 8 bits
char: 1
```

<br />
<br />



## $\textnormal{Variables}$

> - Refer to the code `code-03.c` function `variables()`.

```plaintext
- You can declare multiple variables in a single line
  by separating them with comma.

%f
    - Format specifier for float data type.

%c
    - Format specifier for char data type.
```

```plaintext
Variable
    - Area in memory.

Identifier
    - The name of the variable.
    - Must begin with letter or an underscore.
    - Declared as a data type first before using.

Note
    - C language is case-sensitive.
```

<br />
<br />



## $\textnormal{Constant}$

> - Refer to the code `code-03.c` function `constants()`.

```plaintext
Constant
    - Stores a value that cannot be changed.
    - Use uppercase identifiers.
    - Uses "const" keyword or "#define" preprocessor.

const
    - Constant keyword.
    - Uses memory for storage.

#define
    - Preprocessor directive.
    - Uses macros for defining constant values.
    - Before compilation, the preprocessor replaces every macro
      identifier in the code with its value from the directive.
    - Every occurrence of "CONSTANT2" will be replace by "1.0002".
    - The final code sent to the compiler will already have the
      constant values in place.
    - Does not use memory.
```
