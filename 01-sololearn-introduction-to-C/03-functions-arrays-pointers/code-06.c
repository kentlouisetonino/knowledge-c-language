#include <stdio.h>
#include <stdlib.h>

void clear_screen(void) { system("clear"); }

void add_new_line(void) { printf("\n"); }

void add_new_tab(void) { printf("\t"); }

int main(void) {
  // Cleanup the terminal.
  clear_screen();
  add_new_line();

  return 0;
}
