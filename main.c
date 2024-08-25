#include <stdio.h>
#include <stdlib.h>
#include "int_to_string.h"

int main() {
  int value = 42;
  char* str = int_to_string(value);
  printf("The string representation of %d is: %s\n", value, str);
  free(str);

  return 0;
}
