#ifndef MY_SMART_CLASS_H
#define MY_SMART_CLASS_H

#include <string>

class MySmartClass {
public:
  MySmartClass(const std::string& name = "");

  void setMyName(const std::string& name);

  std::string getMyName();

private:
  std::string my_name_;
};

#endif