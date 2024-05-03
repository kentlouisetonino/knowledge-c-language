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

int main(void) {
  // Cleanup terminal.
  clear_terminal();
  new_line();

  // Accessing array elements example.
  accessing_array_elements();
  new_line();

  return 0;
}
