## $\textnormal{Malloc Function}$

> - The `malloc()` function allocates a specified number of
    `contiguous bytes` in memory.

```c
// Example 1.
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr;
  ptr = malloc(10*sizeof(*ptr));  /* a block of 10 ints */

  if (ptr != NULL) {
    *(ptr+2) = 50;  /* assign 50 to third int */
  }

  printf("3rd elem equals to %d", *(ptr + 2));
  return 0;
}
```

> - `malloc` returns a pointer to the allocated memory.

> - Notice the sizeof was applied to `*ptr` of int, making <br />
    the code more robust should the `*ptr` declaration be changed <br />
    to a different data type later.
