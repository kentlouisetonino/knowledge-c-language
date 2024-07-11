#include <stdio.h>
#include <stdlib.h>

void clear_terminal(void) { system("clear"); }

void new_line(void) { printf("\n"); }

void new_tab(void) { printf("\t"); }

void two_dimensional_array(void) {
  int a[1][2];
  a[0][0] = 1;
  a[0][1] = 2;

  // Description and output.
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

void loop_two_dimensional_array(void) {
  int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int sum = 0;

  // Description.
  new_tab();
  printf("LOOPING THROUGH TWO-DIMENSIONAL ARRAY EXAMPLE");
  new_line();

  // Compute the sum.
  for (int row = 0; row < 2; row++) {
    for (int column = 0; column < 3; column++) {
      sum += numbers[row][column];
    }
  }

  new_tab();
  printf("Sum: %d", sum);
  new_line();
}

int main(void) {
  // Cleanup the terminal.
  clear_terminal();
  new_line();

  // Two-dimensional array example.
  two_dimensional_array();
  new_line();

  // Looping through two-dimensional array example.
  loop_two_dimensional_array();
  new_line();

  return 0;
}
