#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearTerminal(void) { system("clear"); }

void newLine(void) { printf("\n"); }

void newTab(void) { printf("\t"); }

void andOperator(void) {
  int num1;
  int num2;
  char *result;
  char garbage[100];

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

  // Collect the garbage input.
  fgets(garbage, 100, stdin);

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
  if (*numeral == 'i' || *numeral == 'I') {
    number = 1;
  }
  if (strcmp(numeral, "ii") == 0 || strcmp(numeral, "II") == 0) {
    number = 2;
  }

  // Display the equivalent in number.
  newTab();
  printf("Equivalent: %d", number);
  newLine();
}

int main(void) {
  // Clean up the terminal first..
  clearTerminal();
  newLine();

  // Logical && operator example.
  andOperator();
  newLine();

  // Logical || operator exmaple.
  orOperator();
  newLine();

  return 0;
}
