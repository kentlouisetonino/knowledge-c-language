#include <stdio.h>

void add_new_line(void) { printf("\n"); }

int main(void) {
  double input;

  // If input is not numbers, it will return 0.000000.
  printf("Enter input: ");
  scanf("%lf", &input);
  printf("%lf", input);

  add_new_line();
  add_new_line();
  return 0;
}
