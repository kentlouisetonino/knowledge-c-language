### The For Loop
#

> - The `for` statement is a loop that executes statements a fixed
    number of times.

```c
for (initValue; condition; increment) {
    statements;
}
```

> - The `initValue` is a counter set to an initial value and
    performed only once.

> - The `condition` is a Boolean expression that compares the
    counter to a value before each loop iteration, stopping the
    loop when false is returned.

> - The `increment` increases (or decreases) the counter by a set
    value.

```c
// Refer to code-06.c file.
void forLoop(void) {
  int count;
  int maximumCount;

  // Function description.
  newTab();
  printf("FOR LOOP EXAMPLE");
  newLine();

  // Ask for the input.
  newTab();
  printf("Enter a maximum number: ");
  scanf("%d", &maximumCount);

  // Loop through and display the count.
  // Count incrementally.
  for (count = 1; count <= maximumCount; count++) {
    newTab();
    printf("Count: %d", count);
    newLine();
  }
}
```

> - The `for` loop can contain multiple expressions separated by commas
    in each part.

```c
for (x = 0, y = num; x < y; i++, y--) {
    statements;
}
```

> - Also, you can skip the `initValue`, `condition` and/or increment.

```c
int i = 0;
int max = 10;

for (; i < max; i++ ) {
    printf("%d", i);
}
```

> - Loops can also be nested. For each iteration of the outer loop the inner
    loop repeats its entire cycle.

> - A `break` in an inner loop exits that loop and execution continues with
    the outer loop.

> - A `continue` statement works similarly in nested loops.
