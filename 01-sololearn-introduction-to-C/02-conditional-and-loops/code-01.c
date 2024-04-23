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

void ifElseStatement(void) {
  int score;
  char garbage[100];

  // Description.
  newTab();
  printf("IF-ELSE STATEMENT EXAMPLE");
  newLine();

  // Ask the input.
  newTab();
  printf("Score: ");
  scanf("%d", &score);

  // Display the output.
  if (score < 75) {
    newTab();
    printf("Status: Your Fucking Dumb!");
    newLine();
  } else {
    newTab();
    printf("Status: Passed");
    newLine();
  }

  // Cleanup the garbage.
  fgets(garbage, 100, stdin);

  // Exit.
  newLine();
}

void conditionalExpression(void) {
  int answer;
  char *output;

  // Title of the example.
  newTab();
  printf("CONDITIONAL EXPRESSION EXAMPLE");
  newLine();

  // Ask the input.
  newTab();
  printf("Does human exist? [1 = Yes, 0 = No]: ");
  scanf("%d", &answer);

  // Computation.
  output = (answer == 1) ? "Where Doomed!" : "Earth is Safe!";

  // Show the output.
  newTab();
  printf("Evaluation: %s", output);
  newLine();
}

int main(void) {
  // Cleanup the terminal.
  clearScreen();
  newLine();

  // If statement example.
  ifStatement();
  newLine();

  // If-else statement example.
  ifElseStatement();
  newLine();

  // Conditional expression example.
  conditionalExpression();
  newLine();

  return 0;
}
