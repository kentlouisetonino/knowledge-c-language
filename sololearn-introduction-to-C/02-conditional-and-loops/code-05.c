#include <stdio.h>
#include <stdlib.h>

void clearTerminal(void) { system("clear"); }

void newLine(void) { printf("\n"); }

void newTab(void) { printf("\t"); }

void whileLoop(void) {
  int count = 1;
  int maximumLoopIteration;

  // Function description.
  newTab();
  printf("WHILE LOOP EXAMPLE");
  newLine();

  // Ask the input.
  // Count incrementally.
  newTab();
  printf("Enter a maximum loop iteration: ");
  scanf("%d", &maximumLoopIteration);

  // Display the output.
  while (count <= maximumLoopIteration) {
    newTab();
    printf("Count: %d", count);
    newLine();
    count++;
  }
}

void doWhile(void) {
  int count = 1;
  int maximumLoopIteration;

  // Function description.
  // Count decrementally.
  newTab();
  printf("DO-WHILE LOOP EXAMPLE");
  newLine();

  // Ask the input.
  newTab();
  printf("Enter a maximum loop iteration: ");
  scanf("%d", &count);

  // Loop through and output.
  do {
    newTab();
    printf("Count: %d", count);
    newLine();
    count--;
  } while (count >= 1);
}

int main(void) {
  // Cleanup the terminal.
  clearTerminal();
  newLine();

  // While loop example.
  whileLoop();
  newLine();

  // Do-while loop example.
  doWhile();
  newLine();

  return 0;
}
