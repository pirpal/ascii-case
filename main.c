#include <stdio.h>
#include <stdlib.h>
#include "ascii_case.h"

int main (void) {

  printf("\nUppercase and lowercase ascii letters\n");
  printf("--------------------------------------\n\n");

  const char *s = "fRODO sAM gANDALF gOLLUM";

  printf("Original string: '%s'\n", s);

  printf("Toggle case for each character:\n");
  for (size_t i = 0; i < strlen(s); ++i) {
    printf("%c", togglecase(s[i]));
  }

  printf("\n");
  return EXIT_SUCCESS;
}
