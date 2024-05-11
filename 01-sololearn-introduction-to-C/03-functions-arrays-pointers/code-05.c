#include <stdio.h>
#include <stdlib.h>

void clear_terminal(void) { system("clear"); }

void add_new_line(void) { printf("\n"); }

void add_new_tab(void) { printf("\t"); }

int main(void) {
  // Clear the terminal.
  clear_terminal();
  add_new_line();

  return 0;
}
