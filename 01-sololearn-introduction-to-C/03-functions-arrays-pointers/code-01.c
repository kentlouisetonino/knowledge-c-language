#include <stdio.h>
#include <stdlib.h>

// Function declartions.
void new_line(void);
void new_tab(void);
void clear_terminal(void);
int square(int num);
int sum(int x, int y);

int main(void) {
  // Cleanup the terminal first.
  clear_terminal();
  new_line();

  // Square root function example.
  new_tab();
  printf("SQUARE ROOT FUNCTION EXAMPLE");
  new_line();
  new_tab();
  printf("Square Root of 5: %d", square(5));
  new_line();
  new_line();

  // Sum function example.
  new_tab();
  printf("SUM FUNCTION EXAMPLE");
  new_line();
  new_tab();
  printf("Sum of 10 and 5: %d", sum(10, 5));
  new_line();
  new_line();

  return 0;
}

// New line function definitions.
void new_line(void) { printf("\n"); };
void new_tab(void) { printf("\t"); }
void clear_terminal(void) { system("clear"); };
int square(int num) { return num * num; };
int sum(int x, int y) { return x + y; };
