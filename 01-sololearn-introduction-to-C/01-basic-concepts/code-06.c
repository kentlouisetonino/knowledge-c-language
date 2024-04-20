#include <stdio.h>
#include <stdlib.h>

void clearScreen(void) { system("clear"); }

void newLine(void) { printf("\n"); }

void division(void) {
  int num1 = 10;
  int num2 = 23;
  float float1 = 30.5000;

  printf("DIVISION / OPERATION");
  newLine();

  printf("Output (int-int): %d", num2 / num1);
  newLine();
  printf("Output (float-int): %f", float1 / num1);
  newLine();
}

void modulusDivision(void) {
  int num1 = 10;
  int num2 = 23;
  float float1 = 30.5000;

  printf("DIVISION %% OPERATOR");
  newLine();
  printf("Output (int-int): %d", num2 % num1);
  newLine();
}

void operatorPrecedence(void) {
  int a = 6;
  int b = 4;
  int c = 2;
  int result;

  printf("OPERATOR PRECENDENCE");
  newLine();
  result = a - b + c;
  printf("Output: %d", result);
  newLine();
  result = a + b / c;
  printf("Output: %d", result);
  newLine();
  result = (a + b) / c;
  printf("Output: %d", result);
  newLine();
}

int main(void) {
  // Cleanup terminal first.
  clearScreen();
  newLine();

  // Division using / operator.
  division();
  newLine();

  // Division using % operator.
  modulusDivision();
  newLine();

  // Operator precedence example.
  operatorPrecedence();
  newLine();

  // Exit.
  newLine();
  return 0;
}
