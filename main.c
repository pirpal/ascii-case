#include <stdio.h>
#include <stdlib.h>
#include "ascii_case.h"

int main (void) {

  const char *s = "fRODO sAM gANDALF gOLLUM";

  printf("Original string: '%s'\n", s);

  printf("Toggle case: '");
  for (size_t i = 0; i < strlen(s); ++i) {
    printf("%c", togglecase(s[i]));
  }

  printf("'\n");
  return EXIT_SUCCESS;
}
