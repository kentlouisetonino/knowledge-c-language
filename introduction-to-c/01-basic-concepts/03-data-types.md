### Data Types
> - C supports the following basic data types.
```plaintext
int: A Integer, a whole number.
float: A floating point, a number with a fractional part.
double: A double-precision floating point value.
char: A single character.
```

> - The amount of storage required for each of these types varies by platform.


> - The `sizeof` is a built-in C operator that gives the memory requirements
    for a particular data type.

```plaintext
https://github.com/kentlouisetonino/notes-sololearn/blob/develop/introduction-to-c/01-basic-concepts/03-sizeof.c

Format Specifier (%)
- Also refereed as converstion specifiers.
- Is used to tell the compiler about the type of data to be printed or scanned
  in input and output operations.
- The different format specifiers are below.
  %ld   : Long decimal.
  %c    : Single character.
  %s    : String.
  %hi   : Short (signed).
  %hu   : Short (unsigned).
  %Lf   : Long double.
  %n    : Prints nothing.
  %d    : Decimal integer (assumes base 10).
  %i    : Decimal integer (detects the base automatically).
  %o    : Octal (base 8) integer.
  %x    : Hexadecimal (base 16) integer.
  %p    : Address (or pointer).
  %f    : Floating point number for floats.
  %u    : Integer unsigned decimal.
  %e    : Floating point number in scientific notation.
  %E    : Floating point number in scientific notation.
  %%    : Percent symbol.

printf(arg1, arg2)
- The arg1 will represent the format specifier.
- The arg2 is the value to be passed in arg1.
- The printf statement can have multiple format specifiers with corresponding
  arguments to replace the specifiers. Format specifiers are also referred
  to as conversion specifiers.
```

<br />
<br />



### Variables

