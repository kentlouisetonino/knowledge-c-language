#include <stdio.h>
#include <stdlib.h>

void clearTerminal(void) { system("clear"); }

void newLine(void) { printf("\n"); }

void newTab(void) { printf("\t"); }

int main(void) {
  // Cleanup the terminal.
  clearTerminal();
  newLine();

  return 0;
}
