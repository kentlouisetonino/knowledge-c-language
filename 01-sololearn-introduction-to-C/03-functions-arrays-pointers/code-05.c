#include <stdio.h>
#include <stdlib.h>

void clear_terminal(void) { system("clear"); }

void add_new_line(void) { printf("\n"); }

void add_new_tab(void) { printf("\t"); }

void variable_address(void) {
  int num;
  int *addressOfNum = NULL;
  int **pointerAddressOfNum = NULL;

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
  addressOfNum = &num;
  printf("Memory address of num: %p", addressOfNum);
  add_new_line();

  // Display the address of pointer addressOfX.
  add_new_tab();
  printf("Memory address of pointer addressOfNum: %p", &addressOfNum);
  add_new_line();

  // Display the address of pointer addressOfX.
  add_new_tab();
  pointerAddressOfNum = &addressOfNum;
  printf("Memory address of addressOfNum (dereferencing): %p",
         pointerAddressOfNum);
  add_new_line();
}

int main(void) {
  // Clear the terminal.
  clear_terminal();
  add_new_line();

  // Variable address example.
  variable_address();
  add_new_line();

  return 0;
}
