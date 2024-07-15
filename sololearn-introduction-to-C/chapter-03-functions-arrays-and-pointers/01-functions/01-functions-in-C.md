## $\textnormal{Functions \ in \ C}$

> - A function:

```plaintext
- Is a block of code that performs a specific task.
- Is reusable.
- Makes a program easier to get.
- Can be modified without changing the calling program.
```

```c
// Example 1.
int main() {
  int x, result;

  x = 5;
  result = square(x);
  printf("%d squared is %d\n", x, result);

  return 0;
}
```

> - `Declarations` usually appear above the main() function <br />
    and take the form.

```c
// Example 2.
return_type function_name(parameters);
```

> - The `return_type` is the type of value the function sends <br />
    back to the calling statement.

> - The `function_name` is followed by parenthesis.

> - The optional `parameter` names with the type declarations <br />
    are placed inside the parentheses.

> - A function is not required to return a value but, a return <br />
    type must still be in the declaration.

> - In this case, the keywrod `void` is used.
