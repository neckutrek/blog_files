#include "my_smart_wrapper.h"
#include "my_smart_class.h"

#include <string> // std::string
#include <cstring> // strcpy
#include <iostream>

MySmartClass MSC;

void storeTheName(char* name) {
  MSC.setMyName(name);
}

void getTheName(char* name) {
  std::string my_name = MSC.getMyName();
  const char* n = my_name.c_str();
  strcpy(name, n);
}