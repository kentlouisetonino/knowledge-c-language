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

```c
// Refer to code code-04.c file.
void orOperator(void) {
  int number = 0;
  char numeral[100];

  // Description of the function.
  newTab();
  printf("LOGICAL || OPERATOR EXAMPLE");
  newLine();
  newTab();
  printf("Instruction: Numeral should be based only on 1-10 value.");
  newLine();

  // Ask the input.
  newTab();
  printf("Enter a numeral: ");
  scanf("%s", numeral);

  // Process the input.
  // strcmp(): Used to compare string.
  // https://github.com/bminor/glibc/blob/master/string/strcmp.c
  if (*numeral == 'i' || *numeral == 'I') {
    number = 1;
  }
  if (strcmp(numeral, "ii") == 0 || strcmp(numeral, "II") == 0) {
    number = 2;
  }
  if (strcmp(numeral, "iii") == 0 || strcmp(numeral, "III") == 0) {
    number = 3;
  }
  if (strcmp(numeral, "iv") == 0 || strcmp(numeral, "IV") == 0) {
    number = 4;
  }
  if (strcmp(numeral, "v") == 0 || strcmp(numeral, "V") == 0) {
    number = 5;
  }
  if (strcmp(numeral, "vi") == 0 || strcmp(numeral, "VI") == 0) {
    number = 6;
  }
  if (strcmp(numeral, "vii") == 0 || strcmp(numeral, "VII") == 0) {
    number = 7;
  }
  if (strcmp(numeral, "viii") == 0 || strcmp(numeral, "VIII") == 0) {
    number = 8;
  }
  if (strcmp(numeral, "ix") == 0 || strcmp(numeral, "IX") == 0) {
    number = 9;
  }
  if (strcmp(numeral, "x") == 0 || strcmp(numeral, "X") == 0) {
    number = 10;
  }

  // Display the equivalent in number.
  newTab();
  printf("Equivalent: %d", number);
  newLine();
}
```

> - Take note, `&&` has higher precedence than `||` and will be evaluated first.
