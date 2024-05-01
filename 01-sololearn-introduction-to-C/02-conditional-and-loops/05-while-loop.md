### The While Loop
#

> - The `while` statement is called a `loop structure` because it executes
    statements repeatedly while an expression is true, looping over and
    over again.

```c
while (expression) {
    statements;
}
```

```c
// Refer to code-05.c file.
void whileLoop(void) {
  int count = 1;
  int maximumLoopIteration;

  // Function description.
  newTab();
  printf("WHILE LOOP EXAMPLE");
  newLine();

  // Ask the input.
  newTab();
  printf("Enter a maximum loop iteration: ");
  scanf("%d", &maximumLoopIteration);

  // Display the output.
  while (count <= maximumLoopIteration) {
    newTab();
    printf("Count: %d", count);
    newLine();
    count++;
  }
}
```

> - An `infinite loop` is one that continues indefinitely because the
    loop condition never evaluates to false.

<br />
<br />



### The do-while Loop
#

> - The `do-while` loop executes the loop statements before evaluating
    the expression to determine if the loop should be repeated.

```c
do {
    statements;
} while (expression);
```

```c
// Refer to code05.c file.
void doWhile(void) {
  int count = 1;
  int maximumLoopIteration;

  // Function description.
  // Count decrementally.
  newTab();
  printf("DO-WHILE LOOP EXAMPLE");
  newLine();

  // Ask the input.
  newTab();
  printf("Enter a maximum loop iteration: ");
  scanf("%d", &count);

  // Loop through and output.
  do {
    newTab();
    printf("Count: %d", count);
    newLine();
    count--;
  } while (count >= 1);
}
```

<br />
<br />



### Break and continue
#

> - The `break` statement was introduced for use in the `switch` statement and
    immediately use when exiting a loop.

> - The `continue` statement is used when you want to remain in the loop, but
    skip ahead to the next iteration.
