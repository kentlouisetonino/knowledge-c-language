## sprintf and sscanf

<br />

| sprintf() |
| --------- |
| Can create a formatted string. |
| Useful for building a string from other data types. |


<br />

```c
#include <stdio.h>
int main()
{
  char info[100];
  char dept[ ] = "HR";
  int emp = 75;

  sprintf(info, "The %s dept has %d employees.", dept, emp);
  printf("%s\n", info);

  return 0;
}
```

<br />

| sscanf() |
| -------- |
| Scanning string for values. |
| Reads values from a string and stores them at the corresponding variable address. |

<br />
<br />



## string.h Library

<br />

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[ ] = "The grey fox";
    char s2[ ] = " jumped.";

    strcat(s1, s2);
    printf("%s\n", s1);
    printf("Length of s1 is %d\n", strlen(s1));
    strcpy(s1, s2);
    printf("s1 is now %s \n", s1);

    return 0;
}
```

<br />
<br />



## Converting String to a Number

<br />

| stdio.h | Definition |
| ------- | ---------- |
| atoi() | ASCII to integer. Convert str to equivalent int. |
| atof() | Stands for ASCII to float. Converts str to double value. |
| atol() | Stands for ASCII to long int. Convert str to long integer value. |
| strtol() | atoi lacks error handling. Use this instead. |

<br />

```c
#include <stdio.h>
int main()
{
    char input[10 ];
    int num;

    printf("Enter a number: ");
    gets(input);
    num = atoi(input);

    printf("You entered %d", num);

    return 0;
}
```

<br />
<br />



## Array of Strings

> - A two dimensional array can be used to store related things.

<br />

```c
char trip[3][15] = {
  "suitcase",
  "passport",
  "ticket"
};
```

<br />

> - Although the string lengths vary, it is necessary to declare <br />
    a size large enough to hold the longest string.

> - Below uses an array pointers.

```c
#include <stdio.h>

int main()
{
  char *trip[ ] = {
      "suitcase",
      "passport",
      "ticket"
  };

  printf("Please bring the following:\n");
  for (int i = 0; i < 3; i++) {
    printf("%s\n", trip[i]);
  }

  return 0;
}
```

> - Because each element can vary in length, the array of string pointers <br />
    has more ragged structure as opposed to a two-dimensional grid structure.

> - This approach has no limit to the string.

> - The declaration `char *items[3];` only reserves space for three <br />
    pointers; the actual strings are being referenced by these pointers.
