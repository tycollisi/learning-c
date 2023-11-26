#include <stdio.h>

int main() {
  double height = 10.5;
  double width = 7.5;
  double perimeter = 2.0 * (height + width);
  double area = width * height;

  printf("height: %.2f\n", height);
  printf("width: %.2f\n", width);
  printf("perimeter: %.2f\n", perimeter);
  printf("area: %.2f\n", area);

  return 0;
}
