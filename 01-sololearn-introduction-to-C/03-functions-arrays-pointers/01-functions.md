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
