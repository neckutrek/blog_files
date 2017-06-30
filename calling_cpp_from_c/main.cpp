#include <iostream>
#include "my_smart_class.h"

int main(int argc, char** argv) {
  MySmartClass msc("Hello World!");
  std::cout << msc.getMyName() << "\n";
  return 0;
}