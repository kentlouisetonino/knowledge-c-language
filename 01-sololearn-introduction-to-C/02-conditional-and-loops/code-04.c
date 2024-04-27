#include <stdio.h>
#include <stdlib.h>

void clearTerminal(void) { system("clear"); }

void newLine(void) { printf("\n"); }

void newTab(void) { printf("\t"); }

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

int main(void) {
  // Clean up the terminal first..
  clearTerminal();
  newLine();

  // Logical && operator example.
  andOperator();
  newLine();

  return 0;
}
