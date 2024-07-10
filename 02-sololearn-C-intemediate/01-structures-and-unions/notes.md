## $\textnormal{Structures}$

> - A `Structure` is a user-defined data type that groups related <br />
    variables of different data types.

> - A `Structure Declaration` includes the keyword `struct`, a <br />
    for referencing the structure, and curly braces { } with a <br />
    list of variable declarations called `members`.

```c
struct course {
    int id;
    char title[40];
    float hours;
};
```

> - A `Structure` is also called a `composite` or `aggregate` data <br />
    type and some languages refer it as `records`.

> - Refer to [code01.c](./code01.c) file for example.

```sh
// Output.
gcc -o code-01 code-01.c
./code-01

SizeOf course Struct: 60
Sizeof id Variable: 4
Sizeof title Variable: 50
Sizeof hours Variable: 4
```

> - Based on the example code above, the struct will have a `structure padding` <br />
    which is a technique to memory boundaries.

> - `struct padding` involes additional bytes known as `padding bytes`, between <br />
    the fields to ensure proper alignment and efficient memory access which result <br />
    to a struct size being larger than the sum of the sizes of its individual members.

<br />
<br />
<br />



## $\textnormal{Declarations Using Structures}$

```c
// Example 1.
#include <stdio.h>

struct student {
    int age;
    int grade;
    char name[40];
};

int main() {
    /* declare two variables */
    struct student s1;
    struct student s2;

    s1.age = 19;
    s1.grade = 9;
    sprintf(s1.name, "John Bighimer");

    s2.age = 22;
    s2.grade = 10;
    sprintf(s2.name, "Batman Jokerson");

    printf("Student: %s, %d\n", s1.name, s1.age);
    printf("Student: %s, %d\n", s2.name, s2.age);

    return 0;
}
```

> - A `struct variable` is stored in a contiguous block of memory.

> - The `sizeof` operator must be used to get the number of bytes
    needed for a struct, just as with the basic data types.
