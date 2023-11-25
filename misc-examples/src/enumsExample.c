#include <stdio.h>

int main() {
  enum gender {male, female};
  enum gender myGender, femaleGender, maleGender;
  myGender = male;
  femaleGender = female;
  maleGender = male;

  printf("myGender: %d\nfemaleGender: %d\nmaleGender: %d\n", myGender, femaleGender, maleGender);
  
  return 0;
}
