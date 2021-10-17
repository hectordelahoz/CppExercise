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
    LinkedList(const int &);
    ~LinkedList();
    int getRootValue();
    int getValueAt(const int &);
    bool updateValueAt(const unsigned int &, const int &);
    const Node* getRootAddr();
    const Node* getNodeAt(const unsigned int &);
    bool deleteNodeAt(const unsigned int &);
    void pushBack(const int &);
    void insert(const int &);
    bool insertAt(const unsigned int &, const int &);
    unsigned int getListSize();
    void printList();
    void printReverseList();
    void reverseListOrder();
  private:
    Node *root = new Node();
    unsigned int size;
    void traverseReversedList(Node *);
    void reverseOrder(Node *);
    void deleteList(Node *);
};
}
}

#endif
