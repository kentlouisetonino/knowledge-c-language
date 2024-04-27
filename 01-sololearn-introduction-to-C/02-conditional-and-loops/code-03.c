#include <stdio.h>
#include <stdlib.h>

void systemClear(void) { system("clear"); }

void newLine(void) { printf("\n"); }

void newTab(void) { printf("\t"); }

void switchStatement(void) {
  int planetCode;
  char *distanceFromSun;

  // Function description.
  newTab();
  printf("SWITCH STATEMENT EXAMPLE");
  newLine();
  newTab();
  printf("Reference: [1-Mercury, 2-Venus, 3-Earth, 4-Mars, 5-Jupiter, "
         "6-Saturn, 7-Uranus, "
         "8-Neptune, 9-Pluto]");
  newLine();

  // Ask an input.
  newTab();
  printf("Planet Code: ");
  scanf("%d", &planetCode);

  // Process input.
  switch (planetCode) {
  case 1:
    distanceFromSun = "69.545 million kilometers";
    break;
  case 2:
    distanceFromSun = "108.56 million kilometers";
    break;
  case 3:
    distanceFromSun = "150.58 million kilometers";
    break;
  case 4:
    distanceFromSun = "208.01 million kilometers";
    break;
  case 5:
    distanceFromSun = "749.25 million kilometers";
    break;
  case 6:
    distanceFromSun = "1.4505 billion kilometers";
    break;
  case 7:
    distanceFromSun = "2.9301 billion kilometers";
    break;
  case 8:
    distanceFromSun = "4.4721 billion kilometers";
    break;
  case 9:
    distanceFromSun = "5.9 billion kilometers";
    break;
  default:
    distanceFromSun = "Planet Code Not Found!";
    break;
  }

  // Display the output.
  // Show the distance from sun.
  newTab();
  printf("Distance from Sun: %s", distanceFromSun);
  newLine();
}

int main(void) {
  // Cleanup terminal.
  systemClear();
  newLine();

  // Switch statement example.
  switchStatement();
  newLine();

  return 0;
}
