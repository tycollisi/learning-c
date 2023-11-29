#include <stdio.h>

int main() {
  int a = 1;
  int b = 1;
  int result;

  result = (a && b);
  printf("%i\n", result);

  result = !(a && b);
  printf("%i\n", result);

  result = (a || b);
  printf("%i\n", result);
  return 0;
}
