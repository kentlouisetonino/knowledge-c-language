#include <stdio.h>
#include <stdlib.h>

void new_line(void) { printf("\n"); }

void new_tab(void) { printf("\t"); }

void clear_terminal(void) { system("clear"); }

void accessing_array_elements(void) {
  int array[5] = {11, 12, 13, 14, 15};

  // Description of function.
  new_tab();
  printf("ACCESSING ARRAY EXAMPLE");
  new_line();

  // Output.
  new_tab();
  printf("Index 0: %d", array[0]);
  new_line();
  new_tab();
  array[0] = 10;
  printf("Updated Index 0: %d", array[0]);
  new_line();
  ;
}

void loops_with_array(void) {
  float array[5] = {1.5, 1.1, 11.3, 12.5, 3.1};
  float total = 0;

  // Function description.
  new_tab();
  printf("LOOPS WITH ARRAY EXAMPLE");
  new_line();

  // Compute the total.
  for (int num = 0; num < 5; num++) {
    total += array[num];
  }

  // Display the sum.
  new_tab();
  printf("Total: %1.2f", total);
  new_line();
}

int main(void) {
  // Cleanup terminal.
  clear_terminal();
  new_line();

  // Accessing array elements example.
  accessing_array_elements();
  new_line();

  // Loops with array.
  loops_with_array();
  new_line();

  return 0;
}
