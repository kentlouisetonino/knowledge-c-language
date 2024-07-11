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

void typeConversion(void) {
  float numFloat = 6.5000;
  int numInt = 2;
  float newPrice;

  printf("TYPE CONVERSION");
  newLine();
  newPrice = numInt + numFloat;
  printf("OUTPUT (Implicit): %f", newPrice);
  newLine();
  newPrice = (float)numInt + numFloat;
  printf("Output (Explicit): %f", newPrice);
  newLine();
}

void assignmentOperator(void) {
  int x = 2;

  // 3
  x += 1;
  // 2
  x -= 1;
  // 6
  x *= 3;
  // 3
  x /= 2;
  // 1
  x %= 2;
  // 7
  x += 3 * 2;

  printf("ASSIGNMENT OPERATORS");
  newLine();
  printf("Output: %d", x);
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

  // Type conversion example.
  typeConversion();
  newLine();

  // Assignment operator example.
  assignmentOperator();
  newLine();

  // Exit.
  newLine();
  return 0;
}
