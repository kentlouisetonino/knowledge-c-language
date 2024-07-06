## Void Pointer

> - Used to refer any address type in memory and has a <br />
    declaration that look like:

<br />

```c
// Example 1.
void *ptr;
```

<br />

```c
// Example 2.
#include <stdio.h>

int main() {
    int x = 33;
    float y = 12.4;
    char c = 'a';
    void *ptr;

    ptr = &x;
    printf("void ptr points to %d\n", *((int *)ptr));
    ptr = &y;
    printf("void ptr points to %f\n", *((float *)ptr));
    ptr = &c;
    printf("void ptr points to %c", *((char *)ptr));

    return 0;
}
```

<br />

> - When dereferencing a void pointer, you must first <br />
    `type cast` the pointer to the appropriate data <br />
    type before dereferencing with *.

> - You cannot perform pointer arithmetic with void pointers.

<br />

```c
// Example 3.
int num = 42;
void *ptr =  &num;

printf("%d", *((int *) ptr));
```

<br />
<br />
<br />



## Functions Using void Pointers

<br />

```c
// Example 1.
void * square (const void *);
```

<br />

> - Using `* void` return type allows for any return type.

> - Parameters that are `void *` accept any argument type.

> - Use `const` if you want data passed in the parameter <br />
    without changing it.

```c
// Example 2.
#include <stdio.h>

void * square (const void *num);

int main() {
  int x, sq_int;
  x = 6;
  sq_int = square(&x);
  printf("%d squared is %d\n", x, sq_int);

  return 0;
}

void* square (const void *num) {
  static int result;

  result = (*(int *)num) * (*(int *)num);
  return(result);
}
```

<br />
<br />
<br />



## Function Pointers as Arguments

> - `Callback function` is a function pointer used as an argument. <br />

<br />

```c
// Example 1.
// Based stdlib header.
void qsort(
    void *base,
    size_t num,
    size_t width,
    int (*compare)(const void *, const void *)
)
```

<br />

```c
// Example 2.
#include <stdio.h>
#include <stdlib.h>

int compare (const void *, const void *);

int main() {
    int arr[5] = {52, 23, 56, 19, 4};
    int num, width, i;

    num = sizeof(arr)/sizeof(arr[0]);
    width = sizeof(arr[0]);
    qsort((void *)arr, num, width, compare);
    for (i = 0; i < 5; i++)
        printf("%d ", arr[ i ]);

    return 0;
}

int compare (const void *elem1, const void *elem2) {
    if ((*(int *)elem1) == (*(int *)elem2))
        return 0;
    else if ((*(int *)elem1) < (*(int *)elem2))
        return -1;
    else
        return 1;
}
```

<br />
<br />
<br />



## More Examples

<br />

```c
// Example 1.
int sqr(int n) {
  return n * n;
}

int (*fp)(int) = sqr;
int x = fp(42);
```

<br />

```c
// Example 2.
float num = 3.14;
void *ptr = &num;
*((float*)ptr) *= 3;
```

<br />

```c
// Example 3.
int x1 = 42;
float x2 = 3.14;
char x3 = 'a';
void* arr[] = {&x1, &x2, &x3};

printf(
    "%d %f %c",
    *((int*)arr[0]),
    *((float*)arr[1]),
    *((char*)arr[2])
);
```
