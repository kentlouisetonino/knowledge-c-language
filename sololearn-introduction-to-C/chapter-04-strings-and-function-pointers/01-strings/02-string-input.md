## $\textnormal{String Input}$

> - To retrieve a line of text or other string from the user, C <br />
    provides the `scanf()`, `gets()`, and `fgets()` functions.

> - You can use `scanf()` to read input according to the format <br />
    specifiers.

```c
// Example 1.
#include <stdio.h>

int main() {
    char first_name[25];
    int age;
    printf("Enter your first name and age: \n");
    scanf("%s %d", first_name, &age);

    printf("\nHi, %s. Your age is %d", first_name, age);

    return 0;
}
```
