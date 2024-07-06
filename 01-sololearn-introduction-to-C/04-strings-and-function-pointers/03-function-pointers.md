## Function Pointers

> - Pointers can point to an address in memory location, <br />
    they can also point to the start of executable code.

> - Pointers to functions, or `function pointers`, point <br />
    to executable code for a function memory.

> - Function pointers can be stored in an array or passed <br />
    arguments to other functions.

```c
return_type (*func_name)(parameters)
```

> - Without `(*func_name)`, the compiler will think the <br />
    function is returning a pointer.

```c
#include <stdio.h>
void say_hello(int num_times); /* function */

int main() {
    void (*funptr)(int);  /* function pointer */
    funptr = say_hello; /* pointer assignment */
    funptr(3); /* function call */

    return 0;
}

void say_hello(int num_times) {
    int k;

    for (k = 0; k < num_times; k++) {
        printf("Hello\n");
    }
}
```

```c
int sum(int a, int b) {
  return a + b;
}

int (*psum)(int, int) = sum;
```

<br />
<br />



## Array of Function Pointers

> - An array of function pointers can replace a switch <br />
    or an if statement for choosing an action.

```c
#include <stdio.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

int main()
{
  int x, y, choice, result;
  int (*op[4])(int, int);

  op[0] = add;
  op[1] = subtract;
  op[2] = multiply;
  op[3] = divide;
  printf("Enter two integers: ");
  scanf("%d%d", &x, &y);
  printf("Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide: ");
  scanf("%d", &choice);
  result = op[choice](x, y);
  printf("\n %d", result);

  return 0;
}

int add (int x, int y) {
  return(x + y);
}

int subtract (int x, int y) {
  return(x - y);
}

int multiply (int x, int y) {
  return(x * y);
}

int divide (int x, int y) {
  if (y != 0)
    return (x / y);
  else
    return 0;
}
```

```c
// suppose f1, f2, and f3 are declared
void (*funcs[3])() = {f1, f2, f3};
for (int ix = 0; ix < 3; ix++) {
  funcs[ix]();
}
```
