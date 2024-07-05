## Functions with Array Parameters

> - An `array` cannot be passed by value to a function.

> - However, an array name is a pointer, so just passing <br />
    an array name to a function is passing a pointer to <br />
    the array.

```c
#include <stdio.h>

int add_up (int *a, int num_elements) {
    int total = 0;
    int k;

    for (k = 0; k < num_elements; k++) {
        total += a[k];
    }

    return (total);
}

int main() {
    int orders[5] = {100, 220, 37, 16, 98};

    // Output: 471
    printf("Total orders is %d\n", add_up(orders, 5));

    return 0;
}
```

> - Refer to [code-07.c](./code-07.c) file.

<br />
<br />



## Functions that Return an Array

> - Just as pointer to an array can be passed into a function, <br />
    a pointer to an array can be returned, as in the following <br />
    program.

```c
#include <stdio.h>

int * get_evens () {
   static int nums[5];
   int k;
   int even = 0;

   for (k = 0; k < 5; k++) {
        nums[k] = even += 2;
   }

    return (nums);
}

int main() {
    int *a;
    int k;

    a = get_evens(); /* get first 5 even numbers */
    for (k = 0; k < 5; k++)
      printf("%d\n", a[k]);

    return 0;
}
```

> - Refer to [code-08.c](./code-08.c) file.
