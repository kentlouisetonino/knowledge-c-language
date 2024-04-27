### Logical Operators
#

> - Logical operators `&&` and `||` are used to form a compound
    Boolean expression that tests multiple conditions.

> - A third logical operator is `!` used to reversed the state
    of a Boolean expression.

> - The logical `AND` operator `&&` returns a true result only
    when both expressions are true.

```c
// Refer to code-04.c file.
void andOperator(void) {
  int num1;
  int num2;
  char *result;

  // Description of the function.
  newTab();
  printf("LOGICAL && OPERATOR EXAMPLE");
  newLine();

  // Ask the inputs.
  newTab();
  printf("First Number: ");
  scanf("%d", &num1);
  newTab();
  printf("Second Number: ");
  scanf("%d", &num2);

  // Check if both numbers are divisible by 2.
  if (((num1 % 2) == 0) && ((num2 % 2) == 0)) {
    result = "true";
  } else {
    result = "false";
  }

  // Output the result.
  newTab();
  printf("Are both divisible by 2?: %s", result);
  newLine();
}
```

<br />
<br />



### The || Operator
#

> - The logical `OR` operator `||` returns when any one expression
    or both expressions are true.
