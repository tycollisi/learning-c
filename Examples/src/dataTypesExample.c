#include <stdio.h>

int main() {
  int integerVar = 100;
  float floatingVar = 331.79;
  double doubleVar = 844e+11;
  _Bool boolVar = 0;
  char charVar = 'W';

  printf("integerVar: %i\n", integerVar);
  printf("floatingVar: %f\n", floatingVar);
  printf("doubleVar: %e\n", doubleVar);
  printf("doubleVar: %g\n", doubleVar);
  printf("boolVar: %i\n", boolVar);
  printf("charVar: %c\n", charVar);


  return 0;
}
