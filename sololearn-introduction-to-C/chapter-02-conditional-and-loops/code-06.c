#include <stdio.h>
#include <stdlib.h>

void clearTerminal(void) { system("clear"); }

void newLine(void) { printf("\n"); }

void newTab(void) { printf("\t"); }

void forLoop(void) {
  int count;
  int maximumCount;

  // Function description.
  newTab();
  printf("FOR LOOP EXAMPLE");
  newLine();

  // Ask for the input.
  newTab();
  printf("Enter a maximum number: ");
  scanf("%d", &maximumCount);

  // Loop through and display the count.
  // Count incrementally.
  for (count = 1; count <= maximumCount; count++) {
    newTab();
    printf("Count: %d", count);
    newLine();
  }
}

int main(void) {
  // Clean the terminal.
  clearTerminal();
  newLine();

  // For loop example.
  forLoop();
  newLine();

  return 0;
}
