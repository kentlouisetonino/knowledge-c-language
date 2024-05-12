#include <stdio.h>
#include <stdlib.h>

void clear_terminal(void) { system("clear"); }

void add_new_line(void) { printf("\n"); }

void add_new_tab(void) { printf("\t"); }

void pointers_address(void) {
  int num;
  int *pNum = NULL;
  int **ppNum = NULL;

  // App description.
  add_new_tab();
  printf("VARIABLE ADDRESS EXAMPLE");
  add_new_line();

  // Ask the input.
  add_new_tab();
  printf("Enter a number: ");
  scanf("%d", &num);

  // Display the input value.
  add_new_tab();
  printf("Value: %d", num);
  add_new_line();

  // Display the hex value.
  add_new_tab();
  printf("Hex Value: %x", num);
  add_new_line();

  // Display the bitwise left shift value.
  add_new_tab();
  printf("Bitwise Left Shift with 1 value: %d", num << 1);
  add_new_line();

  // Display the bitwise right shift value.
  add_new_tab();
  printf("Bitwise Right Shift with 1 value: %d", num >> 1);
  add_new_line();

  // Display the pointer value using p format specifier.
  add_new_tab();
  pNum = &num;
  printf("Memory address of num: %p", pNum);
  add_new_line();

  // Display the address of pointer addressOfX.
  add_new_tab();
  printf("Memory address of pointer pNum: %p", &pNum);
  add_new_line();

  // Display the address of pointer addressOfX.
  add_new_tab();
  ppNum = &pNum;
  printf("Memory address of addressOfNum (dereferencing): %p", ppNum);
  add_new_line();
}

void pointers_expressions(void) {
  int num1;
  int num2;
  int *pNum1 = NULL;
  pNum1 = &num1;

  // Display the description of the function.
  add_new_tab();
  printf("POINTERS EXPRESSIONS EXAMPLE");
  add_new_line();

  // Ask inputs.
  add_new_tab();
  printf("Input num1: ");
  scanf("%d", &num1);

  // Example 1.
  num2 = *pNum1 + 2;
  add_new_tab();
  printf("Value of num2 when *pNum1 + 2: %d", num2);
  add_new_line();

  // Example 2.
  num2 += *pNum1;
  add_new_tab();
  printf("Value of num2 when added with *pNum1: %d", num2);
  add_new_line();

  // Example 3.
  *pNum1 = num2;
  add_new_tab();
  printf("Value of num1 when *pNum1 is assigned with num2 value: %d", num1);
  add_new_line();

  // Example 4.
  (*pNum1)++;
  add_new_tab();
  printf("Value of num1 when *pNum1 is incremented: %d", num1);
  add_new_line();
}

int main(void) {
  // Clear the terminal.
  clear_terminal();
  add_new_line();

  // Variable address example.
  pointers_address();
  add_new_line();

  // Pointer expressions example.
  pointers_expressions();
  add_new_line();

  return 0;
}
