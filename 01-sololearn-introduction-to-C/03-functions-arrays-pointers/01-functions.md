### Functions in C
#

```plaintext
Function
    - Is a block of code that performs a specific task.
    - Is reusable.
    - Makes a program easier to test.
    - Can be modified without changing the calling program.
```

```c
return_type function_name(parameters);
```

> - When the parameters types and names are included in a
    declaration, the declaration is called a `function prototype`.

> - The last step is actually `defining` the function and it appears
    after the `main()` function.

```c
// Refer to code-01.c file.

// Square function declaration.
int square(int num);

int main(void) {
  printf("Square Root of 5: %d", square(5));

  return 0;
}

// Square function definition.
int square(int num) { return num * num; };
```

<br />
<br />



### Function Parameters
#

> - A function `parameters` are used to receive values required by the
    function.

> - Values are passed to these parameters as arguments through the
    function call.

> - By default, `arguments` are passed by value, which means that a
    copy of data is given to the parameters of the called function.

> - The actual variable isn't passed into the function, so it won't
    change.

> - Arguments passed to a function are matched to parameters by
    position.

> - The parameters in a function declaration are the `formal parameters`.

> - The values passed to these parameters are the arguments, sometimes
    called the `actual parameters`.

```c
// Refer to code-01.c file.

// Function declaration.
int sum(int x, int y);

int main(void) {
  printf("Sum of 10 and 5: %d", sum(10, 5));
  return 0;
}

// Function definition.
int sum(int x, int y) { return x + y; };
```
