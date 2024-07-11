## $\textnormal{Structures}$

> - A `structure` is a user-defined data type that groups related <br />
    variables of different data types.

> - A `structure declaration` includes the keyword `struct`, a <br />
    structure tag for referencing the structure, and curly braces {} <br />
    with a list of variable declarations called `members`.

```c
struct course {
    int id;
    char title[40];
    float hours;
};
```

> - A `structure` is also called a `composite` or `aggregate` data <br />
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
