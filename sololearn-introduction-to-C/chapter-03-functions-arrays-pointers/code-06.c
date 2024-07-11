#include <stdio.h>
#include <stdlib.h>

void clear_screen(void) { system("clear"); }

void add_new_line(void) { printf("\n"); }

void add_new_tab(void) { printf("\t"); }

void pointers_arrays(void) {
  int a[5] = {1, 2, 3, 4, 5};
  int *pA = NULL;
  pA = a;

  // Display function description.
  add_new_tab();
  printf("POINTERS ARRAYS EXAMPLE");
  add_new_line();

  // Display the pointer pA before the loop.
  add_new_tab();
  printf("First element of array via *a: %d", *a);
  add_new_line();
  add_new_tab();
  printf("Memory address of array a: %p", &a);
  add_new_line();
  add_new_tab();
  printf("Memory address of array a via pointer pA: %p", pA);
  add_new_line();
  add_new_tab();
  printf("Memory address of pointer pA: %p", &pA);
  add_new_line();

  // Display the output during the loop.
  for (int i = 0; i < 5; i++) {
    add_new_tab();
    printf("Loop index %d: %d", i, *(pA + i));
    add_new_line();
  }
}

void more_address_arithmetic(void) {
  int a[5] = {22, 23, 24, 25, 26};
  int *ptr = NULL;

  // Display description of the function.
  add_new_tab();
  printf("MORE ADDRESS ARITHMETIC");
  add_new_line();

  // Output the samples.
  ptr = a;
  add_new_tab();
  printf("%d %p", *ptr, ptr);
  add_new_line();
  ptr++;
  add_new_tab();
  printf("%d %p", *ptr, ptr);
  add_new_line();
  ptr += 3;
  add_new_tab();
  printf("%d %p", *ptr, ptr);
  add_new_line();
  ptr--;
  add_new_tab();
  printf("%d %p", *ptr, ptr);
  add_new_line();
  ptr -= 2;
  add_new_tab();
  printf("%d %p", *ptr, ptr);
  add_new_line();
}

void swap_function(int *num1, int *num2) {
  int temp;

  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

void pointers_function(void) {
  int x = 25;
  int y = 100;

  // Description of the function.
  add_new_tab();
  printf("POINTERS FUNCTION EXAMPLE");
  add_new_line();

  // Display the output.
  add_new_tab();
  printf("Before swap: x=%d, y=%d", x, y);
  add_new_line();
  swap_function(&x, &y);
  add_new_tab();
  printf("After swap: x=%d, x=%d", x, y);
  add_new_line();
}

int main(void) {
  // Cleanup the terminal.
  clear_screen();
  add_new_line();

  // Pointers arrays example.
  pointers_arrays();
  add_new_line();

  // More address arithmetic example.
  more_address_arithmetic();
  add_new_line();

  // Pointer function example.
  pointers_function();
  add_new_line();

  return 0;
}
