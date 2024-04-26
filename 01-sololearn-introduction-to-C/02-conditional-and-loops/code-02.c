#include <stdio.h>
#include <stdlib.h>

void clearScreen(void) { system("clear"); }

void newLine(void) { printf("\n"); }

void newTab(void) { printf("\t"); }

void nestedIfStatement(void) {
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

void elseIfStatement(void) {
  int score = 89;

  // Description.
  newTab();
  printf("ELSE-IF STATEMENT EXAMPLE");
  newLine();

  if (score >= 90) {
    newTab();
    printf("Score: %s", "Top 10% \n");
    newLine();
  } else if (score >= 80) {
    newTab();
    printf("Score: %s", "Top 20% \n");
    newLine();
  } else if (score > 75) {
    newTab();
    printf("Score: %s", "You passed.\n");
    newLine();
  } else {
    newTab();
    printf("Score: %s", "You did not pass.\n");
    newLine();
  }
}

int main() {
  // Cleanup terminal first.
  clearScreen();
  newLine();

  // Nested if-statement example.
  nestedIfStatement();
  newLine();

  // An else-if statement example.
  elseIfStatement();
  newLine();

  return 0;
}
