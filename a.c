#include "a.h"

#include <stdio.h>
#include <stdlib.h>

int new_feature(int num) {
  char *buffer = NULL;
  buffer = (char *)malloc(num + 1);
  if (buffer == NULL) exit(EXIT_FAILURE);
  for (int i = 0; i < num; i++) {
    buffer[i] = '-';
  }
  buffer[num] = '\0';
  printf("Seperator: %s\n", buffer);
  return EXIT_SUCCESS;
}

int main(void) {
  // SOMETHING
  return EXIT_SUCCESS;
}
