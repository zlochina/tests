#include "a.h"

#include <stdio.h>
#include <stdlib.h>

int some_main_function(int numbers) {
  fprintf(stderr, "[INFO]: %d.", numbers);
  return EXIT_SUCCESS;
}

int new_feature_print(int num) {
  char *buff = NULL;
  buff = (char *)malloc(num + 1);
  if (buff == NULL) return EXIT_FAILURE;

  for (int i = 0; i < num; i++) {
    buff[i] = '-';
  }
  buff[num] = '\0';
  printf("%s\n", buff);
  return EXIT_SUCCESS;
}

int main(void) {
  // SOMETHING
  return EXIT_SUCCESS;
}
