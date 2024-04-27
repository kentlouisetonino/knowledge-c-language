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

void notOperator(void) {
  char answer[100];
  char *evaluation;

  // Function description.
  newTab();
  printf("LOGICAL ! OPERATOR EXAMPLE");
  newLine();

  // Ask the input.
  newTab();
  printf("Who discovered general relativity?: ");
  scanf("%s", answer);

  // Check the answer.
  if (!(strcmp(answer, "einstein") == 0 || strcmp(answer, "Einstein") == 0)) {
    evaluation = "Your Fucking Dumb!";
  } else {
    evaluation = "Correct!";
  }

  // Output the result.
  newTab();
  printf("Evaluation: %s", evaluation);
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

  // Logical ! operator example.
  notOperator();
  newLine();

  return 0;
}
