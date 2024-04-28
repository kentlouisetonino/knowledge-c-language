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

int main(void) {
  // Cleanup the terminal.
  clearTerminal();
  newLine();

  // While loop example.
  whileLoop();
  newLine();

  return 0;
}
