#include <stdio.h>

struct course {
  int id;
  char title[50];
  float hours;
};

void add_new_line(void) { printf("\n"); }

int main(void) {
  int id;
  char title[50];
  float hours;

  add_new_line();
  printf("SizeOf course Struct: %ld", sizeof(struct course));
  add_new_line();
  printf("Sizeof id Variable: %ld", sizeof(id));
  add_new_line();
  printf("Sizeof title Variable: %ld", sizeof(title));
  add_new_line();
  printf("Sizeof hours Variable: %ld", sizeof(hours));
  add_new_line();

  return 0;
}
