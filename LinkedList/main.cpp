#include "src/linkedlist.hpp"
#include <iostream>
#include <ostream>

using namespace std;
using namespace datastructure;
using namespace linkedlist;

int main(int argc, char **argv){
  cout << "I am testing Linked List strucutre"<< endl;
  LinkedList l1;
  cout << "data is: " << l1.getRootValue() << endl;
  cout << "creating a new list wit initial Value" << endl;
  LinkedList l2(50);
  cout << "initial data is: " << l2.getRootValue() << endl;
  cout << "first list size is: " << l1.getListSize() << endl;
  cout << "adding data to first list" << endl;
  l1.pushBack(5);
  l1.pushBack(15);
  l1.pushBack(25);
  l1.pushBack(35);
  cout << "first list size now is: " << l1.getListSize() << endl;
  cout << "printing first list" << endl;
  l1.printList();
  cout << "Updating Value"<< endl;
  l1.updateValueAt(0,10);
  l1.updateValueAt(1,50);
  l1.updateValueAt(2,150);
  l1.updateValueAt(3,250);
  l1.updateValueAt(4,350);
  cout << "printing first list" << endl;
  l1.printList();
  cout << "Inserting nodes at the beginning" << endl;
  cout << "get current root address first: " << l1.getRootAddr() << endl;
  l1.insert(20);
  cout << "get root address after insert: " << l1.getRootAddr() << endl;
  l1.printList();
  cout << "pirnt the list in the reverse order " << endl;
  l1.printReverseList();
  cout << "reversing first list order " << endl;
  l1.reverseListOrder();
  cout << "printing first list new order " << endl;
  l1.printList();
  return 0;
}
