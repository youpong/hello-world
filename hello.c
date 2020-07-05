#include <stdio.h>
#include "hello.h"

char *msg() {
  return "Hello, World";
}

int main() {
  puts(msg());
  return 0;
}
