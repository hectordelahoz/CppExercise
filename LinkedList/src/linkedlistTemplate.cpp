#include "linkedlistTemplate.hpp"
#include <iostream>
#include <ostream>

using namespace std;
namespace datastructure{
namespace linkedlistTemplate{

/*
template <typename T>
LinkedListTemplate<T>::LinkedListTemplate(){
  root = new Node<T>();
  root->data = 0;
  root->next = nullptr;
  size = 1;
}

template <typename T>
LinkedListTemplate<T>::LinkedListTemplate(const T &value){
  root = new Node<T>();
  root->data = value;
  root->next = nullptr;
  size = 1;
}
*/

/*
LinkedListTemplate::~LinkedListTemplate(){
  deleteList(root);
}
*/
/*
template <typename T>
T LinkedListTemplate<T>::getRootValue(){
//This method takes: O(1)
  return root->data;
}
*/
/*
int LinkedListTemplate::getValueAt(const int &index){
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
*/
/*
template <typename T>
const Node<T>* LinkedListTemplate<T>::getRootAddr(){
  return root;
}
*/
/*
bool LinkedListTemplate::updateValueAt(const unsigned int &index, const int &value){
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

void LinkedListTemplate::pushBack(const int &value){
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

void LinkedListTemplate::insert(const int &value){
//This method takes: O(1)
  Node *temp = root;
  Node *newNode = new Node;
  newNode->data = value;
  newNode->next = temp;
  root = newNode;
  size++;
}

bool LinkedListTemplate::insertAt(const unsigned int &position, const int &value){
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

unsigned int LinkedListTemplate::getListSize(){
  return size;
}

template <typename T>
void LinkedListTemplate<T>::printList(){
//This method takes: O(n)
  Node<T> *temp = root;
  while(temp != nullptr){
    cout << temp->data;
    if(temp->next != nullptr){
      cout << ", ";
    }
    temp = temp->next;
  }
  cout << endl;
}

void LinkedListTemplate::printReverseList(){
  traverseReversedList(root);
}

void LinkedListTemplate::traverseReversedList(Node *node){
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
*/
}
}
