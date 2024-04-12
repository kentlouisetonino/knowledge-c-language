#include <stdio.h>

void dataTypes(void) {
  printf("MEMORY REQUIREMENTS");
  printf("\n");
  printf("int: %ld", sizeof(int));
  printf("\n");
  printf("float: %ld", sizeof(float));
  printf("\n");
  printf("double: %ld", sizeof(double));
  printf("\n");
  printf("char: %ld", sizeof(char));
  printf("\n");
}

int main(void) {
  // Data types sample.
  dataTypes();

  return 0;
}
