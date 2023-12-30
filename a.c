#include "a.h"

#include <stdio.h>
#include <stdlib.h>

int some_main_function(int numbers) {
  fprintf(stderr, "[INFO]: %d.", numbers);
  return EXIT_SUCCESS;
}

int main(void) {
  // SOMETHING
  return EXIT_SUCCESS;
}
