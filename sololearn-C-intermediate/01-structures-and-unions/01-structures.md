## $\textnormal{Structures}$

> - A `structure` is a user-defined data type that groups related <br />
    variables of different data types.

> - A `structure declaration` includes the keyword `struct`, a <br />
    structure tag for referencing the structure, and curly braces {} <br />
    with a list of variable declarations called `members`.

```c
// Example 1.
struct course {
    int id;
    char title[40];
    float hours;
};
```

> - A `structure` is also called a `composite` or `aggregate` data <br />
    type and some languages refer it as `records`.

```c
// Example 2.
#include <stdio.h>

struct course {
  int id;
  char title[50];
  float hours;
};

void add_new_line(void) { printf("\n"); }

int main(void) {
  int id;
  char title[50];
  float hours;

  add_new_line();
  printf("SizeOf course Struct: %ld", sizeof(struct course));
  add_new_line();
  printf("Sizeof id Variable: %ld", sizeof(id));
  add_new_line();
  printf("Sizeof title Variable: %ld", sizeof(title));
  add_new_line();
  printf("Sizeof hours Variable: %ld", sizeof(hours));
  add_new_line();

  return 0;
}

```

```sh
# Output.
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



## $\textnormal{Declarations \ Using \ Structures}$

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

> - The `sizeof` operator must be used to get the number of bytes <br />
    needed for a struct, just as with the basic data types.

> - The `sprintf` function store the output on char `buffer` which <br />
    are specified in sprintf.

> - In C, `buffer` is referred to as a sequential section of memory <br />
    that is used to temporarily store some data that is being <br />
    tranferred from one place to another.

> - If you want to initialize a structure using curly braces after <br />
    declartion, you will also need to `type cast`, as in the statements.

```c
// Example 2.
struct human h1;
h1 =  (struct human) { 19, "Kent" };
```

> - You can use named member initialization when initializing a structure <br />
    to initialize corresponding members.

<br />
<br />
<br />



## $\textnormal{Accessing Structure Members}$

> - Access the members of a struct variable by using the `. (dot operator)`.

```c
// Example 1.
#include <stdio.h>

struct student {
    int age;
    int grade;
    char name[40];
};

int main() {
    struct student s1 = {19, 9, "Jason"};
    struct student s2;

    printf("Assigning, s2 = s1\n");
    s2 = s1;

    printf("Results, Name: %s, Age: %d, Grade: %d\n", s2.name, s2.age, s2.grade);

    return 0;
}
```

> - String assignment requires `strcpy()` from the `string.h` library.

<br />
<br />
<br />



## $\textnormal{Using Typedef}$

> - The `typedef` keyword creates a type definition that simplifies code and <br />
    makes a program easier to read.

> - The `typedef` is commonly used with structures because it eliminates the <br />
    need to use the keyword `struct` when declaring variables.

```c
// Example 1.
#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char title[40];
    float hours;
} course;

int main() {
    course cs1;
    course cs2;

    cs1.id = 123456;
    strcpy(cs1.title, "JavaScript Basics");
    cs1.hours = 12.30;

    /* initialize cs2 */
    cs2.id = 341281;
    strcpy(cs2.title, "Advanced C++");
    cs2.hours = 14.25;

    /* display course info */
    printf("%d\t%s\t%4.2f\n", cs1.id, cs1.title, cs1.hours);
    printf("%d\t%s\t%4.2f\n", cs2.id, cs2.title, cs2.hours);

    return 0;
}
```
