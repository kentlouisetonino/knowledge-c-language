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
  printf("Memory address of array a before the loop: %p", &a);
  add_new_line();
  add_new_tab();
  printf("Memory address of array a via pointer pA before the loop: %p", pA);
  add_new_line();
  add_new_tab();
  printf("Memory address of pointer pA before the loop: %p", &pA);
  add_new_line();

  // Display the output during the loop.
  for (int i = 0; i < 5; i++) {
    add_new_tab();
    printf("Loop index %d: %d", i, *(pA + i));
    add_new_line();
  }
}

int main(void) {
  // Cleanup the terminal.
  clear_screen();
  add_new_line();

  // Pointers arrays example.
  pointers_arrays();
  add_new_line();

  return 0;
}
