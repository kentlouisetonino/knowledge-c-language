#include <stdio.h>

int sum(int *numbers, int number_elements) {
  int total = 0;

  for (int i = 0; i < number_elements; i++) {
    total += numbers[i];
  }

  return total;
}

int main(void) {
  int numbers[5] = {1, 2, 3, 4, 5};

  printf("Sum: %d\n", sum(numbers, sizeof(numbers) / sizeof(int)));

  return 0;
}
