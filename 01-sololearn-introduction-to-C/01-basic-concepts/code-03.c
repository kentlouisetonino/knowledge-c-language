#include <stdio.h>
#define CONSTANT2 1.0002

void newLine(void) { printf("\n"); }

void dataTypes(void) {
  printf("MEMORY REQUIREMENTS");
  newLine();
  printf("int: %ld", sizeof(int));
  newLine();
  printf("float: %ld", sizeof(float));
  newLine();
  printf("double: %ld", sizeof(double));
  newLine();
  printf("char: %ld", sizeof(char));
  newLine();
}

void variables(void) {
  int numInt = 1;
  float numFloat = 1.00001;
  char letter = 'A';

  printf("SAMPLE VARIABLES WITH VALUE");
  newLine();
  printf("Int Number: %d", numInt);
  newLine();
  printf("Float Number: %f", numFloat);
  newLine();
  printf("Char: %c", letter);
  newLine();
}

void constants(void) {
  const double CONSTANT1 = 1.0001;
  printf("Using const Keyword: %f", CONSTANT1);
  newLine();
  printf("Using define Preprocessor: %f", CONSTANT2);
  newLine();
}

int main(void) {
  // Data types sample.
  dataTypes();
  newLine();

  // Sample variables.
  variables();
  newLine();

  // Sample contants.
  constants();
  newLine();

  return 0;
}
