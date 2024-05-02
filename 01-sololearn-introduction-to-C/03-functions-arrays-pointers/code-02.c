#include <stdio.h>
#include <stdlib.h>

void clean_terminal(void) { system("clear"); }

void new_line(void) { printf("\n"); }

void new_tab(void) { printf("\t"); }

int main(void) {
  // Clean up the terminal.
  clean_terminal();
  new_line();

  return 0;
}
