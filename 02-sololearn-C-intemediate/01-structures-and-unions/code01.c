#include <stdio.h>

struct course {
  int id;
  char title[50];
  float hours;
};

void add_new_line(void) { printf("\n"); }

int main(void) {
  add_new_line();
  printf("Course SizeOf: %ld", 60 * sizeof(struct course));
  add_new_line();
  add_new_line();

  return 0;
}
