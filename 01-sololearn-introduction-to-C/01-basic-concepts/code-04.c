#include <stdio.h>

void newLine(void) { printf("\n"); }

void inputGetChar(void) {
  char letter;

  printf("GETCHAR FUNCTION EXAMPLE");
  newLine();

  // Ask the input.
  printf("Input: ");
  letter = getchar();

  // Output the input.
  printf("Output: %c", letter);
  newLine();
}

int main(void) {
  // Example for getChar function.
  inputGetChar();

  return 0;
}
