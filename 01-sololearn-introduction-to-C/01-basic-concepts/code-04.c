#include <stdio.h>
#include <stdlib.h>

void clearConsole(void) { system("clear"); }

void newLine(void) { printf("\n"); }

void inputGetChar(void) {
  char letter;
  char garbage[100];

  printf("INPUT GETCHAR FUNCTION");
  newLine();

  // Ask the input.
  printf("Input: ");
  letter = getchar();

  // Output the input.
  printf("Output: %c", letter);

  // Get char can only handle 1 character.
  // The remaining characters will still remain in the input buffer.
  // This handles the remaining characters.
  // Acting as a garbage collector.
  fgets(garbage, 100, stdin);
  newLine();
}

void inputGets(void) {
  char planet[100];

  printf("INPUTS GETS FUNCTION");
  newLine();

  // Ask the input.
  printf("Input: ");
  fgets(planet, 100, stdin);

  // Output the input.
  printf("Output: %s", planet);
  newLine();
}

void inputScanF(void) {
  char planet[100];
  char garbage[100];

  printf("INPUT SCANF FUNCTION");
  newLine();

  // Ask input.
  printf("Input: ");
  scanf("%s", planet);

  // Output the input.
  printf("Output: %s", planet);
  newLine();

  // Clean up the input buffer.
  fgets(garbage, 100, stdin);
}

void outputPutChar(void) {
  char letter;
  char garbage[100];

  printf("OUTPUT PUTCHAR FUNCTION");
  newLine();

  // Ask the input.
  printf("Input: ");
  letter = getchar();

  // Output the input.
  printf("Output: ");
  putchar(letter);
  newLine();

  // Clean up the input buffer.
  fgets(garbage, 100, stdin);
}

void outputPuts(void) {
  char planet[100];

  printf("OUTPUT PUTS FUNCTION");
  newLine();

  // Ask the input.
  printf("Input: ");
  fgets(planet, 100, stdin);

  // Output the input.
  printf("Output: ");
  puts(planet);
  newLine();
}

int main(void) {
  // Clear up the console.
  clearConsole();

  // Example for getChar() function.
  inputGetChar();
  newLine();

  // Example for gets() function.
  inputGets();
  newLine();

  // Example for scanf() function.
  inputScanF();
  newLine();

  // Example for putchar() function.
  outputPutChar();
  newLine();

  return 0;
}
