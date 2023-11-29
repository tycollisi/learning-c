#include <stdio.h>

int main() {
  int a = 5;
  int b = 10;
 
  int result1 = a + b;
  int result2 = b - a;
  int result3 = a * b;
  int result4 = b / a;
  int result5 = b % a;
  int result6 = a++;
  int result7 = a--;

  printf("result1 is %i\n", result1);
  printf("result2 is %i\n", result2);
  printf("result3 is %i\n", result3);
  printf("result4 is %i\n", result4);
  printf("result5 is %i\n", result5);
  printf("result6 is %i\n", result6);
  printf("result7 is %i\n", result7);
}
