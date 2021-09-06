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

LinkedList::LinkedList(int value){
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

int LinkedList::getValueAt(int index){
  if (index >= size){
    return NULL;
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

void LinkedList::pushBack(int value){
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

int LinkedList::getListSize(){
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
