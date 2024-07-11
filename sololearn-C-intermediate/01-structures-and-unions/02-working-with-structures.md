## $\textnormal{Structures with Structures}$

> - The members of a structure may also be structures.

```c
// Example 1.
#include <stdio.h>

typedef struct {
  int x;
  int y;
} point;

typedef struct {
  float radius;
  point center;
} circle;

int main() {
    point p;
    p.x = 3;
    p.y = 4;

    circle c;
    c.radius = 3.14;
    c.center = p;

    printf("Circle radius is %.2f, center is at (%d, %d)", c.radius, c.center.x, c.center.y);

    return 0;
}
```

> - Nested curly braces are used to initialize members that are structs.

> - The `dot operator` is used twice to access members of members.

> - A `struct definition` must appear before it can be used inside another struct.

<br />
<br />
<br />



## $\textnormal{Pointers to Structures}$

> - Just like pointers to variables, pointers to structures can also be defined.

```c
// Example 1.
// Defines a pointer to the myStruct structure.
struct myStruct *struct_ptr;

// Example 2.
// Stores the address of the structure variable struct_var in the pointer struct_ptr;
struct_ptr = &struct_var;

// Example 3.
// Accesses the value of the structure member struct_mem.
struct_ptr -> struct_mem;
```
