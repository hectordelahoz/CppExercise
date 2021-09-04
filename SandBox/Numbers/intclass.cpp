#include <iostream>
#include "intclass.hpp"

using namespace std;
using namespace sandbox;

IntClass::IntClass(){
  //cout << "This is my Int class" << endl;
  value = 0;
}

IntClass::IntClass(int x){
  value = x;
}

int IntClass::getValue(){
  return value;
}

void IntClass::setValue(int x){
  value = x;
}
