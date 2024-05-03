#include <stdio.h>
#include <stdlib.h>

void new_line(void) { printf("\n"); }

void new_tab(void) { printf("\t"); }

void clear_terminal(void) { system("clear"); }

int main(void) {
  // Cleanup terminal.
  clear_terminal();
  new_line();

  return 0;
}
