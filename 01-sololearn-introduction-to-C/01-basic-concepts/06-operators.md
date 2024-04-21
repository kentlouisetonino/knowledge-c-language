### Arithmetic Operators
#

> - C supports the following operators.

```plaintext
+ (addition)
- (subtraction)
* (multiplication)
/ (division)
% (modulus division)
```

> - C has two division operators: `/` and `%`.

> - Refer to `code-06.c` function `division()` and `modulusDivision()`.

```plaintext
/ Operator
    - Performs differently depending on the data types of the operands.
    - When both operands are int data types, integer division, also
      called truncated division, which removes any remainder to result
      in an integer.
    - When one or both operands are real numbers (float or double), the
      result a real number.
    - If one of the variable is type "float", use the "%f" operator.

% Operator
    - Returns only the remainder of integer division.
    - It cannot be performed on floats and doubles.
```

<br />
<br />



### Operator Precedence
#

> - Refer to `code-06.c` function `operatorPrecedence()`.

> - C evaluates a numeric expression based on `operator precedence`.

```plaintext
+ and -
    - Are equal in precedence, as are *, /, and %.

*, /, and %
    - Are performed first in order from left to right
      and then + and -, also in order from left to right.

()
    - It can change the order of operations.
    - Indicates which operations are to be performed first.
```

<br />
<br />



### Type Conversion
#

> - Refer to `code-06.c` function `typeConversion()`.

> - `Type Conversion` is the process when operands contains
    different data types, they are automatically converted
    as necessary.

> - For example, an operation involving both floats and ints,
    the compiler will convert the `int` values to `float`
    values.

> - When you want to force the result expression to a different
    type you can perform explicit type conversion by `type casting`.

> - Explicit type conversion, even when the compiler may do
    automatic type conversion, is considered good programming
    style.

<br />
<br />



### Assignment Operators
#

> - An `assignment statement` evaluates the expression on the
    right side of the equal sign first and then assigns that
    value to the variable on the left side of the `=`.
