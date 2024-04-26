#include <stdio.h>
#include <stdlib.h>

void clearScreen(void) { system("clear"); }

void newLine(void) { printf("\n"); }

void newTab(void) { printf("\t"); }

void nestedIfStatements(void) {
  int profit = 1400;
  int clients = 18;
  int bonus;

  newTab();
  printf("NESTED IF-STATEMENT EXAMPLE");
  newLine();

  // Process.
  if (profit > 1000) {
    if (clients > 15)
      bonus = 100;
    else
      bonus = 25;
  }

  // Output.
  newTab();
  printf("Bonus: %d", bonus);
  newLine();
}

int main() {
  // Cleanup terminal first.
  clearScreen();
  newLine();

  // Nested if-statement example.
  nestedIfStatements();
  newLine();

  return 0;
}
