#include <stdio.h>
#include "my_smart_wrapper.h"

int main() {
  storeTheName("Hello C++ from C!");
  char name[1024];
  getTheName(name);
  printf("%s\n", name);
  return 0;
}