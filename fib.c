#include "fib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibonacci(int n) {
  if (n > 1) {
    return fibonacci(n - 2) + fibonacci(n - 1);
  } else if (n == 1) {
    return 1;
  } else {
    return 0;
  }
}

static int my_exit(int ex) {
  exit(ex);
}

static void test_fibonacci() {
  fibonacci(0) == 0 || my_exit(1);
  fibonacci(1) == 1 || my_exit(1);
  fibonacci(2) == 1 || my_exit(1);
  fibonacci(3) == 2 || my_exit(1);
  fibonacci(9) == 34 || my_exit(1);
}

int main(int argc, char **argv) {
  int n = 42;

  if (argc == 2 && strcmp(argv[1], "-test") == 0) {
    test_fibonacci();
    printf("========================\n");
    printf("All unit tests passed.\n");
    printf("========================\n");
    return 0;
  }

  if (argc == 2) {
    n = atoi(argv[1]);
  }

  printf("%d\n", fibonacci(n));

  return 0;
}
