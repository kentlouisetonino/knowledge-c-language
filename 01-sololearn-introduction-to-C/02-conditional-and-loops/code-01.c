#include <stdio.h>
#include <stdlib.h>

void clearScreen(void) { system("clear"); }

void newLine(void) { printf("\n"); }

void newTab(void) { printf("\t"); }

void ifStatement(void) {
  int score;

  // Description.
  newTab();
  printf("IF STATEMENT EXAMPLE");
  newLine();

  // Ask the input.
  newTab();
  printf("Score: ");
  scanf("%d", &score);

  // Display the passed.
  if (score >= 75) {
    newTab();
    printf("Status: Passed");
    newLine();
  }
  if (score < 75) {
    newTab();
    printf("Status: Failed");
    newLine();
  }

  // Exit.
  newLine();
}

int main(void) {
  // Cleanup the terminal.
  clearScreen();
  newLine();

  // If statement example.
  ifStatement();
  newLine();

  return 0;
}
