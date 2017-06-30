#include "my_smart_class.h"

MySmartClass::MySmartClass(const std::string& name) 
 : my_name_(name) {}

void MySmartClass::setMyName(const std::string& name) {
  my_name_ = name;
}

std::string MySmartClass::getMyName() { 
  return my_name_; 
}