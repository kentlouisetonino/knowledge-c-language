#include <stdio.h>
#include <stdlib.h>

void clearScreen(void) { system("clear"); }

void newLine(void) { printf("\n"); }

void division(void) {
  int num1 = 10;
  int num2 = 20;
  float float1 = 30.5000;

  printf("DIVISION / OPERATION");
  newLine();

  printf("Output (int-int): %d", num2 / num1);
  newLine();
  printf("Output (float-int): %f", float1 / num1);
  newLine();
}

int main(void) {
  // Cleanup terminal first.
  clearScreen();
  newLine();

  // Division using / operator.
  division();

  // Exit.
  newLine();
  return 0;
}
