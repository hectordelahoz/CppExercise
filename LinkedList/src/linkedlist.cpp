#include "linkedlist.hpp"
#include <iostream>
#include <ostream>

using namespace std;
namespace datastructure{
namespace linkedlist{

LinkedList::LinkedList(){
  root = new Node();
  root->data = 0;
  root->next = nullptr;
  size = 1;
}

LinkedList::LinkedList(const int &value){
  root = new Node();
  root->data = value;
  root->next = nullptr;
  size = 1;
}

LinkedList::~LinkedList(){
  deleteList(root);
}

int LinkedList::getRootValue(){
//This method takes: O(1)
  return root->data;
}

int LinkedList::getValueAt(const int &index){
//This method takes: O(n)
  if (index >= size){
    return -1;
  }
  Node *temp = root;
  for (int i = 0; i < index; i++){
    temp = temp->next;
  }
  return temp->data;
}

const Node* LinkedList::getRootAddr(){
  return root;
}

const Node* LinkedList::getNodeAt(const unsigned int &index){
  if (index >= size)
    return nullptr;

  Node* temp = root;
  for (int i=0; i < index; i++){
    temp = temp->next;
  }
  return temp;
}

bool LinkedList::deleteNodeAt(const unsigned int &index){
  if (index > size || size == 1)
    return false;

  Node* temp = root;
  if(index == 0){
    root = temp->next;
    delete temp;
    --size;
    return true;
  }

  for(int i = 0; i<index-1; i++){
    temp = temp->next;
  }
  Node* toDelete = temp->next;
  temp->next = temp->next->next;
  delete toDelete;
  --size;
  return true;
}

bool LinkedList::updateValueAt(const unsigned int &index, const int &value){
//This method takes: O(n)
  if (index >= size)
    return false;

  Node *temp = root;
  for (int i =0; i < index ; i++){
    temp = temp->next;
  }
  temp->data = value;
  return true;
}

void LinkedList::pushBack(const int &value){
//This method takes: O(n)
  Node *temp = root;
  while(temp->next != nullptr){
    temp = temp->next;
  }
  Node *newNode = new Node;
  newNode->data = value;
  newNode->next = nullptr;
  temp->next = newNode;
  size++;
}

void LinkedList::insert(const int &value){
//This method takes: O(1)
  Node *temp = root;
  Node *newNode = new Node;
  newNode->data = value;
  newNode->next = temp;
  root = newNode;
  size++;
}

bool LinkedList::insertAt(const unsigned int &position, const int &value){
//This method takes: O(n)
  if(position >= size){
    pushBack(value);
    return true;
  }

  if(position == 0){
    insert(value);
    return true;
  }

  Node *temp = root;
  for (int i = 0; i<position-1; i++){
    temp=temp->next;
  }
  Node *newNode = new Node;
  newNode->data = value;
  newNode->next = temp->next;
  temp->next = newNode;
  size++;
  return true;
}

unsigned int LinkedList::getListSize(){
  return size;
}

void LinkedList::printList(){
//This method takes: O(n)
  Node *temp = root;
  while(temp != nullptr){
    cout << temp->data;
    if(temp->next != nullptr){
      cout << ", ";
    }
    temp = temp->next;
  }
  cout << endl;
}

void LinkedList::printReverseList(){
  traverseReversedList(root);
}

void LinkedList::traverseReversedList(Node *node){
//This method takes: O(n)
  if (node == nullptr){
    return;
  }
  traverseReversedList(node->next);
  if (node == root){
    cout << node->data << endl;
    return;
  }
  cout << node->data << "-";
}

void LinkedList::deleteList(Node *node){
//This method takes: O(n)
  if(node == nullptr){
    return;
  }
  deleteList(node->next);
  //cout << "deleting node with value: " << node->data << endl;
  delete node;
}

void LinkedList::reverseListOrder(){
  reverseOrder(root);
}

void LinkedList::reverseOrder(Node *node){
//This method takes: O(n)
  if(node->next == nullptr){
    root = node;
    return;
  }
  reverseOrder(node->next);
  Node *temp = node->next;
  temp->next = node;
  node->next = nullptr;
  return;
}

}
}
