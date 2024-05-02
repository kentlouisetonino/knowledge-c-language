#include <stdio.h>
#include <stdlib.h>

// Function declarations.
void new_line(void);
void new_tab(void);
void clear_terminal(void);
int square(int num);
int sum(int x, int y);

void count(void) {
  static int num = 1;

  new_tab();
  printf("Count: %d", num);
  new_line();
  num++;
}

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

  // Count function example.
  new_tab();
  printf("COUNT FUNCTION EXAMPLE");
  new_line();
  for (int start_num = 0; start_num < 5; start_num++) {
    count();
  }
  new_line();

  return 0;
}

// New line function definitions.
void new_line(void) { printf("\n"); };
void new_tab(void) { printf("\t"); }
void clear_terminal(void) { system("clear"); };
int square(int num) { return num * num; };
int sum(int x, int y) { return x + y; };
