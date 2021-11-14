#include <iostream>
#include <ostream>
#include "src/stack.hpp"
using namespace std;
using namespace datastructure;
using namespace stack;

int main(int argc, char **argv){
  cout << "Testing Stack ADT" << endl;
  Stack<int> s1;
  Stack<float> s2(5.2);
  unsigned int s1Size = s1.getSize();
  unsigned int s2Size = s2.getSize();
  if(s1Size){
    cout << "s1 stack is not empty: " << s1Size << endl;
    cout << "s1 top value is: " << s1.getTop() << endl;
  }
  else
    cout << "s1 stack is empty" << endl;

  if(s2Size){
    cout << "s2 stack is not empty, its size is: " << s2Size << endl;
    cout << "s2 top value is: " << s2.getTop() << endl;
  }
  else
    cout << "s2 stack is empty" << endl;

  return 0;
}
