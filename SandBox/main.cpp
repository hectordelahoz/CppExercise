#include "Numbers/intclass.hpp"
#include <iostream>
#include <ostream>

using namespace std;
using namespace sandbox;

int main(int argc, char **argv){
  IntClass integer1, integer2(5);
  cout << "Integer1 Value = " << integer1.getValue() << endl;
  cout << "Integer2 Value = " << integer2.getValue() << endl;
}
