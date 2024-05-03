#include <stdio.h>
#include <stdlib.h>

void clean_terminal(void) { system("clear"); }

void new_line(void) { printf("\n"); }

void new_tab(void) { printf("\t"); }

int recursiveFunctionFactorial(int num) {
  if (num == 1) {
    // Base case.
    return 1;
  } else {
    // Recursive function.
    return num * recursiveFunctionFactorial(num - 1);
  }
}

void recursiveFunction(void) {
  int num;

  // Description of the function.
  new_tab();
  printf("RECURSIVE FUNCTION EXAMPLE");
  new_line();

  // Ask the input.
  new_tab();
  printf("Enter a number: ");
  scanf("%d", &num);

  // Output the factorial.
  new_tab();
  printf("Factorial of number %d is %d.", num, recursiveFunctionFactorial(num));
  new_line();
}

int main(void) {
  // Clean up the terminal.
  clean_terminal();
  new_line();

  // Recursive function example.
  recursiveFunction();
  new_line();

  return 0;
}
