#include "fib.h"
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
  if (n > 1) {
    return fibonacci(n - 2) + fibonacci(n - 1);
  } else if (n == 1) {
    return 1;
  } else {
    return 0;
  }
}

int main(int argc, char **argv) {
  int n = 42;

  if (argc == 2) {
    n = atoi(argv[1]);
  }

  printf("%d\n", fibonacci(n));

  return 0;
}
