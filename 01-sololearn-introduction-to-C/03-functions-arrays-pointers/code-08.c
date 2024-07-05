#include <stdio.h>

int *get_even_numbers() {
  /*
    static
      - Fixes the error: address of stack of memory
        associated with local variables numbers
        returned;
  */
  static int numbers[5];
  int even = 0;

  for (int i = 0; i < 5; i++) {
    even += 2;
    numbers[i] = even;
  }

  return numbers;
}

int main(void) {
  int *array_of_even_numbers;

  // Get the array of even numbers.
  array_of_even_numbers = get_even_numbers();

  // Arrangement of output.
  printf("INDEX: value, address\n");

  for (int i = 0; i < 5; i++) {
    printf("%d: %d, %p\n", i, array_of_even_numbers[i],
           &array_of_even_numbers[i]);
  }

  printf("\n\n");
  return 0;
}
