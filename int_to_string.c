#include <stdio.h>
#include <stdlib.h>

char *int_to_string(int num) {
  char* result = (char *)malloc(12 * sizeof(char));
  sprintf(result, "%d", num);
  return result;
}
