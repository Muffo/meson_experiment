#include <stdio.h>
#include <config.h>
#include "math.h"

int main(int argc, char **argv) {
  printf("Hello there.\n");
  printf("1 + 1 = %d\n", sum(1, 1));

#ifdef ENABLED
  printf("Config is enabled\n");
#else
  printf("Config is disabled\n");
#endif

#ifdef TEST
  printf("Test config is enabled\n");
#else
  printf("Test config is disabled\n");
#endif


  return 0;
}
