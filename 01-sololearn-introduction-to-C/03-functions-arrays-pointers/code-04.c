#include <stdio.h>
#include <stdlib.h>

void clear_terminal(void) { system("clear"); }

void new_line(void) { printf("\n"); }

void new_tab(void) { printf("\t"); }

void two_dimensional_array(void) {
  int a[1][2];
  a[0][0] = 1;
  a[0][1] = 2;

  new_tab();
  printf("TWO-DIMENSIONAL ARRAY EXAMPLE");
  new_line();
  new_tab();
  printf("[0][0]: %d", a[0][0]);
  new_line();
  new_tab();
  printf("[0][1]: %d", a[0][1]);
  new_line();
}

int main(void) {
  // Cleanup the terminal.
  clear_terminal();
  new_line();

  // Two-dimensional array example.
  two_dimensional_array();
  new_line();

  return 0;
}
