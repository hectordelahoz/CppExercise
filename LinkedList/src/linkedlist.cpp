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
  return root->data;
}

int LinkedList::getValueAt(const int &index){
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

bool LinkedList::updateValueAt(const unsigned int &index, const int &value){
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
  Node *temp = root;
  Node *newNode = new Node;
  newNode->data = value;
  newNode->next = temp;
  root = newNode;
  size++;
}

bool LinkedList::insertAt(const unsigned int &position, const int &value){
  if(position >= size)
    return false;

  Node *temp = root;

  if(position == 0){
    insert(value);
    return true;
  }

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
  if(node == nullptr){
    return;
  }
  deleteList(node->next);
  //cout << "deleting node with value: " << node->data << endl;
  delete node;
}

}
}
