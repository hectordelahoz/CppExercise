#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

namespace datastructure{
namespace linkedlist{

class Node{
  public:
    int data;
    Node *next;
};

class LinkedList{
  public:
    LinkedList();
    LinkedList(int);
    ~LinkedList();
    int getRootValue();
    int getValueAt(int);
    const Node* getRootAddr();
    void pushBack(int);
    int getListSize();
    void printList();
  private:
    Node *root;
    int size;
    void deleteList(Node *);
};
}
}

#endif
