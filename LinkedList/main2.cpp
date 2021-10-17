#include "src/linkedlistTemplate.hpp"
#include <iostream>
#include <ostream>

using namespace std;
using namespace datastructure;
using namespace linkedlistTemplate;

int main(int argc, char **argv){
  cout << "I am testing Linked List strucutre with Template"<< endl;
  LinkedListTemplate<int> l1;
  LinkedListTemplate<float> l2(1.2);
  cout << "data first list is: " << l1.getRootValue() << endl;
  cout << "data second list is: " << l2.getRootValue() << endl;
  cout << "addr first list is: " << l1.getRootAddr() << endl;
  cout << "addr second list is: " << l2.getRootAddr() << endl;
  l1.pushBack(5);
  l2.pushBack(5.2);

  l1.printList();
  l2.printList();
  return 0;
}
