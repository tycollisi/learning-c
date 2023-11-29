#include <stdio.h>

int main(int argc, char *argv[]) {
  int numberOfArguments = argc;
  char *argument1 = argv[0]; 
  char *argument2 = argv[1];

  printf("numberOfArguments: %i\n", numberOfArguments);
  printf("argument1 (program name): %s\n", argument1);
  printf("argument2 (command line argument): %s\n", argument2);

  return 0;
}
