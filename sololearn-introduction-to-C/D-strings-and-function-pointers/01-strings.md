## Strings

> - A `string` in C is an array of characters that ends <br />
    with a `NULL CHARACTER` `\0`.

> - Below are some of string declaration.

```c
char str_name[str_len] = "string";
```

> - When you provide a `string literal` to initialize the <br />
    string, the compiler automatically adds a `NULL` character <br />
    `'0'` to the char array.

> - For this reason, you must declare the array size to be at <br />
    least one character longer than the expected string length.

> - The statements below creates strings that include the `NULL` <br />
    character.

> - If the declaration does not include a char array size, then <br />
    it will be calculated based on the length of the string in <br />
    the initializatgion plus one for `\0`.

```c
#include <stdio.h>

int main() {
    char str1[6] = "hello";
    char str2[ ] = "world";  /* size 6 */
    printf("str1 is: %s, str2 is: %s", str1, str2);

    return 0;
}
```

> - A `string literal` is a text enclosed in double quotation marks.

> - A character, such as `'b'` is indicated by single quotation marks <br />
    and cannot be treated as a string.

> - A string pointer declaration such as `char *str = "stuff";`, is <br />
    considered a constant and cannot be changed from its value.

<br />

| Standard Library String Functions | Description |
| --------------------------------- | ----------- |
| strlen() | Get length of a string. |
| strcat() | Merge two strings. |
| strcpy() | Copy one string to another. |
| strlwr() | Convert string to lower case. |
| strupr() | Convert string to upper case. |
| strrev() | Reverse string. |
| strcmp() | Compare two strings. |

<br />
<br />



##  String Input

<br />

| scanf() |
| ------- |
| Use to read input according to the format specifiers. |
| Used to read a string with no address operator. |
| Stops reading input when it reaches a space. |

<br />

| gets() |
| ------ |
| Read a string with spaces. |
| Reads input until a terminating newline is reached. |

<br />

| fgets() |
| ------- |
| Reads up to a specified number of characters. |
| Prevents a buffer overlow (when string array isn't big enough for the typed text). |
| `stdin` means to read from the standard input, which is the keyboard. |
| Reads only `n - 1` characters from the `stdin` because there must be room for `\0`|

<br />
<br />



## String Output

<br />

| fputs() |
| ------- |
| Requires the name of the string and a pointer to where you want to print the string. |
| `fputs(city, stdout)` |

<br />

| puts() |
| ------ |
| Takes only a string argument and can also be used to display output. |
