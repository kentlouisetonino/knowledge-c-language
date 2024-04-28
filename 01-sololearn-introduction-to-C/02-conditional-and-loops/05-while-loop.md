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
