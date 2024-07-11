#include <stdio.h>
#include <stdlib.h>

struct student {
  int id;
  double grade;
  char name[100];
};

void add_new_line(void) { printf("\n"); }
void clear_screen(void) { system("clear"); }

int main(void) {
  // Clear the terminal.
  clear_screen();
  add_new_line();
  add_new_line();

  struct student s1;
  struct student s2;

  // Assign values to s1.
  s1.id = 1;
  s1.grade = 90.50;
  sprintf(s1.name, "Rick");
  printf("Student #1: %d, %f, %s", s1.id, s1.grade, s1.name);
  add_new_line();

  // Assign values to s2.
  s2.id = 2;
  s2.grade = 85.78;
  sprintf(s2.name, "Morty");
  printf("Student #2: %d, %f, %s", s2.id, s2.grade, s2.name);
  add_new_line();

  add_new_line();
  add_new_line();
  return 0;
}
