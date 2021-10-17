#ifndef __LINKED_LIST_TEMPLATE_H__
#define __LINKED_LIST_TEMPLATE_H__

#include <ostream>
#include <iostream>

namespace datastructure{
namespace linkedlistTemplate{

template <typename T>
class Node{
  public:
    T data;
    Node *next;
};

template <typename T>
class LinkedListTemplate{
  public:
    LinkedListTemplate();
    LinkedListTemplate(const T &);
    ~LinkedListTemplate();
    T getRootValue();
    //int getValueAt(const T &);
    //bool updateValueAt(const T &, const T &);
    const Node<T>* getRootAddr();
    void pushBack(const T &);
    //void insert(const T &);
    //bool insertAt(const unsigned int &, const int &);
    unsigned int getListSize();
    void printList();
    //void printReverseList();
    //void reverseListOrder();
  private:
    Node<T> *root = new Node<T>();
    unsigned int size;
    //void traverseReversedList(Node *);
    //void reverseOrder(Node *);
    void deleteList(Node<T> *);
};

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

template <typename T>
LinkedListTemplate<T>::~LinkedListTemplate(){
  deleteList(root);
}

template <typename T>
T LinkedListTemplate<T>::getRootValue(){
//This method takes: O(1)
  return root->data;
}

template <typename T>
const Node<T>* LinkedListTemplate<T>::getRootAddr(){ 
  return root;
}

template <typename T>
void LinkedListTemplate<T>::pushBack(const T &value){
//This method takes: O(n)
  Node<T> *temp = root;
  while(temp->next != nullptr){
    temp = temp->next;
  }
  Node<T> *newNode = new Node<T>;
  newNode->data = value;
  newNode->next = nullptr;
  temp->next = newNode;
  size++;
}

template <typename T>
void LinkedListTemplate<T>::printList(){
//This method takes: O(n)
  Node<T> *temp = root;
  while(temp != nullptr){
    std::cout << temp->data;
    if(temp->next != nullptr){
      std::cout << ", ";
    }
    temp = temp->next;
  }
  std::cout << std::endl;
}

template<typename T>
void LinkedListTemplate<T>::deleteList(Node<T> *node){
//This method takes: O(n)
  if(node == nullptr){
    return;
  }
  deleteList(node->next);
  //std::cout << "deleting node with value: " << node->data << std::endl;
  delete node;
}


}
}

#endif
