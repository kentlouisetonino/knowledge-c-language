## $\textnormal{For \ Loop}$

> - The `for` statement is a loop structure that executes statements <br />
    a fixed number of times.

```c
// Example 1.
for (initvalue; condition; increment) {
  statements;
}
```

> - The `initvalue` is a counter set to an initial value.

> - `condition` is a Boolean expression that compares the counter to <br />
    a value before each loop iteration, stopping the loop when false <br />
    is returned.

> - The `increment` increases (decreases) the counter by a set value.

```c
// Example 2.
#include <stdio.h>

int main() {
    int i;
    int max = 10;

    for (i = 0; i < max; i++) {
        printf("%d\n", i);
    }
}
```
