#include <stdio.h>
#include <stdlib.h>

void clean_terminal(void) { system("clear"); }

void new_line(void) { printf("\n"); }

void new_tab(void) { printf("\t"); }

int recursive_function_factorial(int num) {
  if (num == 1) {
    // Base case.
    return 1;
  } else {
    // Recursive function.
    return num * recursive_function_factorial(num - 1);
  }
}

void recursive_function(void) {
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
  printf("Factorial of number %d is %d.", num,
         recursive_function_factorial(num));
  new_line();
}

int main(void) {
  // Clean up the terminal.
  clean_terminal();
  new_line();

  // Recursive function example.
  recursive_function();
  new_line();

  return 0;
}
